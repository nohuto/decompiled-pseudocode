/*
 * XREFs of IS_UI_LANGID @ 0x1C000BC6C
 * Callers:
 *     BitBltSysBmp @ 0x1C000B87C (BitBltSysBmp.c)
 *     xxxDrawCaptionBar @ 0x1C000CB10 (xxxDrawCaptionBar.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IS_UI_LANGID(int a1)
{
  int ThreadLangIdByIndex; // eax
  unsigned int v2; // ecx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  ThreadLangIdByIndex = RtlGetThreadLangIdByIndex(0LL, 0LL, &v4, 0LL);
  v2 = 0;
  if ( ThreadLangIdByIndex < 0 )
    return 0LL;
  LOBYTE(v2) = v4 == 1037;
  return v2;
}
