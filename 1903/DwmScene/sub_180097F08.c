/*
 * XREFs of sub_180097F08 @ 0x180097F08
 * Callers:
 *     sub_180097D80 @ 0x180097D80 (sub_180097D80.c)
 * Callees:
 *     memset @ 0x1801271C8 (memset.c)
 */

_QWORD *__fastcall sub_180097F08(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rsi
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  v2 = a2;
  v3 = a1;
  if ( a2 )
  {
    v4 = a1 + 6;
    do
    {
      memset(v3 + 1, 0, 0x50uLL);
      *v3 = 0LL;
      v3 += 11;
      *(v4 - 5) = 0LL;
      *((_DWORD *)v4 - 7) = 0;
      *((_BYTE *)v4 - 32) = 1;
      *(v4 - 3) = 0LL;
      *(v4 - 2) = 0LL;
      *(v4 - 1) = 0LL;
      *v4 = 0LL;
      v4[1] = 0LL;
      v4[2] = 0LL;
      v4[3] = 0LL;
      v4[4] = 0LL;
      v4 += 11;
      --v2;
    }
    while ( v2 );
  }
  return v3;
}
