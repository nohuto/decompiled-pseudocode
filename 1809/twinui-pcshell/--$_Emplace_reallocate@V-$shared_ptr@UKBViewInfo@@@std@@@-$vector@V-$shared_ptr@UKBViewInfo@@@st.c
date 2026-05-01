/*
 * XREFs of ??$_Emplace_reallocate@V?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UKBViewInfo@@@1@QEAV21@$$QEAV21@@Z @ 0x1802B3D18
 * Callers:
 *     _lambda_0b76205be84400ecfc27954a2135cf03_::operator() @ 0x1800928A8 (_lambda_0b76205be84400ecfc27954a2135cf03_--operator().c)
 *     ??$emplace@V?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@@1@$$QEAV?$shared_ptr@UKBViewInfo@@@1@@Z @ 0x1802B3F24 (--$emplace@V-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$alloca.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022954 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UKBViewInfo@@@2@_K1@Z @ 0x18019CA8C (-_Change_array@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@.c)
 */

unsigned __int64 __fastcall std::vector<std::shared_ptr<KBViewInfo>>::_Emplace_reallocate<std::shared_ptr<KBViewInfo>>(
        char **a1,
        char *a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  size_t v12; // rcx
  _QWORD *v13; // rax
  unsigned __int64 v14; // r14
  _QWORD *v15; // rcx
  _QWORD *v16; // rdx
  char *v17; // r8
  char *v18; // rcx
  _QWORD *v19; // rdx
  signed __int64 v20; // rcx
  _QWORD *v21; // r8
  signed __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  __int64 v24; // rcx
  unsigned __int64 result; // rax
  void *v26; // [rsp+20h] [rbp-38h]
  __int64 v27; // [rsp+60h] [rbp+8h]
  __int64 v28; // [rsp+78h] [rbp+20h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 16 * v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v26 = v13;
  v14 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v15 = (_QWORD *)((char *)v13 + v14);
  v16 = (_QWORD *)((char *)v13 + v14 + 16);
  v28 = (__int64)v16;
  try
  {
    *v15 = 0LL;
    v15[1] = 0LL;
    *v15 = *a3;
    v15[1] = a3[1];
    *a3 = 0LL;
    a3[1] = 0LL;
    v27 = (__int64)v13 + v14;
    v17 = a1[1];
    v18 = *a1;
    if ( a2 == v17 )
    {
      if ( v18 != v17 )
      {
        v19 = v13;
        v20 = v18 - (char *)v13;
        do
        {
          *v19 = 0LL;
          v19[1] = 0LL;
          *v19 = *(_QWORD *)((char *)v19 + v20);
          v19[1] = *(_QWORD *)((char *)v19 + v20 + 8);
          *(_QWORD *)((char *)v19 + v20) = 0LL;
          *(_QWORD *)((char *)v19 + v20 + 8) = 0LL;
          v19 += 2;
        }
        while ( (char *)v19 + v20 != v17 );
      }
    }
    else
    {
      if ( v18 != a2 )
      {
        v21 = v13;
        v22 = v18 - (char *)v13;
        do
        {
          *v21 = 0LL;
          v21[1] = 0LL;
          *v21 = *(_QWORD *)((char *)v21 + v22);
          v21[1] = *(_QWORD *)((char *)v21 + v22 + 8);
          *(_QWORD *)((char *)v21 + v22) = 0LL;
          *(_QWORD *)((char *)v21 + v22 + 8) = 0LL;
          v21 += 2;
        }
        while ( (char *)v21 + v22 != a2 );
        v17 = a1[1];
      }
      v27 = (__int64)v13;
      if ( a2 != v17 )
      {
        v23 = &a2[-v14] - (char *)v13;
        do
        {
          *v16 = 0LL;
          v16[1] = 0LL;
          *v16 = *(_QWORD *)((char *)v16 + v23 - 16);
          v16[1] = *(_QWORD *)((char *)v16 + v23 - 8);
          *(_QWORD *)((char *)v16 + v23 - 16) = 0LL;
          *(_QWORD *)((char *)v16 + v23 - 8) = 0LL;
          v16 += 2;
        }
        while ( (char *)v16 + v23 - 16 != v17 );
      }
    }
    std::vector<std::shared_ptr<KBViewInfo>>::_Change_array((__int64)a1, (__int64)v13, v8, v11);
    result = (unsigned __int64)&(*a1)[v14];
  }
  catch ( ... )
  {
    std::vector<std::shared_ptr<ViewEventRegistration>>::_Destroy(v24, v27, v28);
    std::_Deallocate<16,0>(v26, (const struct std::nothrow_t *)(16 * v11));
    throw;
  }
  return result;
}
