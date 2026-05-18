/*
 * XREFs of sub_18003FF20 @ 0x18003FF20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18000FC30 @ 0x18000FC30 (sub_18000FC30.c)
 *     sub_180011324 @ 0x180011324 (sub_180011324.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18003FF20(__int64 a1, __int64 *a2)
{
  unsigned __int64 v4; // rdx
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 **v10; // rax
  __int64 i; // rax
  __int64 *j; // rcx

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v4 = *(_QWORD *)(a1 + 560);
  if ( v4 )
  {
    if ( v4 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    sub_180011324(a2, v4);
  }
  v5 = *(_QWORD **)(a1 + 552);
  v6 = (_QWORD *)*v5;
  while ( v6 != v5 )
  {
    v7 = v6 + 5;
    v8 = a2[1];
    if ( a2[2] == v8 )
    {
      sub_18000FC30((char **)a2, (char *)v8, v7);
    }
    else
    {
      *(_QWORD *)v8 = 0LL;
      *(_QWORD *)(v8 + 8) = 0LL;
      v9 = v6[6];
      if ( v9 )
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      *(_QWORD *)v8 = *v7;
      *(_QWORD *)(v8 + 8) = v6[6];
      a2[1] += 16LL;
    }
    v10 = (__int64 **)v6[2];
    if ( *((_BYTE *)v10 + 25) )
    {
      for ( i = v6[1]; !*(_BYTE *)(i + 25) && v6 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        v6 = (_QWORD *)i;
      v6 = (_QWORD *)i;
    }
    else
    {
      v6 = (_QWORD *)v6[2];
      for ( j = *v10; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v6 = j;
    }
  }
  return a2;
}
