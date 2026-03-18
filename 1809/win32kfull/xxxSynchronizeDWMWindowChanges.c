/*
 * XREFs of xxxSynchronizeDWMWindowChanges @ 0x1C00BA470
 * Callers:
 *     xxxSendInput @ 0x1C00AE874 (xxxSendInput.c)
 * Callees:
 *     DwmSyncFlushWindowChanges @ 0x1C00BA4C0 (DwmSyncFlushWindowChanges.c)
 */

__int64 __fastcall xxxSynchronizeDWMWindowChanges(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx

  result = ReferenceDwmApiPort(a1, a2);
  v3 = result;
  if ( result )
  {
    LeaveCrit();
    DwmSyncFlushWindowChanges(v3);
    return EnterCrit(0LL, 1LL);
  }
  return result;
}
