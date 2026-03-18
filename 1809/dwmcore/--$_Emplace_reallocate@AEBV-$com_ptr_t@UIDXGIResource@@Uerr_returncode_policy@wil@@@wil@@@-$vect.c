/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1801579EC
 * Callers:
 *     ?EnsureResources@CCaptureRenderTarget@@AEAAJXZ @ 0x1801581E0 (-EnsureResources@CCaptureRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x180159188 (-_Change_array@-$vector@V-$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy> const &>(
        char **a1,
        char *a2,
        __int64 *a3)
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
  __int64 v14; // rcx
  _QWORD *v15; // r12
  char *v16; // r14
  char *v17; // rdx
  _QWORD *v18; // r8
  char *v19; // rcx
  __int64 v20; // rax
  signed __int64 v21; // r14
  __int64 v22; // rax
  __int64 v24; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (a2 - *a1) >> 3;
  v5 = a2;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 3;
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
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  v17 = a1[1];
  v18 = v15;
  v19 = *a1;
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
      v17 = a1[1];
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
  std::vector<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>::_Change_array(a1, v15, v8, v11);
  return (__int64)&(*a1)[8 * v4];
}
