/*
 * XREFs of ?xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z @ 0x1C01F95F8
 * Callers:
 *     xxxFrostCrashedWindow @ 0x1C01F96F4 (xxxFrostCrashedWindow.c)
 * Callees:
 *     DwmSyncSignalGhost @ 0x1C027317C (DwmSyncSignalGhost.c)
 */

__int64 __fastcall xxxSendSyncGHOSTINFO(struct _GHOSTINFO *a1, __int64 a2)
{
  unsigned int v2; // edi
  void *v3; // rbx
  __int64 v4; // rcx

  v2 = 0;
  if ( gdwInAtomicOperation )
  {
    a2 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v3 = (void *)ReferenceDwmApiPort(a1, a2, gdwInAtomicOperation);
  UserSessionSwitchLeaveCrit(v4);
  LOBYTE(v2) = (int)DwmSyncSignalGhost(v3) >= 0;
  EnterCrit(0LL, 1LL);
  return v2;
}
