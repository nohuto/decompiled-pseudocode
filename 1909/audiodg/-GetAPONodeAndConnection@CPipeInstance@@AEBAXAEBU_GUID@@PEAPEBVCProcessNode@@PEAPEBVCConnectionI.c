/*
 * XREFs of ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@@Z @ 0x14000B120
 * Callers:
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140004F40 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?GetSpatialAudioStreamProcessor@CPipeInstance@@QEBAJPEAPEAUISpatialAudioStreamProcessor@@@Z @ 0x14000B280 (-GetSpatialAudioStreamProcessor@CPipeInstance@@QEBAJPEAPEAUISpatialAudioStreamProcessor@@@Z.c)
 *     ?GetVirtualSurroundAPO@CPipeInstance@@QEBAJPEAPEAUIVirtualSurround@@@Z @ 0x14000B2F8 (-GetVirtualSurroundAPO@CPipeInstance@@QEBAJPEAPEAUIVirtualSurround@@@Z.c)
 *     ?GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z @ 0x14000B734 (-GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x1400356E4 (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?GetBridgeDestinationApo@CStreamGroup@@UEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x14003CAB0 (-GetBridgeDestinationApo@CStreamGroup@@UEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14002A454 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPipeInstance::GetAPONodeAndConnection(
        CPipeInstance *this,
        const struct _GUID *a2,
        const struct CProcessNode **a3,
        const struct CConnectionInstance **a4,
        struct IAudioProcessingObject **a5)
{
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rax
  const struct CConnectionInstance *v12; // r14
  struct IAudioProcessingObject *v13; // rbx
  struct IAudioProcessingObject *v14; // rdi
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  struct IAudioProcessingObject *v16; // [rsp+80h] [rbp+18h]

  v8 = *((_QWORD *)this + 3);
  v9 = *((_QWORD *)this + 9);
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  while ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 16);
    v8 = *(_QWORD *)(v8 + 8);
    v11 = *(_QWORD *)(v9 + 16);
    v9 = *(_QWORD *)(v9 + 8);
    if ( !*(_QWORD *)v11 )
      ATL::AtlThrowImpl(-2147467259);
    v12 = *(const struct CConnectionInstance **)(*(_QWORD *)v11 + 16LL);
    if ( *(_DWORD *)(v10 + 40) == 2 )
    {
      v13 = *(struct IAudioProcessingObject **)(*(_QWORD *)(v10 + 32) + 40LL);
      v16 = v13;
      if ( v13 )
        ((void (__fastcall *)(struct IAudioProcessingObject *))v13->lpVtbl->AddRef)(v13);
      v15 = 0LL;
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, const struct _GUID *, __int64 *))v13->lpVtbl->QueryInterface)(
             v13,
             a2,
             &v15) >= 0 )
      {
        if ( a3 )
          *a3 = (const struct CProcessNode *)v10;
        if ( a4 )
          *a4 = v12;
        v14 = v13;
        if ( a5 )
        {
          v13 = 0LL;
          v16 = 0LL;
          *a5 = v14;
          v14 = 0LL;
        }
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        if ( v14 )
          ((void (__fastcall *)(struct IAudioProcessingObject *))v13->lpVtbl->Release)(v13);
        return;
      }
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      ((void (__fastcall *)(struct IAudioProcessingObject *))v13->lpVtbl->Release)(v13);
    }
  }
}
