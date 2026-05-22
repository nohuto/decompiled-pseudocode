/*
 * XREFs of ??$_Emplace_reallocate@AEAULegacyInputInfo@@@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAAPEAULegacyInputInfo@@QEAU2@AEAU2@@Z @ 0x180093778
 * Callers:
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z @ 0x180094AE4 (-QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000AD54 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x180037D6F (memcpy_0.c)
 *     ?_Change_array@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@AEAAXQEAULegacyInputInfo@@_K1@Z @ 0x180094DDC (-_Change_array@-$vector@ULegacyInputInfo@@V-$allocator@ULegacyInputInfo@@@std@@@std@@AEAAXQEAULe.c)
 */

__int64 __fastcall std::vector<LegacyInputInfo>::_Emplace_reallocate<LegacyInputInfo &>(
        const void **a1,
        char *a2,
        const void *a3)
{
  char *v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  size_t v12; // rcx
  char *v13; // rax
  char *v14; // r12
  __int64 v15; // rsi
  char *v16; // r14
  char *v17; // rbx
  __int64 v18; // rsi
  char *v19; // rsi
  __int64 v20; // r14
  __int64 v21; // rsi
  __int64 result; // rax
  __int64 v23; // [rsp+70h] [rbp+8h]
  char *v24; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v6 = (a2 - (_BYTE *)*a1) / 2032;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) / 2032;
  if ( v7 == 0x20408102040810LL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) / 2032;
  v10 = v9 >> 1;
  if ( v9 <= 0x20408102040810LL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 2032 * v11;
  if ( v11 > 0x20408102040810LL )
    v12 = -1LL;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v13;
  v24 = v13;
  try
  {
    v15 = 2032 * v6;
    v23 = v15;
    memcpy_0(&v13[v15], a3, 0x7F0uLL);
    v16 = (char *)a1[1];
    if ( v4 == v16 )
    {
      v17 = (char *)*a1;
      if ( *a1 == v16 )
      {
LABEL_23:
        std::vector<LegacyInputInfo>::_Change_array(a1, v14, v8, v11, -2LL);
        return (__int64)*a1 + v15;
      }
      v18 = v14 - v17;
      do
      {
        memcpy_0(&v17[v18], v17, 0x7F0uLL);
        v17 += 2032;
      }
      while ( v17 != v16 );
    }
    else
    {
      v19 = (char *)*a1;
      if ( *a1 != v4 )
      {
        v20 = v14 - v19;
        do
        {
          memcpy_0(&v19[v20], v19, 0x7F0uLL);
          v19 += 2032;
        }
        while ( v19 != v4 );
        v16 = (char *)a1[1];
      }
      if ( v4 != v16 )
      {
        v21 = &v14[v23 + 2032] - v4;
        do
        {
          memcpy_0(&v4[v21], v4, 0x7F0uLL);
          v4 += 2032;
        }
        while ( v4 != v16 );
      }
    }
    v15 = v23;
    goto LABEL_23;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v24, (const struct std::nothrow_t *)(2032 * v11));
    throw;
  }
  return result;
}
