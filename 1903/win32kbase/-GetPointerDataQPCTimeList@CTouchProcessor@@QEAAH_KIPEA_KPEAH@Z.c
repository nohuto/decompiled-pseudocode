/*
 * XREFs of ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C0169D70
 * Callers:
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C016C6C0 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C01602C4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C0166760 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C016955C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C016CB78 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016E13C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataQPCTimeList(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4,
        int *a5)
{
  __int64 v7; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  PDEVICE_OBJECT v12; // rcx
  int v13; // r9d
  __int64 v14; // rcx
  struct CPointerInputFrame *FrameById; // rsi
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int HistoryCount; // ebp
  unsigned int v22; // ebx
  unsigned int v23; // r14d
  unsigned int v24; // edi
  __int64 v25; // rcx
  const struct CPointerInputFrame *PreviousFrameByDevice; // rsi
  __int64 v27; // r8
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  unsigned int v37; // eax
  CInpLockGuard *v39; // [rsp+30h] [rbp-38h] BYREF
  int v40; // [rsp+38h] [rbp-30h]

  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      146,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v39, (CTouchProcessor *)((char *)this + 48));
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  if ( !v7 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_29;
    v13 = 147;
LABEL_28:
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(v12->DeviceExtension, v9, 7, v13, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
LABEL_29:
    v22 = 0;
    goto LABEL_44;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(v7 + 28));
  if ( !FrameById )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_29;
    v13 = 148;
    goto LABEL_28;
  }
  v17 = *(unsigned int *)(v7 + 32);
  if ( (unsigned int)v17 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v9, v16);
    v17 = *(unsigned int *)(v7 + 32);
  }
  v18 = *((_QWORD *)FrameById + 16) + 496 * v17;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v18) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v9, v20);
  if ( a5 && *a5 && (*(_DWORD *)(v18 + 188) & 0x400000) == 0 )
  {
    *a5 = 0;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_29;
    v13 = 149;
    goto LABEL_28;
  }
  HistoryCount = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v18);
  if ( a3 > HistoryCount )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_29;
    v13 = 150;
    goto LABEL_28;
  }
  v22 = 1;
  *a4 = *(_QWORD *)(v18 + 256);
  v23 = 1;
  if ( a3 > 1 )
  {
    v24 = *(_DWORD *)(v18 + 352);
    PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, FrameById);
    do
    {
      if ( !PreviousFrameByDevice || HistoryCount <= 1 )
        break;
      if ( v24 >= *((_DWORD *)PreviousFrameByDevice + 12) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v9, v27);
      v28 = *((_QWORD *)PreviousFrameByDevice + 16) + 496LL * v24;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v28) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31);
      v32 = v23++;
      a4[v32] = *(_QWORD *)(v28 + 256);
      v33 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v28);
      v36 = HistoryCount - 1;
      if ( v33 != (_DWORD)v36 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v34, v35);
      v37 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v28);
      v24 = *(_DWORD *)(v28 + 352);
      HistoryCount = v37;
      PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, PreviousFrameByDevice);
    }
    while ( v23 < a3 );
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      7,
      151,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
LABEL_44:
  if ( !v40 )
    CInpLockGuard::UnLock(v39);
  return v22;
}
