/*
 * XREFs of ?PushCandidates@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x1800D5208
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18004A458 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 * Callees:
 *     ??E?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ @ 0x180005ED4 (--E-$span_iterator@V-$span@PEAVCColorGradientStop@@$0-0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ.c)
 *     ??D?$span_iterator@V?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@$0A@@details@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@XZ @ 0x180005F08 (--D-$span_iterator@V-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@$0A@@details@gsl@@QEB.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?swap@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEAV12@@Z @ 0x1800D539C (-swap@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COverl.c)
 *     ??$swap@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x1800D5544 (--$swap@$0BA@@-$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAE.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800D7F38 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800EFF70 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??$assign@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@0@Z @ 0x180167A5C (--$assign@V-$move_iterator@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X.c)
 *     ??$emplace@VOverlayPlaneInfo@COverlayContext@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@VOverlayPlaneInfo@COverlayContext@@@Z @ 0x180167BF8 (--$emplace@VOverlayPlaneInfo@COverlayContext@@@-$vector_facade@VOverlayPlaneInfo@COverlayContext.c)
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x1801681F0 (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z @ 0x1801683C0 (--0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z.c)
 *     ??1OverlayPlaneInfo@COverlayContext@@QEAA@XZ @ 0x180168710 (--1OverlayPlaneInfo@COverlayContext@@QEAA@XZ.c)
 *     ??9details@gsl@@YA_NV?$span_iterator@V?$span@$$CBUKeyframeData@@$0?0@gsl@@$0A@@01@0@Z @ 0x1801689A4 (--9details@gsl@@YA_NV-$span_iterator@V-$span@$$CBUKeyframeData@@$0-0@gsl@@$0A@@01@0@Z.c)
 */

__int64 __fastcall COverlayContext::PushCandidates(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v3; // r15
  char v7; // si
  _QWORD *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // eax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rax
  __int64 result; // rax
  const struct COverlayContext::OverlayPlaneInfo **v17; // rax
  __int64 v18; // rax
  COverlayContext::OverlayPlaneInfo *v19; // rbx
  __int64 v20; // rax
  void *v21; // rcx
  bool v22; // zf
  __int64 v23; // rcx
  int v24; // ecx
  __int128 v25; // [rsp+20h] [rbp-E0h] BYREF
  __int128 i; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v27; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v28[256]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v29[256]; // [rsp+150h] [rbp+50h] BYREF
  __int128 v30; // [rsp+250h] [rbp+150h] BYREF
  _BYTE *v31; // [rsp+260h] [rbp+160h] BYREF
  _BYTE *v32; // [rsp+268h] [rbp+168h]
  __int64 *v33; // [rsp+270h] [rbp+170h]
  _BYTE v34[4096]; // [rsp+278h] [rbp+178h] BYREF
  __int64 v35; // [rsp+1278h] [rbp+1178h] BYREF

  v3 = a1 + 4312;
  v7 = 0;
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(a1 + 4312);
  if ( a3 )
  {
    *(_QWORD *)&v30 = a2;
    v31 = v34;
    v32 = v34;
    v33 = &v35;
    *((_QWORD *)&v30 + 1) = *a2;
    v27 = v30;
    for ( i = (unsigned __int64)a2;
          ;
          gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>::operator++((gsl::details *)&i) )
    {
      v25 = i;
      if ( !(unsigned __int8)gsl::details::operator!=(&v25, &v27) )
        break;
      v17 = (const struct COverlayContext::OverlayPlaneInfo **)gsl::details::span_iterator<gsl::span<COverlayContext::OverlayPlaneInfo *,-1>,0>::operator*((gsl::details *)&i);
      if ( *(_QWORD *)*v17 == a1 )
      {
        v18 = COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo((COverlayContext::OverlayPlaneInfo *)v28, *v17);
        *(_QWORD *)&v25 = v32;
        v19 = (COverlayContext::OverlayPlaneInfo *)v18;
        v20 = COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v29, v18);
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace<COverlayContext::OverlayPlaneInfo>(
          &v31,
          &v30,
          &v25,
          v20);
        COverlayContext::OverlayPlaneInfo::~OverlayPlaneInfo(v19);
      }
    }
    v8 = (_QWORD *)(a1 + 192);
    detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap(
      v3,
      a1 + 192);
    if ( &v31 != (_BYTE **)(a1 + 192) )
    {
      if ( (unsigned __int8)detail::expandable_buffer_base<COverlayContext::OverlayPlaneInfo,16>::swap<16>(
                              a1 + 192,
                              &v31) )
      {
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(&v31);
      }
      else
      {
        *(_QWORD *)&v25 = v32;
        *(_QWORD *)&v30 = v31;
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::assign<std::move_iterator<detail::basic_iterator<COverlayContext::OverlayPlaneInfo>>,void>(
          a1 + 192,
          &v30,
          &v25);
      }
    }
    detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(&v31);
    v21 = v31;
    v22 = v31 == v34;
    v31 = 0LL;
    if ( v22 )
      v21 = 0LL;
    WPF::ProcessHeapImpl::Free(v21);
  }
  else
  {
    v8 = (_QWORD *)(a1 + 192);
    detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap(
      v3,
      a1 + 192);
  }
  v9 = *(_QWORD *)(a1 + 12552);
  v10 = (*(_QWORD *)(a1 + 12560) - v9) / 120;
  if ( v10 )
    v7 = *(_BYTE *)(v9 + 112) != 0;
  if ( *(_BYTE *)(a1 + 13423) != v7 )
  {
    v23 = *(_QWORD *)(a1 + 16);
    LOBYTE(v10) = v7;
    *(_BYTE *)(a1 + 13423) = v7;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 312LL))(v23, v10);
    *(_BYTE *)(a1 + 13417) = 1;
    *(_BYTE *)(a1 + 13432) = 1;
  }
  v11 = *(_DWORD *)(a1 + 12880);
  v12 = *(_OWORD *)(a1 + 12832);
  *(_OWORD *)(a1 + 12952) = *(_OWORD *)(a1 + 12816);
  v13 = *(_OWORD *)(a1 + 12848);
  *(_OWORD *)(a1 + 12968) = v12;
  v14 = *(_OWORD *)(a1 + 12864);
  *(_OWORD *)(a1 + 12984) = v13;
  *(_OWORD *)(a1 + 13000) = v14;
  *(_DWORD *)(a1 + 13016) = v11;
  *(_BYTE *)(a1 + 13426) = *(_BYTE *)(a1 + 13425);
  v15 = *(_QWORD *)(a1 + 8440);
  if ( ((v8[1] - *v8) & 0xFFFFFFFFFFFFFF00uLL) != 0 )
  {
    result = v15 - *(_QWORD *)(a1 + 8432);
    if ( (result & 0xFFFFFFFFFFFFFF00uLL) == 0 && *(_DWORD *)(a1 + 104) != 1 )
    {
      *(_DWORD *)(a1 + 108) = 1;
LABEL_27:
      *(_BYTE *)(a1 + 13431) = 1;
    }
  }
  else
  {
    result = v15 - *(_QWORD *)(a1 + 8432);
    if ( (result & 0xFFFFFFFFFFFFFF00uLL) != 0 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 16) + 24LL))(
                 *(_QWORD *)(a1 + 16),
                 &v30);
      v24 = *(_DWORD *)(a1 + 104);
      if ( *(_DWORD *)(result + 4) != v24 )
      {
        *(_DWORD *)(a1 + 108) = v24;
        goto LABEL_27;
      }
    }
  }
  return result;
}
