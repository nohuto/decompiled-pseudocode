/*
 * XREFs of McGenEventUnregister @ 0x1800E3624
 * Callers:
 *     DllMain @ 0x180088ECC (DllMain.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventUnregister(REGHANDLE *a1)
{
  REGHANDLE v2; // rcx
  ULONG result; // eax

  v2 = *a1;
  if ( !v2 )
    return 0;
  result = EventUnregister(v2);
  *a1 = 0LL;
  return result;
}
