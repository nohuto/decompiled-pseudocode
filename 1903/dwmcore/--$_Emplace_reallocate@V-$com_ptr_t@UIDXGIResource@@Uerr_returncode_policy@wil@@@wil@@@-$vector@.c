/*
 * XREFs of ??$_Emplace_reallocate@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800E9CAC
 * Callers:
 *     ?ProcessPendingUnpin@CD3DDeviceLevel1@@QEAAJ_N@Z @ 0x1800EA180 (-ProcessPendingUnpin@CD3DDeviceLevel1@@QEAAJ_N@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x18001B77C (-_Calculate_growth@-$vector@Ufloat2@Numerics@Foundation@Windows@@V-$allocator@Ufloat2@Numerics@F.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@CAXXZ @ 0x1800EA41C (-_Xlength@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18015BB14 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@s.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x18015E86C (-_Change_array@-$vector@V-$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 */

unsigned __int64 __fastcall std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  SIZE_T v10; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rbp
  __int64 v15; // rsi
  _QWORD *v16; // rcx
  __int64 *v17; // r8
  __int64 *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 *v21; // r9
  __int64 *v22; // rdx
  __int64 v23; // rax

  v3 = (char *)a2 - (char *)*a1;
  v5 = a1[1] - *a1;
  if ( v5 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Xlength();
  v8 = v5 + 1;
  v9 = std::vector<Windows::Foundation::Numerics::float2>::_Calculate_growth(a1, v5 + 1);
  v10 = 8 * v9;
  if ( v9 > v11 )
    v10 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  v13 = *a3;
  v14 = v3 & 0xFFFFFFFFFFFFFFF8uLL;
  *a3 = 0LL;
  v15 = v12;
  *(_QWORD *)(v12 + v14) = v13;
  v16 = (_QWORD *)v12;
  v17 = a1[1];
  v18 = *a1;
  if ( a2 == v17 )
  {
    while ( v18 != v17 )
    {
      v19 = *v18;
      *v18 = 0LL;
      *v16++ = v19;
      ++v18;
    }
  }
  else
  {
    while ( v18 != a2 )
    {
      v20 = *v18;
      *v18 = 0LL;
      *v16++ = v20;
      ++v18;
    }
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>>(v16);
    v21 = a1[1];
    v16 = (_QWORD *)(v15 + v14 + 8);
    if ( a2 != v21 )
    {
      v22 = a2;
      do
      {
        v23 = *v22;
        *v22++ = 0LL;
        *v16++ = v23;
      }
      while ( v22 != v21 );
    }
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>>(v16);
  std::vector<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>::_Change_array(a1, v15, v8, v9);
  return (unsigned __int64)*a1 + v14;
}
