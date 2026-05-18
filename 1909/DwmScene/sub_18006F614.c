/*
 * XREFs of sub_18006F614 @ 0x18006F614
 * Callers:
 *     sub_180077E84 @ 0x180077E84 (sub_180077E84.c)
 * Callees:
 *     sub_180011620 @ 0x180011620 (sub_180011620.c)
 *     sub_180011EFC @ 0x180011EFC (sub_180011EFC.c)
 */

char *__fastcall sub_18006F614(const void **Src, char *a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v5; // rax

  v3 = (unsigned __int64)Src[2];
  v5 = (a3 - (__int64)a2) >> 1;
  if ( v3 <= v5 && Src[3] != (const void *)v5 )
  {
    if ( (unsigned __int64)Src[3] >= v5 )
    {
      if ( v5 < 0x10 && (unsigned __int64)Src[3] >= 0x10 )
        sub_180011EFC(Src);
    }
    else
    {
      sub_180011620(Src, v5 - v3);
      Src[2] = (const void *)v3;
    }
  }
  return sub_18006F454(Src, a2, a3);
}
