/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAVCEndpointCharacteristics@@@?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCEndpointCharacteristics@@@Z @ 0x180051A70
 * Callers:
 *     ??$emplace_back@AEAPEAVCEndpointCharacteristics@@@?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXAEAPEAVCEndpointCharacteristics@@@Z @ 0x180051A44 (--$emplace_back@AEAPEAVCEndpointCharacteristics@@@-$vector@V-$com_ptr_t@VCEndpointCharacteristic.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800369E4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x180051BB8 (-_Change_array@-$vector@V-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::_Emplace_reallocate<CEndpointCharacteristics * &>(
        char **a1,
        char *a2,
        __int64 *a3)
{
  char *v4; // rbx
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  SIZE_T v12; // rcx
  char *v13; // rax
  char *v14; // r14
  __int64 v15; // r8
  char *v16; // r15
  __int64 v17; // rcx
  char *v18; // rdx
  char *v19; // rcx
  signed __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 result; // rax
  signed __int64 v24; // rdx
  __int64 v25; // rax
  char *v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // [rsp+20h] [rbp-58h]
  char *v29; // [rsp+28h] [rbp-50h]
  __int64 v30; // [rsp+80h] [rbp+8h]
  char *v31; // [rsp+88h] [rbp+10h]

  v4 = a2;
  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v7 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  try
  {
    v14 = v13;
    v29 = v13;
    v15 = 8 * v6;
    v30 = 8 * v6;
    v16 = &v13[8 * v6];
    v28 = v16 + 8;
    v17 = *a3;
    *(_QWORD *)v16 = *a3;
    if ( v17 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      v15 = v30;
    }
    v31 = v16;
    v18 = a1[1];
    v19 = *a1;
    if ( v4 == v18 )
    {
      if ( v19 != v18 )
      {
        v20 = v14 - v19;
        do
        {
          v21 = *(_QWORD *)v19;
          *(_QWORD *)v19 = 0LL;
          *(_QWORD *)&v19[v20] = v21;
          v19 += 8;
        }
        while ( v19 != v18 );
      }
    }
    else
    {
      if ( v19 != v4 )
      {
        v24 = v14 - v19;
        do
        {
          v25 = *(_QWORD *)v19;
          *(_QWORD *)v19 = 0LL;
          *(_QWORD *)&v19[v24] = v25;
          v19 += 8;
        }
        while ( v19 != v4 );
        v18 = a1[1];
      }
      v31 = v14;
      if ( v4 != v18 )
      {
        v26 = &v14[v15 - (_QWORD)v4];
        do
        {
          v27 = *(_QWORD *)v4;
          *(_QWORD *)v4 = 0LL;
          *(_QWORD *)&v26[(_QWORD)v4 + 8] = v27;
          v4 += 8;
        }
        while ( v4 != v18 );
      }
    }
    std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::_Change_array(a1, v14, v8, v11);
    result = (__int64)&(*a1)[v30];
  }
  catch ( ... )
  {
    std::vector<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>>::_Destroy(v22, v31, v28);
    std::_Deallocate<16,0>(v29, (const struct std::nothrow_t *)(8 * v11));
    throw;
  }
  return result;
}
