/*
 * XREFs of LdrSetMUICacheType @ 0x18008C100
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSetAlternateResourceModuleHandle @ 0x180059490 (LdrpSetAlternateResourceModuleHandle.c)
 */

__int64 __fastcall LdrSetMUICacheType(int a1)
{
  if ( (a1 & 0xFFFFFFF8) != 0 || (a1 & 6) == 6 )
    return 3221225485LL;
  if ( gMUICacheType )
    return 3221225473LL;
  gMUICacheType = a1;
  LdrpSetAlternateResourceModuleHandle(-1LL, 0LL, 0LL, 0LL, 0, 16, 0, 0LL);
  return 0LL;
}
