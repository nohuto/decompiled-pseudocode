/*
 * XREFs of bConvertSwap @ 0x1C0218F3C
 * Callers:
 *     bConvertExtras @ 0x1C0218B40 (bConvertExtras.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bConvertSwap(_WORD *a1, unsigned int *a2, unsigned __int64 a3, int a4)
{
  unsigned int v4; // eax
  _WORD *v5; // r10
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r8

  v4 = *a2;
  v5 = a1;
  if ( *a2 )
  {
    v6 = 0LL;
    v7 = (v4 >> 1) - 1;
    v8 = (unsigned int)v7;
    if ( a3 > a3 + 2 * v7 )
      v8 = 0LL;
    if ( v8 )
    {
      v9 = a3 - (_QWORD)a1;
      do
      {
        ++v6;
        *v5 = __ROR2__(*(_WORD *)((char *)v5 + v9), 8);
        ++v5;
      }
      while ( v6 < v8 );
    }
    *v5 = 0;
  }
  else
  {
    *a2 = (a4 & 0xFFFFFFFE) + 2;
  }
  return 1LL;
}
