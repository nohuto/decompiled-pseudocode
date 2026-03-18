/*
 * XREFs of ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C0168120
 * Callers:
 *     ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1C0169194 (-GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A3EB0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     GetPointerInfoSize @ 0x1C0110C7C (GetPointerInfoSize.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C015E0C4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C0164560 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C016735C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C016A978 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016BF50 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C016C6C0 (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataWithHistory(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        struct tagPOINTER_INFO *a6)
{
  int v9; // edx
  __int64 PointerInfoSize; // rbp
  unsigned int v11; // ebx
  __int64 v12; // rdx
  PDEVICE_OBJECT v13; // rcx
  int v14; // r9d
  __int64 v15; // rcx
  __int64 v16; // r8
  struct CPointerInputFrame *FrameById; // r13
  __int64 v18; // rax
  CPointerInfoNode *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // r15d
  unsigned int HistoryCount; // eax
  unsigned int v25; // edi
  unsigned int v26; // r12d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  const struct CPointerInputFrame *PreviousFrameByDevice; // r14
  CPointerInfoNode *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rcx
  unsigned int v39; // eax
  CInpLockGuard *v41; // [rsp+30h] [rbp-48h] BYREF
  int v42; // [rsp+38h] [rbp-40h]

  PointerInfoSize = (unsigned int)GetPointerInfoSize(a3);
  v11 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      7,
      123,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v41, (CTouchProcessor *)((char *)this + 48));
  if ( !a2 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_13;
    v14 = 124;
LABEL_12:
    LOBYTE(v12) = 5;
    WPP_RECORDER_SF_(v13->DeviceExtension, v12, 7, v14, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
LABEL_13:
    v11 = 0;
    goto LABEL_41;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  if ( !FrameById )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_13;
    v14 = 125;
    goto LABEL_12;
  }
  v18 = *(unsigned int *)(a2 + 32);
  if ( (unsigned int)v18 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v12, v16);
    v18 = *(unsigned int *)(a2 + 32);
  }
  v19 = (CPointerInfoNode *)(*((_QWORD *)FrameById + 16) + 496 * v18);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v19) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
  if ( (*(_DWORD *)v19 & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
  v23 = 1;
  if ( a4 >= (unsigned int)PointerInfoSize )
  {
    v11 = CTouchProcessor::PointerInfoCopyOutHelper(
            this,
            v19,
            *((struct tagHID_POINTER_DEVICE_INFO **)FrameById + 18),
            a3,
            PointerInfoSize,
            a6);
    if ( v11 )
    {
      a4 -= PointerInfoSize;
      a6 = (struct tagPOINTER_INFO *)((char *)a6 + PointerInfoSize);
    }
  }
  HistoryCount = CPointerInfoNode::GetHistoryCount(v19);
  v25 = *((_DWORD *)v19 + 88);
  v26 = HistoryCount;
  PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, FrameById);
  if ( v11 )
  {
    do
    {
      if ( !PreviousFrameByDevice || v26 <= 1 )
        break;
      if ( v25 >= *((_DWORD *)PreviousFrameByDevice + 12) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29);
      v31 = (CPointerInfoNode *)(*((_QWORD *)PreviousFrameByDevice + 16) + 496LL * v25);
      if ( !(unsigned int)CPointerInfoNode::IsValid(v31) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34);
      ++v23;
      if ( a4 >= (unsigned int)PointerInfoSize )
      {
        v11 = CTouchProcessor::PointerInfoCopyOutHelper(
                this,
                v31,
                *((struct tagHID_POINTER_DEVICE_INFO **)FrameById + 18),
                a3,
                PointerInfoSize,
                a6);
        if ( v11 )
        {
          a6 = (struct tagPOINTER_INFO *)((char *)a6 + PointerInfoSize);
          a4 -= PointerInfoSize;
        }
      }
      v35 = CPointerInfoNode::GetHistoryCount(v31);
      v38 = v26 - 1;
      if ( v35 != (_DWORD)v38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v36, v37);
      v39 = CPointerInfoNode::GetHistoryCount(v31);
      v25 = *((_DWORD *)v31 + 88);
      v26 = v39;
      PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, PreviousFrameByDevice);
    }
    while ( v11 );
    if ( v11 )
      *a5 = v23;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v27) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v27,
      7,
      126,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  }
LABEL_41:
  if ( !v42 )
    CInpLockGuard::UnLock(v41);
  return v11;
}
