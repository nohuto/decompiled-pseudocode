/*
 * XREFs of ?GetPointerMessagePoint@CTouchProcessor@@QEAAHGPEAUtagPOINT@@@Z @ 0x1C0169670
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A3EB0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00B766C (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C016AD00 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C016F384 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0173210 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerMessagePoint(
        CTouchProcessor *this,
        unsigned __int16 a2,
        struct tagPOINT *a3)
{
  unsigned __int16 v4; // si
  struct tagTHREADINPUTPOINTERLIST *v6; // rdx
  unsigned int v7; // edi
  unsigned __int64 ThreadPointerData; // rax
  const struct CPointerInputFrame *v9; // rdx
  unsigned __int64 v10; // rsi
  struct tagPOINT *v11; // rax
  CInpLockGuard *v13; // [rsp+60h] [rbp+8h] BYREF

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      106,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  }
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)&v13, (CTouchProcessor *)((char *)this + 48));
  v6 = (struct tagTHREADINFO *)((char *)gptiCurrent + 1080);
  *a3 = 0LL;
  v7 = 0;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(this, v6, v4, 0LL, 0LL, 0LL);
  v10 = ThreadPointerData;
  if ( ThreadPointerData )
  {
    v9 = CTouchProcessor::ReferenceFrame(this, *(_DWORD *)(ThreadPointerData + 28));
    if ( v9 )
    {
      v11 = (struct tagPOINT *)(*((_QWORD *)v9 + 16) + 496LL * *(unsigned int *)(v10 + 32));
      if ( v11 )
      {
        v7 = 1;
        *a3 = v11[26];
      }
      CTouchProcessor::UnreferenceFrame(this, v9);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_WORD)v9,
      7,
      107,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  }
  CInpLockGuard::UnLock(v13);
  return v7;
}
