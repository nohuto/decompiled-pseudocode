/*
 * XREFs of LookForDropouts @ 0x1C02C2EC0
 * Callers:
 *     fsc_FillBitMap @ 0x1C02C3358 (fsc_FillBitMap.c)
 * Callees:
 *     DoHorizDropout @ 0x1C02C2974 (DoHorizDropout.c)
 *     DoVertDropout @ 0x1C02C2B04 (DoVertDropout.c)
 */

__int64 __fastcall LookForDropouts(__int64 a1, char a2)
{
  int v2; // esi
  int v3; // r13d
  __int64 v4; // r8
  __int16 **v5; // r14
  _WORD **v6; // r15
  unsigned __int64 *i; // rbp
  __int16 *v8; // rbx
  _WORD *v9; // rdi
  unsigned __int64 v10; // r12
  __int64 result; // rax
  __int64 v12; // rax
  int v13; // esi
  int v14; // edi
  unsigned __int64 *v15; // r15
  __int16 **v16; // rbp
  _WORD **v17; // r12
  unsigned __int64 v18; // r13
  __int16 *v19; // rbx
  _WORD *v20; // r14
  __int64 v21; // rax
  __int64 v22; // [rsp+70h] [rbp+8h]
  char v23; // [rsp+78h] [rbp+10h]

  v23 = a2;
  v22 = a1;
  v2 = 0;
  v3 = dword_1C032FE44 - dword_1C032FE48;
  v4 = dword_1C032FE44 - dword_1C032FE40 - 1;
  v5 = (__int16 **)(qword_1C032FE58 + 8 * v4);
  v6 = (_WORD **)(qword_1C032FE60 + 8 * v4);
  for ( i = (unsigned __int64 *)(qword_1C032FE68 + 8 * v4); v2 < v3; ++v2 )
  {
    v8 = *v5--;
    v9 = *v6--;
    v10 = *i--;
    while ( (unsigned __int64)v8 < v10 )
    {
      if ( *v8 == *v9 )
      {
        result = DoHorizDropout(v8, (__int64)v9, dword_1C032FE44 - v2 - 1, a1, a2);
        if ( (_DWORD)result )
          return result;
        a2 = v23;
        a1 = v22;
      }
      v12 = 2LL * (__int16)dword_1C032FF32;
      v8 = (__int16 *)((char *)v8 + v12);
      v9 = (_WORD *)((char *)v9 + v12);
    }
  }
  v13 = 0;
  v14 = dword_1C032FE2C - dword_1C032FE28;
  v15 = (unsigned __int64 *)qword_1C032FE98;
  v16 = (__int16 **)qword_1C032FEA8;
  v17 = (_WORD **)qword_1C032FEB0;
  if ( dword_1C032FE2C - dword_1C032FE28 > 0 )
  {
    while ( 1 )
    {
      v18 = *v15++;
      v19 = *v16++;
      v20 = *v17++;
      while ( 1 )
      {
        v21 = 2LL * (__int16)dword_1C032FF32;
        v19 = (__int16 *)((char *)v19 - v21);
        v20 = (_WORD *)((char *)v20 - v21);
        if ( (unsigned __int64)v19 < v18 )
          break;
        if ( *v19 == *v20 )
        {
          result = DoVertDropout(v19, (__int64)v20, v13 + dword_1C032FE28, a1, a2);
          if ( (_DWORD)result )
            return result;
        }
        a2 = v23;
        a1 = v22;
      }
      if ( ++v13 >= v14 )
        break;
      a2 = v23;
      a1 = v22;
    }
  }
  return 0LL;
}
