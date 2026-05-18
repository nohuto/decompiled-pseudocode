/*
 * XREFs of sub_18006F504 @ 0x18006F504
 * Callers:
 *     sub_180077D74 @ 0x180077D74 (sub_180077D74.c)
 * Callees:
 *     sub_1800115D0 @ 0x1800115D0 (sub_1800115D0.c)
 *     sub_180011EAC @ 0x180011EAC (sub_180011EAC.c)
 */

char *__fastcall sub_18006F504(const void **Src, char *a2, __int64 a3)
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
        sub_180011EAC(Src);
    }
    else
    {
      sub_1800115D0(Src, v5 - v3);
      Src[2] = (const void *)v3;
    }
  }
  return sub_18006F344(Src, a2, a3);
}
