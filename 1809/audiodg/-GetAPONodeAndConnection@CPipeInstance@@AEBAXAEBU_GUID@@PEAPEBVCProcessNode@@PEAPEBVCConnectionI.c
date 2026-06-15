/*
 * XREFs of ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@@Z @ 0x14003A8A4
 * Callers:
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140010F90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z @ 0x14003AA24 (-GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14003ABAC (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?GetSpatialAudioStreamProcessor@CPipeInstance@@QEBAJPEAPEAUISpatialAudioStreamProcessor@@@Z @ 0x14003AD40 (-GetSpatialAudioStreamProcessor@CPipeInstance@@QEBAJPEAPEAUISpatialAudioStreamProcessor@@@Z.c)
 *     ?GetBridgeDestinationApo@CStreamGroup@@UEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x140040570 (-GetBridgeDestinationApo@CStreamGroup@@UEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140004E48 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x140039E60 (-CopyTo@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPipeInstance::GetAPONodeAndConnection(
        CPipeInstance *this,
        const struct _GUID *a2,
        const struct CProcessNode **a3,
        const struct CConnectionInstance **a4,
        struct IAudioProcessingObject **a5)
{
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rbp
  _QWORD *v10; // rcx
  const struct CConnectionInstance *v11; // r12
  int v12; // eax
  struct IAudioProcessingObject *v13; // rbx
  struct IAudioProcessingObject *v14; // r13
  struct IAudioProcessingObject *v15; // [rsp+70h] [rbp+8h] BYREF
  const struct _GUID *v16; // [rsp+78h] [rbp+10h]
  __int64 v17; // [rsp+80h] [rbp+18h] BYREF

  v16 = a2;
  v7 = *((_QWORD *)this + 3);
  v8 = *((_QWORD *)this + 9);
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  while ( v7 )
  {
    v9 = *(_QWORD *)(v7 + 16);
    v7 = *(_QWORD *)(v7 + 8);
    v10 = *(_QWORD **)(v8 + 16);
    v8 = *(_QWORD *)(v8 + 8);
    v11 = *(const struct CConnectionInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead(v10);
    if ( *(_DWORD *)(v9 + 40) == 2 )
    {
      v15 = 0LL;
      v12 = ATL::CComPtrBase<IAudioProcessingObject>::CopyTo((_QWORD *)(*(_QWORD *)(v9 + 32) + 40LL), &v15);
      v13 = v15;
      if ( v12 >= 0 )
      {
        v17 = 0LL;
        v14 = v15;
        if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, const struct _GUID *, __int64 *))v15->lpVtbl->QueryInterface)(
               v15,
               v16,
               &v17) >= 0 )
        {
          if ( a3 )
            *a3 = (const struct CProcessNode *)v9;
          if ( a4 )
            *a4 = v11;
          if ( a5 )
          {
            v13 = 0LL;
            v15 = 0LL;
            *a5 = v14;
          }
          if ( v17 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          if ( v13 )
            ((void (__fastcall *)(struct IAudioProcessingObject *))v13->lpVtbl->Release)(v13);
          return;
        }
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      if ( v13 )
        ((void (__fastcall *)(struct IAudioProcessingObject *))v13->lpVtbl->Release)(v13);
    }
  }
}
