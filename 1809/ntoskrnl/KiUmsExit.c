/*
 * XREFs of KiUmsExit @ 0x1401D1000
 * Callers:
 *     NtContinue @ 0x1401BC2F0 (NtContinue.c)
 *     NtRaiseException @ 0x1401BC710 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1401BCD60 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x1401C0A70 (KiApcInterrupt.c)
 *     KxStartUserThread @ 0x1401C4CB0 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x1401C5FA0 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1401C9240 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1401C98C0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1401CB500 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1401CCA00 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1401CD400 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1401CDA40 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1401CF100 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1401CFE80 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401D02C0 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401D0700 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiParkUmsThread @ 0x14029D6C0 (KiParkUmsThread.c)
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
