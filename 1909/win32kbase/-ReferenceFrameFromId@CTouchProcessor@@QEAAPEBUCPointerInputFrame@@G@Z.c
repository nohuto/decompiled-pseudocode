/*
 * XREFs of ?ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z @ 0x1C016F3C4
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C017A704 (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A3CD8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A3EB0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C016AD00 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C016F384 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::ReferenceFrameFromId(
        CTouchProcessor *this,
        unsigned __int16 a2)
{
  CTouchProcessor *v2; // rdi
  unsigned __int16 v3; // si
  const struct CPointerInputFrame *v4; // rbx
  unsigned __int64 ThreadPointerData; // rax
  __int16 v6; // dx
  __int64 v7; // r8
  CInpLockGuard *v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp-20h]

  v2 = gpTouchProcessor;
  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      302,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  }
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v9,
    (CTouchProcessor *)((char *)v2 + 48));
  v4 = 0LL;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        v2,
                        (struct tagTHREADINFO *)((char *)gptiCurrent + 1080),
                        v3,
                        0LL,
                        0LL,
                        0LL);
  if ( ThreadPointerData )
    v4 = CTouchProcessor::ReferenceFrame((struct _KTHREAD **)v2, *(unsigned int *)(ThreadPointerData + 28), v7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      7,
      303,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  }
  if ( !v10 )
    CInpLockGuard::UnLock(v9);
  return v4;
}
