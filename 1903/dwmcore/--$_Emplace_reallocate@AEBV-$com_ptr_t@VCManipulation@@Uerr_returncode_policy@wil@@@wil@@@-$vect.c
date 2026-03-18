/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18021DE54
 * Callers:
 *     ?CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV?$vector@PEAVCManipulation@@V?$allocator@PEAVCManipulation@@@std@@@std@@@Z @ 0x18021E764 (-CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV-$vector@PEAVCManipulation@@V-$alloca.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z @ 0x18015BB94 (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x18015E86C (-_Change_array@-$vector@V-$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 */

unsigned __int64 __fastcall std::vector<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const &>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned __int64 v4; // r15
  __int64 v5; // rax
  __int64 *v6; // rbx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  SIZE_T v12; // rcx
  unsigned __int64 v13; // r15
  __int64 v14; // rbp
  __int64 *v15; // rdx
  _QWORD *v16; // r8
  __int64 *v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v22; // rax

  v4 = (unsigned __int64)a2 - *(_QWORD *)a1;
  v5 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v6 = a2;
  if ( v5 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error((const char *)a1);
  v8 = v5 + 1;
  v9 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v5 + 1;
  }
  else
  {
    v11 = v5 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = v4 & 0xFFFFFFFFFFFFFFF8uLL;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
    (_QWORD *)(v13 + v14),
    *a3);
  v15 = *(__int64 **)(a1 + 8);
  v16 = (_QWORD *)v14;
  v17 = *(__int64 **)a1;
  if ( v6 == v15 )
  {
    while ( v17 != v15 )
    {
      v22 = *v17;
      *v17 = 0LL;
      *v16 = v22;
      ++v17;
      ++v16;
    }
  }
  else
  {
    if ( v17 != v6 )
    {
      do
      {
        v18 = *v17;
        *v17++ = 0LL;
        *v16++ = v18;
      }
      while ( v17 != v6 );
      v15 = *(__int64 **)(a1 + 8);
    }
    if ( v6 != v15 )
    {
      v19 = v14 + v13 - (_QWORD)v6;
      do
      {
        v20 = *v6;
        *v6 = 0LL;
        *(__int64 *)((char *)v6++ + v19 + 8) = v20;
      }
      while ( v6 != v15 );
    }
  }
  std::vector<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>::_Change_array(a1, v14, v8, v11);
  return v13 + *(_QWORD *)a1;
}
