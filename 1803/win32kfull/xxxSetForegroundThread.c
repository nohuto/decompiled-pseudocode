/*
 * XREFs of xxxSetForegroundThread @ 0x1C01A1C70
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C005F010 (xxxSetForegroundThreadWithWindowHint.c)
 */

__int64 __fastcall xxxSetForegroundThread(struct tagTHREADINFO *a1)
{
  return xxxSetForegroundThreadWithWindowHint(a1, 0LL);
}
