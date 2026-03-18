/*
 * XREFs of ??$_Insert_range@V?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@V?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@1Uforward_iterator_tag@1@@Z @ 0x180005BAC
 * Callers:
 *     ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x180005D50 (-SetStops@CGradientBrush@@QEAAXAEBV-$span@PEAVCColorGradientStop@@$0-0@gsl@@_N@Z.c)
 * Callees:
 *     ??9details@gsl@@YA_NV?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@01@0@Z @ 0x180005E94 (--9details@gsl@@YA_NV-$span_iterator@V-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@$0A@@01@0@Z.c)
 *     ??E?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ @ 0x180005ED4 (--E-$span_iterator@V-$span@PEAVCColorGradientStop@@$0-0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ.c)
 *     ??D?$span_iterator@V?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@$0A@@details@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@XZ @ 0x180005F08 (--D-$span_iterator@V-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@$0A@@details@gsl@@QEB.c)
 *     ?_Change_array@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@AEAAXQEAPEAVCColorGradientStop@@_K1@Z @ 0x18000614C (-_Change_array@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColorGradientStop@@@std@@@std@.c)
 *     ?_Calculate_growth@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x1800061B4 (-_Calculate_growth@-$vector@Ufloat2@Numerics@Foundation@Windows@@V-$allocator@Ufloat2@Numerics@F.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::vector<CColorGradientStop *>::_Insert_range<gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>>(
        __int64 a1,
        _QWORD *a2,
        __int128 *a3,
        __int128 *a4)
{
  _QWORD *v4; // rdi
  __int128 v5; // xmm0
  __int64 result; // rax
  char v9; // r12
  unsigned __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // r14
  SIZE_T v14; // rcx
  unsigned __int64 v15; // r9
  char *v16; // r14
  char *v17; // rdi
  __int128 v18; // xmm1
  char *v19; // rcx
  const void *v20; // rdx
  size_t v21; // r8
  __int64 v22; // r15
  __int64 v23; // r12
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  unsigned __int64 v27; // [rsp+20h] [rbp-40h]
  __int128 i; // [rsp+30h] [rbp-30h] BYREF
  __int128 v29; // [rsp+40h] [rbp-20h] BYREF
  __int128 v30; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+38h]
  unsigned __int64 v34; // [rsp+B8h] [rbp+58h]

  v4 = a2;
  v5 = *a3;
  result = *(_QWORD *)a3;
  i = *a4;
  if ( (_QWORD)i != result )
  {
    gsl::details::terminate((gsl::details *)a1);
    __debugbreak();
  }
  v9 = 1;
  v10 = *((_QWORD *)&i + 1) - *((_QWORD *)&v5 + 1);
  v11 = ((__int64)a2 - *(_QWORD *)a1) >> 3;
  if ( *((_QWORD *)&i + 1) - *((_QWORD *)&v5 + 1) == 1LL && a2 == *(_QWORD **)(a1 + 8) || (v9 = 0, v10) )
  {
    v12 = *(_QWORD *)(a1 + 8);
    if ( v10 <= (*(_QWORD *)(a1 + 16) - v12) >> 3 )
    {
      v22 = v12 - (_QWORD)a2;
      v23 = v10;
      if ( v10 >= (v12 - (__int64)a2) >> 3 )
      {
        memmove_0(&a2[v23], a2, v12 - (_QWORD)a2);
        v25 = *a4;
        *(_QWORD *)(a1 + 8) = (char *)&v4[v23] + v22;
        v30 = v25;
        v26 = *a3;
        for ( i = *a3; ; v26 = i )
        {
          v29 = v26;
          result = gsl::details::operator!=(&v29, &v30);
          if ( !(_BYTE)result )
            break;
          *v4++ = *(_QWORD *)gsl::details::span_iterator<gsl::span<COverlayContext::OverlayPlaneInfo *,-1>,0>::operator*(&i);
          gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>::operator++(&i);
        }
      }
      else
      {
        memmove_0(*(void **)(a1 + 8), (const void *)(v12 - v23 * 8), 8 * v10);
        *(_QWORD *)(a1 + 8) = v23 * 8 + v12;
        memmove_0(&v4[v10], v4, v12 + -8LL * v10 - (_QWORD)v4);
        v30 = *a4;
        v24 = *a3;
        for ( i = *a3; ; v24 = i )
        {
          v29 = v24;
          result = gsl::details::operator!=(&v29, &v30);
          if ( !(_BYTE)result )
            break;
          *v4++ = *(_QWORD *)gsl::details::span_iterator<gsl::span<COverlayContext::OverlayPlaneInfo *,-1>,0>::operator*(&i);
          gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>::operator++(&i);
        }
      }
    }
    else
    {
      v13 = (v12 - *(_QWORD *)a1) >> 3;
      if ( v10 > 0x1FFFFFFFFFFFFFFFLL - v13 )
        ModuleFailFastForHRESULT(2147483659LL, retaddr);
      v27 = v13 + v10;
      v34 = std::vector<Windows::Foundation::Numerics::float2>::_Calculate_growth(a1, v13 + v10);
      v14 = 8 * v34;
      if ( v34 > v15 )
        v14 = -1LL;
      v16 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v14);
      v29 = *a4;
      v17 = &v16[8 * v11];
      v18 = *a3;
      for ( i = *a3; ; v18 = i )
      {
        v30 = v18;
        if ( !(unsigned __int8)gsl::details::operator!=(&v30, &v29) )
          break;
        *(_QWORD *)v17 = *(_QWORD *)gsl::details::span_iterator<gsl::span<COverlayContext::OverlayPlaneInfo *,-1>,0>::operator*(&i);
        v17 += 8;
        gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>::operator++(&i);
      }
      v19 = v16;
      v20 = *(const void **)a1;
      if ( v9 )
      {
        v21 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
      }
      else
      {
        memmove_0(v16, v20, (char *)a2 - (_BYTE *)v20);
        v21 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
        v19 = &v16[8 * v11 + 8 * v10];
        v20 = a2;
      }
      memmove_0(v19, v20, v21);
      return std::vector<CColorGradientStop *>::_Change_array(a1, v16, v27, v34);
    }
  }
  return result;
}
