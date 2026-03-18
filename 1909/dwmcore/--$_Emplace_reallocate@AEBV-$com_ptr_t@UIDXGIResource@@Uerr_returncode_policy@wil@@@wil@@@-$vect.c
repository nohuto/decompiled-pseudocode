/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18024D638
 * Callers:
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800EDEC0 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x180019FE4 (-_Calculate_growth@-$vector@Ufloat2@Numerics@Foundation@Windows@@V-$allocator@Ufloat2@Numerics@F.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z @ 0x18015A4B4 (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x18015D190 (-_Change_array@-$vector@V-$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 */

unsigned __int64 __fastcall std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy> const &>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rsi
  __int64 v5; // rax
  __int64 *v6; // rbx
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  SIZE_T v10; // rcx
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rsi
  __int64 v13; // rbp
  __int64 *v14; // rdx
  _QWORD *v15; // r8
  __int64 *v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v21; // rax

  v3 = (unsigned __int64)a2 - *(_QWORD *)a1;
  v5 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v6 = a2;
  if ( v5 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error((const char *)a1);
  v8 = v5 + 1;
  v9 = std::vector<Windows::Foundation::Numerics::float2>::_Calculate_growth((_QWORD *)a1, v5 + 1);
  v10 = 8 * v9;
  if ( v9 > v11 )
    v10 = -1LL;
  v12 = v3 & 0xFFFFFFFFFFFFFFF8uLL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
    (_QWORD *)(v12 + v13),
    *a3);
  v14 = *(__int64 **)(a1 + 8);
  v15 = (_QWORD *)v13;
  v16 = *(__int64 **)a1;
  if ( v6 == v14 )
  {
    while ( v16 != v14 )
    {
      v21 = *v16;
      *v16 = 0LL;
      *v15 = v21;
      ++v16;
      ++v15;
    }
  }
  else
  {
    if ( v16 != v6 )
    {
      do
      {
        v17 = *v16;
        *v16++ = 0LL;
        *v15++ = v17;
      }
      while ( v16 != v6 );
      v14 = *(__int64 **)(a1 + 8);
    }
    if ( v6 != v14 )
    {
      v18 = v13 + v12 - (_QWORD)v6;
      do
      {
        v19 = *v6;
        *v6 = 0LL;
        *(__int64 *)((char *)v6++ + v18 + 8) = v19;
      }
      while ( v6 != v14 );
    }
  }
  std::vector<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>::_Change_array(a1, v13, v8, v9);
  return v12 + *(_QWORD *)a1;
}
