/*
 * XREFs of ?xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z @ 0x1C01BFCD0
 * Callers:
 *     xxxFrostCrashedWindow @ 0x1C01BFDB4 (xxxFrostCrashedWindow.c)
 * Callees:
 *     DwmSyncSignalGhost @ 0x1C0241D04 (DwmSyncSignalGhost.c)
 */

__int64 __fastcall xxxSendSyncGHOSTINFO(struct _GHOSTINFO *a1, __int64 a2)
{
  unsigned int v2; // edi
  void *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  v2 = 0;
  if ( gdwInAtomicOperation )
  {
    a2 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v3 = (void *)ReferenceDwmApiPort(a1, a2, gdwInAtomicOperation);
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  LOBYTE(v2) = (int)DwmSyncSignalGhost(v3) >= 0;
  EnterCrit(0LL, 1LL);
  return v2;
}
