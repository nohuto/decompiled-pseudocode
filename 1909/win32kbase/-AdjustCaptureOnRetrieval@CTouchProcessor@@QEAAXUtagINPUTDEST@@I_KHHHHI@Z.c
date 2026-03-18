/*
 * XREFs of ?AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHI@Z @ 0x1C015EA80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00304C0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A3EB0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00B766C (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z @ 0x1C016F7C8 (-ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z.c)
 *     ?SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C0170AA0 (-SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C017184C (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 */

void __fastcall CTouchProcessor::AdjustCaptureOnRetrieval(
        __int64 a1,
        const struct tagINPUTDEST *a2,
        int a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  __int64 v13; // rdx
  __int64 v14; // r8
  CInpLockGuard *v15; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v16[128]; // [rsp+40h] [rbp-A8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)&v15, (struct CInpLockGuard *)(a1 + 48));
  if ( !a6 )
  {
    if ( (a3 & 0x10000) != 0 )
    {
      CInputDest::CInputDest((CInputDest *)v16, a2);
      CTouchProcessor::SetPointerImplicitCapture((CTouchProcessor *)a1, a4, (const struct CInputDest *)v16, a5, a7);
LABEL_6:
      CInputDest::SetEmpty((CInputDest *)v16, v13, v14);
      goto LABEL_12;
    }
    if ( a9 == 593 )
    {
      CInputDest::CInputDest((CInputDest *)v16, a2);
      CTouchProcessor::SetPointerExplicitCapture((CTouchProcessor *)a1, a4, (const struct CInputDest *)v16, a5, a7);
      goto LABEL_6;
    }
  }
  if ( a8 && a6 && (a9 == 583 || a9 == 594) )
    CTouchProcessor::ReleasePointerCapture((CTouchProcessor *)a1, a4, a7);
LABEL_12:
  CInpLockGuard::UnLock(v15);
}
