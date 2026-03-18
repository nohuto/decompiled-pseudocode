/*
 * XREFs of IS_UI_LANGID @ 0x1C000D4D0
 * Callers:
 *     BitBltSysBmp @ 0x1C000D26C (BitBltSysBmp.c)
 *     xxxDrawCaptionBar @ 0x1C00C2CE4 (xxxDrawCaptionBar.c)
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
