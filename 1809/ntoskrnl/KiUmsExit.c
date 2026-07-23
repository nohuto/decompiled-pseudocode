/*
 * XREFs of KiUmsExit @ 0x1401D1100
 * Callers:
 *     NtContinue @ 0x1401BC450 (NtContinue.c)
 *     NtRaiseException @ 0x1401BC870 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x1401C0BD0 (KiApcInterrupt.c)
 *     KxStartUserThread @ 0x1401C4E10 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x1401C6100 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1401C9340 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1401C99C0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1401CB600 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1401CCB00 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1401CD500 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1401CDB40 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1401CF200 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1401CFF80 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401D03C0 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401D0800 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiParkUmsThread @ 0x14029D8B0 (KiParkUmsThread.c)
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
