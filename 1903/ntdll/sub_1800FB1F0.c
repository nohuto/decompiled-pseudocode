/*
 * XREFs of sub_1800FB1F0 @ 0x1800FB1F0
 * Callers:
 *     sub_180033C9C @ 0x180033C9C (sub_180033C9C.c)
 * Callees:
 *     sub_1800FB114 @ 0x1800FB114 (sub_1800FB114.c)
 *     sub_1800FB36C @ 0x1800FB36C (sub_1800FB36C.c)
 *     sub_1800FB38C @ 0x1800FB38C (sub_1800FB38C.c)
 */

__int64 __fastcall sub_1800FB1F0(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v4; // eax
  __int64 v5; // r8
  _DWORD *v6; // rdx
  __int64 v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rbx

  v4 = 0;
  if ( a2[7] )
  {
    v5 = a2[7];
    v6 = a2 + 8;
    do
    {
      v4 += *v6;
      v6 += 2;
      --v5;
    }
    while ( v5 );
  }
  v7 = a1 + 16 * (v4 % *(_DWORD *)(a1 + 720) + 46LL);
  sub_1800FB36C(v7);
  if ( a2[6] || a2[5] )
  {
    LODWORD(v9) = a2[6] + (a2[5] << 16);
  }
  else
  {
    v8 = (_QWORD *)sub_1800FB114(a1);
    if ( v8 )
    {
      *v8 = a2;
      v9 = (__int64)(*(_QWORD *)(a1 + 184) - (_QWORD)v8) >> 3;
      a2[6] = v9;
      a2[5] = WORD1(v9);
    }
    else
    {
      LODWORD(v9) = 0;
    }
  }
  sub_1800FB38C(v7);
  return (unsigned int)v9;
}
