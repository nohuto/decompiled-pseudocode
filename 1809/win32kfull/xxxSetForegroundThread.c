/*
 * XREFs of xxxSetForegroundThread @ 0x1C01C3430
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00CE80C (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 */

void __fastcall xxxSetForegroundThread(struct tagTHREADINFO *a1)
{
  xxxSetForegroundThreadWithWindowHint(a1, 0LL);
}
