/*
 * XREFs of sub_1800F175C @ 0x1800F175C
 * Callers:
 *     sub_1800F1F44 @ 0x1800F1F44 (sub_1800F1F44.c)
 *     sub_1800F2454 @ 0x1800F2454 (sub_1800F2454.c)
 *     sub_1800F2A18 @ 0x1800F2A18 (sub_1800F2A18.c)
 *     sub_1800F5588 @ 0x1800F5588 (sub_1800F5588.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001BBB8 @ 0x18001BBB8 (sub_18001BBB8.c)
 *     sub_18003D800 @ 0x18003D800 (sub_18003D800.c)
 *     memmove @ 0x180125BAC (memmove.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

char *__fastcall sub_1800F175C(__int64 a1, unsigned __int64 a2)
{
  char *v4; // rdi
  char *result; // rax
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  _QWORD *v10; // r15
  unsigned __int64 v11; // rbx

  v4 = *(char **)(a1 + 8);
  result = *(char **)a1;
  v6 = (__int64)&v4[-*(_QWORD *)a1] >> 2;
  v7 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2;
  if ( a2 <= v7 )
  {
    if ( a2 <= v6 )
    {
      if ( a2 != v6 )
      {
        result += 4 * a2;
        *(_QWORD *)(a1 + 8) = result;
      }
    }
    else
    {
      v11 = a2 - v6;
      if ( a2 != v6 )
      {
        result = (char *)memset(v4, 0, 4 * v11);
        v4 += 4 * v11;
      }
      *(_QWORD *)(a1 + 8) = v4;
    }
  }
  else
  {
    if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v8 = v7 >> 1;
    if ( v7 <= 0x3FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v9 = v8 + v7;
      if ( v8 + v7 < a2 )
        v9 = a2;
    }
    else
    {
      v9 = a2;
    }
    v10 = sub_18001BBB8(a1, v9);
    if ( a2 != v6 )
      memset((char *)v10 + 4 * v6, 0, 4 * (a2 - v6));
    memmove(v10, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    return (char *)sub_18003D800((__int64 *)a1, (__int64)v10, a2, v9);
  }
  return result;
}
