/*
 * XREFs of ??$_Emplace_reallocate@UItem@AgileRegistrationList@@@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAPEAUItem@AgileRegistrationList@@QEAU23@$$QEAU23@@Z @ 0x1800E9D48
 * Callers:
 *     ?Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x1800F1588 (-Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022954 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@AEAAXQEAUItem@AgileRegistrationList@@_K1@Z @ 0x1800F638C (-_Change_array@-$vector@UItem@AgileRegistrationList@@V-$allocator@UItem@AgileRegistrationList@@@.c)
 */

unsigned __int64 __fastcall std::vector<AgileRegistrationList::Item>::_Emplace_reallocate<AgileRegistrationList::Item>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  size_t v12; // rcx
  char *v13; // rax
  char *v14; // r10
  unsigned __int64 v15; // r14
  char *v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  char *v21; // r8
  __int64 v22; // rax
  _QWORD *v23; // rcx
  char *v24; // rdx
  __int64 v25; // rax
  _QWORD *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 result; // rax
  char *v30; // [rsp+20h] [rbp-38h]
  void *v31; // [rsp+20h] [rbp-38h]
  char *v32; // [rsp+60h] [rbp+8h]
  __int64 v33; // [rsp+78h] [rbp+20h]

  v6 = (unsigned __int64)a2 - *a1;
  v7 = (__int64)(a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 4;
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
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v13;
  v30 = v13;
  v15 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v16 = &v13[v15];
  v33 = (__int64)&v13[v15 + 16];
  try
  {
    *(_DWORD *)v16 = *(_DWORD *)a3;
    v17 = *(_QWORD *)(a3 + 8);
    *(_QWORD *)(a3 + 8) = 0LL;
    *((_QWORD *)v16 + 1) = v17;
    v32 = v16;
    v18 = (_QWORD *)a1[1];
    v19 = (_QWORD *)*a1;
    if ( a2 == v18 )
    {
      if ( v19 != v18 )
      {
        v20 = v19 + 1;
        v21 = (char *)(v14 - (char *)v19);
        do
        {
          *(_DWORD *)((char *)v20 + (_QWORD)v21 - 8) = *((_DWORD *)v20 - 2);
          v22 = *v20;
          *v20 = 0LL;
          *(_QWORD *)&v21[(_QWORD)v20] = v22;
          v20 += 2;
        }
        while ( v20 - 1 != v18 );
      }
    }
    else
    {
      if ( v19 != a2 )
      {
        v23 = v19 + 1;
        v24 = (char *)(v14 - (char *)v19);
        do
        {
          *(_DWORD *)((char *)v23 + (_QWORD)v24 - 8) = *((_DWORD *)v23 - 2);
          v25 = *v23;
          *v23 = 0LL;
          *(_QWORD *)&v24[(_QWORD)v23] = v25;
          v23 += 2;
        }
        while ( v23 - 1 != a2 );
        v18 = (_QWORD *)a1[1];
      }
      v32 = v14;
      if ( a2 != v18 )
      {
        v26 = a2 + 1;
        do
        {
          *(_DWORD *)&v14[v15 - (_QWORD)a2 + 8 + (_QWORD)v26] = *((_DWORD *)v26 - 2);
          v27 = *v26;
          *v26 = 0LL;
          *(_QWORD *)&v14[v15 - (_QWORD)a2 + 16 + (_QWORD)v26] = v27;
          v26 += 2;
        }
        while ( v26 - 1 != v18 );
      }
    }
    std::vector<AgileRegistrationList::Item>::_Change_array(a1, v14, v8, v11, v30, -2LL);
    result = v15 + *a1;
  }
  catch ( ... )
  {
    std::vector<AgileRegistrationList::Item>::_Destroy(v28, v32, v33);
    std::_Deallocate<16,0>(v31, (const struct std::nothrow_t *)(16 * v11));
    throw;
  }
  return result;
}
