/*
 * XREFs of KiUmsExit @ 0x1401D6700
 * Callers:
 *     NtContinue @ 0x1401C4250 (NtContinue.c)
 *     NtRaiseException @ 0x1401C4510 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1401C4A60 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x1401C7B50 (KiApcInterrupt.c)
 *     KxStartUserThread @ 0x1401CB410 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x1401CC6C0 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1401CF780 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1401CFCC0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1401D1800 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1401D2B80 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1401D3400 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1401D3900 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1401D4E80 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1401D5940 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401D5C80 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401D5F80 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiParkUmsThread @ 0x1402B6130 (KiParkUmsThread.c)
 */

__int64 __fastcall KiUmsExit(char a1)
{
  __int64 v1; // rbp
  _BYTE v3[80]; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v4; // [rsp+50h] [rbp-158h]
  char *v5; // [rsp+58h] [rbp-150h]
  char v6; // [rsp+70h] [rbp-138h] BYREF

  _enable();
  v3[72] = a1;
  v5 = &v6;
  v4 = v1 - 128;
  return KiParkUmsThread(v3);
}
