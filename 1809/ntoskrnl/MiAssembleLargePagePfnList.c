/*
 * XREFs of MiAssembleLargePagePfnList @ 0x14085DE5C
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x14085DB40 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     MiSetPfnLink @ 0x140065C94 (MiSetPfnLink.c)
 *     MiConvertPfnsForLargePage @ 0x1402C53DC (MiConvertPfnsForLargePage.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAssembleLargePagePfnList(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned __int64 *i; // rsi
  unsigned __int64 **v5; // rax
  unsigned __int64 *v6; // rbx
  unsigned __int64 *v7; // rdx
  unsigned __int64 *v8; // rcx
  unsigned __int64 *v9; // rcx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r14
  __int64 v12; // r8
  __int64 v13; // rcx
  _QWORD *j; // rbp
  _BOOL8 v15; // rdx
  _BOOL8 v16; // rdi
  __int64 v17; // rbx
  _QWORD *v19; // [rsp+50h] [rbp+8h] BYREF

  v19 = a1;
  v2 = 0LL;
  i = 0LL;
  while ( a1 )
  {
    i = a1;
    a1 = (_QWORD *)*a1;
  }
  while ( i )
  {
    v5 = (unsigned __int64 **)i[1];
    v6 = i - 2;
    v7 = i;
    v8 = i;
    if ( v5 )
    {
      v9 = *v5;
      for ( i = (unsigned __int64 *)i[1]; v9; v9 = (unsigned __int64 *)*v9 )
        i = v9;
    }
    else
    {
      while ( 1 )
      {
        i = (unsigned __int64 *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (unsigned __int64 *)*i == v8 )
          break;
        v8 = i;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)&v19, v7);
    v10 = *v6;
    v11 = v6[1];
    ExFreePoolWithTag(v6, 0);
    if ( i && (v13 = *(i - 2), v11 + v10 == v13) )
    {
      *(i - 1) += v11;
      *(i - 2) = v13 - v11;
    }
    else
    {
      for ( j = (_QWORD *)(48 * v10 - 0x58000000000LL); v11; v11 -= v17 )
      {
        v15 = 1LL;
        if ( v11 >= 0x40000 )
          v15 = (v10 & 0x3FFFF) != 0;
        v16 = v15;
        v17 = MiLargePageSizes[v15];
        v2 += v17;
        MiConvertPfnsForLargePage((__int64)j, v15, v12);
        LODWORD(v10) = v17 + v10;
        MiSetPfnLink(j, *(_QWORD *)(a2 + 8 * v16));
        *(_QWORD *)(a2 + 8 * v16) = j;
        j += 6 * v17;
      }
    }
  }
  return v2;
}
