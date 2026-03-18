/*
 * XREFs of KiUmsExit @ 0x1401D7300
 * Callers:
 *     NtContinue @ 0x1401C4DD0 (NtContinue.c)
 *     NtRaiseException @ 0x1401C5090 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1401C55E0 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x1401C86D0 (KiApcInterrupt.c)
 *     KxStartUserThread @ 0x1401CBF90 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x1401CD240 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1401D0380 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1401D08C0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1401D2400 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1401D3780 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1401D4000 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1401D4500 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1401D5A80 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1401D6540 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401D6880 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401D6B80 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiParkUmsThread @ 0x1402B5E90 (KiParkUmsThread.c)
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
