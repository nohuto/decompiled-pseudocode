/*
 * XREFs of ?AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHI@Z @ 0x1C0133870
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031750 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0063118 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD204 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z @ 0x1C0142AE0 (-ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z.c)
 *     ?SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C0143DD4 (-SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C0144B2C (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 */

void __fastcall CTouchProcessor::AdjustCaptureOnRetrieval(
        __int64 a1,
        const struct tagINPUTDEST *a2,
        int a3,
        void *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  CInpLockGuard *v13[6]; // [rsp+30h] [rbp-118h] BYREF
  _BYTE v14[192]; // [rsp+60h] [rbp-E8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v13, (struct CInpLockGuard *)(a1 + 56), a4);
  if ( !a6 )
  {
    if ( (a3 & 0x10000) != 0 )
    {
      CInputDest::CInputDest((CInputDest *)v14, a2);
      CTouchProcessor::SetPointerImplicitCapture(
        (CTouchProcessor *)a1,
        (unsigned __int64)a4,
        (const struct CInputDest *)v14,
        a5,
        a7);
LABEL_6:
      CInputDest::SetEmpty((CInputDest *)v14);
      goto LABEL_12;
    }
    if ( a9 == 593 )
    {
      CInputDest::CInputDest((CInputDest *)v14, a2);
      CTouchProcessor::SetPointerExplicitCapture(
        (CTouchProcessor *)a1,
        (unsigned __int64)a4,
        (const struct CInputDest *)v14,
        a5,
        a7);
      goto LABEL_6;
    }
  }
  if ( a8 && a6 && (a9 == 583 || a9 == 594) )
    CTouchProcessor::ReleasePointerCapture((CTouchProcessor *)a1, (unsigned __int64)a4, a7);
LABEL_12:
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v13);
}
