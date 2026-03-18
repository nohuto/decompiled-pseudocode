/*
 * XREFs of xxxSynchronizeDWMWindowChanges @ 0x1C0016A70
 * Callers:
 *     xxxSendInput @ 0x1C001E64C (xxxSendInput.c)
 * Callees:
 *     DwmSyncFlushWindowChanges @ 0x1C0016AC0 (DwmSyncFlushWindowChanges.c)
 */

__int64 __fastcall xxxSynchronizeDWMWindowChanges(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rbx

  result = ReferenceDwmApiPort(a1, a2, a3);
  v4 = result;
  if ( result )
  {
    LeaveCrit();
    DwmSyncFlushWindowChanges(v4);
    return EnterCrit(0LL, 1LL);
  }
  return result;
}
