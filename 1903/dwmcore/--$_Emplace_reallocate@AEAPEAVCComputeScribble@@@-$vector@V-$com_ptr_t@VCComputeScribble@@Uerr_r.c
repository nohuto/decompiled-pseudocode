/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAVCComputeScribble@@@?$vector@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCComputeScribble@@@Z @ 0x1801B51F4
 * Callers:
 *     ?EnqueueForCurrentBackbuffer@CComputeScribbleRenderer@@QEAAXPEAVCComputeScribble@@@Z @ 0x1801AD7A8 (-EnqueueForCurrentBackbuffer@CComputeScribbleRenderer@@QEAAXPEAVCComputeScribble@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x1801B6550 (-_Change_array@-$vector@V-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V-$all.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>::_Emplace_reallocate<CComputeScribble * &>(
        __int64 a1,
        char *a2,
        void (__fastcall ****a3)(_QWORD))
{
  __int64 v4; // r15
  char *v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  SIZE_T v12; // rcx
  __int64 v13; // rax
  void (__fastcall ***v14)(_QWORD); // rcx
  _QWORD *v15; // r12
  char *v16; // r14
  char *v17; // rdx
  _QWORD *v18; // r8
  char *v19; // rcx
  __int64 v20; // rax
  signed __int64 v21; // r14
  __int64 v22; // rax
  __int64 v24; // rax

  v4 = (__int64)&a2[-*(_QWORD *)a1] >> 3;
  v5 = a2;
  v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error((const char *)a1);
  v8 = v6 + 1;
  v9 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v6 + 1;
  }
  else
  {
    v11 = v6 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = *a3;
  v15 = (_QWORD *)v13;
  v16 = (char *)(v13 + 8 * v4);
  *(_QWORD *)v16 = *a3;
  if ( v14 )
    (**v14)(v14);
  v17 = *(char **)(a1 + 8);
  v18 = v15;
  v19 = *(char **)a1;
  if ( v5 == v17 )
  {
    while ( v19 != v17 )
    {
      v24 = *(_QWORD *)v19;
      *(_QWORD *)v19 = 0LL;
      v19 += 8;
      *v18++ = v24;
    }
  }
  else
  {
    if ( v19 != v5 )
    {
      do
      {
        v20 = *(_QWORD *)v19;
        *(_QWORD *)v19 = 0LL;
        v19 += 8;
        *v18++ = v20;
      }
      while ( v19 != v5 );
      v17 = *(char **)(a1 + 8);
    }
    if ( v5 != v17 )
    {
      v21 = v16 - v5;
      do
      {
        v22 = *(_QWORD *)v5;
        *(_QWORD *)v5 = 0LL;
        *(_QWORD *)&v5[v21 + 8] = v22;
        v5 += 8;
      }
      while ( v5 != v17 );
    }
  }
  std::vector<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>::_Change_array(a1, v15, v8, v11);
  return *(_QWORD *)a1 + 8 * v4;
}
