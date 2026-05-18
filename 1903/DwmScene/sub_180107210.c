/*
 * XREFs of sub_180107210 @ 0x180107210
 * Callers:
 *     sub_180106AC0 @ 0x180106AC0 (sub_180106AC0.c)
 * Callees:
 *     sub_18010730C @ 0x18010730C (sub_18010730C.c)
 */

__int64 __fastcall sub_180107210(void *Src, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi

  if ( a3 > 32 )
  {
    v4 = ((unsigned __int64)(a3 - 33) >> 5) + 1;
    do
    {
      Src = (void *)sub_18010730C(Src);
      --v4;
    }
    while ( v4 );
  }
  return sub_18010730C(Src);
}
