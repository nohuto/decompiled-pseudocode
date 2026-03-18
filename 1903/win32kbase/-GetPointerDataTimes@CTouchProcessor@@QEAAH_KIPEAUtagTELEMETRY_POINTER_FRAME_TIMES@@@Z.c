/*
 * XREFs of ?GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C016A060
 * Callers:
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C016ACEC (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTE.c)
 * Callees:
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C00BF690 (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C01602C4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C0166760 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C016955C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C016CB78 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016E13C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataTimes(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        struct tagTELEMETRY_POINTER_FRAME_TIMES *a4)
{
  __int64 v5; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  PDEVICE_OBJECT v10; // rcx
  int v11; // r9d
  __int64 v13; // rcx
  __int64 v14; // r8
  struct CPointerInputFrame *FrameById; // r15
  __int64 v16; // rax
  CPointerInfoNode *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int HistoryCount; // r12d
  unsigned int v22; // r13d
  const struct CPointerInputFrame *i; // rax
  __int64 v24; // rcx
  CInpLockGuard *v25[9]; // [rsp+50h] [rbp-48h] BYREF

  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      152,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v25, (CTouchProcessor *)((char *)this + 48));
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  if ( !v5 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_11;
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_11;
    v11 = 153;
LABEL_10:
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(v10->DeviceExtension, v7, 7, v11, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
LABEL_11:
    CInpLockGuardShared::~CInpLockGuardShared(v25);
    return 0LL;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(v5 + 28));
  if ( !FrameById )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_11;
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_11;
    v11 = 154;
    goto LABEL_10;
  }
  v16 = *(unsigned int *)(v5 + 32);
  if ( (unsigned int)v16 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v7, v14);
    v16 = *(unsigned int *)(v5 + 32);
  }
  v17 = (CPointerInfoNode *)(*((_QWORD *)FrameById + 16) + 496 * v16);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v17) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
  if ( (*(_DWORD *)v17 & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
  HistoryCount = CPointerInfoNode::GetHistoryCount(v17);
  if ( a3 > HistoryCount )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_11;
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_11;
    v11 = 155;
    goto LABEL_10;
  }
  *(_OWORD *)a4 = *(_OWORD *)((char *)FrameById + 72);
  *((_OWORD *)a4 + 1) = *(_OWORD *)((char *)FrameById + 88);
  v22 = 1;
  if ( a3 > 1 )
  {
    for ( i = CTouchProcessor::GetPreviousFrameByDevice(this, FrameById);
          v22 < a3 && i && HistoryCount > 1;
          i = CTouchProcessor::GetPreviousFrameByDevice(this, i) )
    {
      v24 = 32LL * v22;
      *(_OWORD *)((char *)a4 + v24) = *(_OWORD *)((char *)FrameById + 72);
      *(_OWORD *)((char *)a4 + v24 + 16) = *(_OWORD *)((char *)FrameById + 88);
      ++v22;
      --HistoryCount;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      7,
      156,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  CInpLockGuardShared::~CInpLockGuardShared(v25);
  return 1LL;
}
