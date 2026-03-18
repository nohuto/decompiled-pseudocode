/*
 * XREFs of ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C016A870
 * Callers:
 *     ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1C016AC20 (-GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     GetPointerInfoSize @ 0x1C01135EC (GetPointerInfoSize.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C01602C4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C0166760 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C016955C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x1C016A734 (-GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIP.c)
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C016ADE0 (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C016CB78 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x1C016DAF0 (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016E13C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameDataWithHistory(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int *a7,
        struct tagPOINTER_INFO *a8)
{
  struct tagPOINTER_INFO *v8; // r13
  unsigned __int8 *v10; // r12
  unsigned int PointerInfoSize; // eax
  int v13; // edx
  unsigned int v14; // r14d
  __int64 v15; // rdx
  PDEVICE_OBJECT v16; // rcx
  int v17; // r9d
  __int64 v18; // rcx
  struct CPointerInputFrame *FrameById; // rbp
  __int64 v20; // r8
  __int64 v21; // rax
  CPointerInfoNode *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int PointerFrameData; // ebx
  unsigned int v27; // r15d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // r13d
  unsigned __int64 v32; // rdi
  unsigned int HistoryCount; // eax
  unsigned int v34; // r15d
  unsigned int v35; // r13d
  __int64 v36; // rcx
  const struct CPointerInputFrame *PreviousFrameByDevice; // rsi
  __int64 v38; // r8
  CPointerInfoNode *v39; // rbp
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rcx
  unsigned int v47; // eax
  unsigned int v49; // [rsp+40h] [rbp-68h]
  CInpLockGuard *v50; // [rsp+48h] [rbp-60h] BYREF
  int v51; // [rsp+50h] [rbp-58h]
  unsigned int v53; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v54; // [rsp+C0h] [rbp+18h]
  int v55; // [rsp+C8h] [rbp+20h]

  v55 = a4;
  v54 = a3;
  v8 = a8;
  v10 = (unsigned __int8 *)a8;
  PointerInfoSize = GetPointerInfoSize(a3);
  v14 = a5;
  v49 = PointerInfoSize;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v13) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      7,
      127,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v50, (CTouchProcessor *)((char *)this + 48));
  if ( !a2 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v16 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_21;
    v17 = 128;
LABEL_20:
    LOBYTE(v15) = 5;
    WPP_RECORDER_SF_(v16->DeviceExtension, v15, 7, v17, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
LABEL_21:
    PointerFrameData = 0;
    goto LABEL_48;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  if ( !FrameById )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v16 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_21;
    v17 = 129;
    goto LABEL_20;
  }
  v21 = *(unsigned int *)(a2 + 32);
  if ( (unsigned int)v21 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v15, v20);
    v21 = *(unsigned int *)(a2 + 32);
  }
  v22 = (CPointerInfoNode *)(*((_QWORD *)FrameById + 16) + 496 * v21);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v22) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25);
  if ( (unsigned int)CPointerInfoNode::IsFullyReleased(v22) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v16 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_21;
    v17 = 130;
    goto LABEL_20;
  }
  v27 = 1;
  a5 = 1;
  PointerFrameData = CTouchProcessor::GetPointerFrameData(this, FrameById, v22, v54, v14, &v53, v8);
  if ( PointerFrameData )
  {
    v31 = v53;
    v32 = v49 * (unsigned __int64)v53;
    if ( v32 > 0xFFFFFFFF )
    {
      PointerFrameData = 0;
    }
    else
    {
      PointerFrameData = 1;
      if ( v14 >= (unsigned int)v32 )
      {
        if ( !(_DWORD)v32 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
        v10 = (unsigned __int8 *)a8 + (unsigned int)v32;
        v14 -= v32;
      }
      if ( v55 )
      {
        HistoryCount = CPointerInfoNode::GetHistoryCount(v22);
        v34 = *((_DWORD *)v22 + 88);
        v35 = HistoryCount;
        PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, FrameById);
        do
        {
          if ( !PreviousFrameByDevice || v35 <= 1 )
            break;
          if ( v34 >= *((_DWORD *)PreviousFrameByDevice + 12) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v28, v38);
          v39 = (CPointerInfoNode *)(*((_QWORD *)PreviousFrameByDevice + 16) + 496LL * v34);
          if ( !(unsigned int)CPointerInfoNode::IsValid(v39) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v42);
          ++a5;
          if ( v14 >= (unsigned int)v32 )
          {
            PointerFrameData = CTouchProcessor::GetPointerHistoryFrameData(
                                 this,
                                 PreviousFrameByDevice,
                                 v54,
                                 v53,
                                 v32,
                                 (unsigned __int8 *)a8,
                                 v10);
            if ( PointerFrameData )
            {
              v10 += (unsigned int)v32;
              v14 -= v32;
            }
          }
          v43 = CPointerInfoNode::GetHistoryCount(v39);
          v46 = v35 - 1;
          if ( v43 != (_DWORD)v46 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v44, v45);
          v47 = CPointerInfoNode::GetHistoryCount(v39);
          v34 = *((_DWORD *)v39 + 88);
          v35 = v47;
          PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, PreviousFrameByDevice);
        }
        while ( PointerFrameData );
        if ( !PointerFrameData )
          goto LABEL_45;
        v27 = a5;
        v31 = v53;
      }
      *a6 = v27;
      *a7 = v31;
    }
  }
LABEL_45:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v28) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v28,
      7,
      131,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
LABEL_48:
  if ( !v51 )
    CInpLockGuard::UnLock(v50);
  return PointerFrameData;
}
