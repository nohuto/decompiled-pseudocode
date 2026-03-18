/*
 * XREFs of ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C013B4C0
 * Callers:
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C013CB1C (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C0062F60 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00AD348 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     GetPointerInfoSize @ 0x1C00ECAD4 (GetPointerInfoSize.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0132F34 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C013FE74 (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerData(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        struct tagPOINTER_INFO *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  PDEVICE_OBJECT v12; // rcx
  unsigned __int16 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *FrameById; // rdi
  __int64 v17; // r8
  unsigned int v18; // ebx
  __int64 v19; // rax
  CPointerInfoNode *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  CInpLockGuard *v25; // [rsp+30h] [rbp-28h] BYREF
  int v26; // [rsp+38h] [rbp-20h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x73u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  if ( a4 != (unsigned int)GetPointerInfoSize(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v25, (CTouchProcessor *)((char *)this + 56));
  if ( !a2 )
  {
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 116;
LABEL_11:
      WPP_RECORDER_SF_(
        (__int64)v12->DeviceExtension,
        5u,
        0xBu,
        v13,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      goto LABEL_12;
    }
    goto LABEL_12;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  if ( !FrameById )
  {
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 117;
      goto LABEL_11;
    }
LABEL_12:
    v18 = 0;
    goto LABEL_21;
  }
  v19 = *(unsigned int *)(a2 + 32);
  if ( (unsigned int)v19 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v17);
    v19 = *(unsigned int *)(a2 + 32);
  }
  v20 = (CPointerInfoNode *)(FrameById[13] + 576 * v19);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v20) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
  if ( (*(_DWORD *)v20 & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
  v18 = CTouchProcessor::PointerInfoCopyOutHelper(
          this,
          v20,
          (struct tagHID_POINTER_DEVICE_INFO *)FrameById[15],
          a3,
          a4,
          a5);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x76u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
LABEL_21:
  if ( !v26 )
    CInpLockGuard::UnLock(v25);
  return v18;
}
