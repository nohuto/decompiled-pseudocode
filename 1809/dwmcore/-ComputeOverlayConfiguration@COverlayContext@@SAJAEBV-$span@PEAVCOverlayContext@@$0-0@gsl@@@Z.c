/*
 * XREFs of ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180049840
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800CD560 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ??E?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ @ 0x180005ED4 (--E-$span_iterator@V-$span@PEAVCColorGradientStop@@$0-0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ.c)
 *     ??D?$span_iterator@V?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@$0A@@details@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@XZ @ 0x180005F08 (--D-$span_iterator@V-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@$0A@@details@gsl@@QEB.c)
 *     ?reserve_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCOverlayContext@@_K0@Z @ 0x180049CC0 (-reserve_region@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$0.c)
 *     ?reserve_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCOverlayContext@@_K0@Z @ 0x180049F14 (-reserve_region@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$03$00V.c)
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18004A458 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 *     ??9details@gsl@@YA_NV?$span_iterator@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@$0A@@01@0@Z @ 0x1800713A0 (--9details@gsl@@YA_NV-$span_iterator@V-$span@PEBUShaderLinkingBody@@$0-0@gsl@@$0A@@01@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800D7DB8 (-Reset@COverlayContext@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?clear_region@?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE290 (-clear_region@-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPl.c)
 *     ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE4CC (-clear_region@-$vector_facade@PEAVCDrawListEntry@@V-$buffer_impl@PEAVCDrawListEntry@@$03$00Vlibe.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ?IsRevokable@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18016C05C (-IsRevokable@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?erase@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@@Z @ 0x18016CB6C (-erase@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal.c)
 *     ?push_back@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEAVCOverlayContext@@@Z @ 0x18016CBF8 (-push_back@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$03$00Vliber.c)
 */

__int64 __fastcall COverlayContext::ComputeOverlayConfiguration(__int64 *a1)
{
  __int64 v1; // rbx
  int v3; // r12d
  __int64 v4; // rax
  gsl::details *v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // r10
  __int64 v8; // rdx
  __int64 v9; // r9
  _BYTE *v10; // rsi
  __int64 v11; // rdi
  char v12; // bl
  __int64 v13; // rdi
  _BYTE *v14; // rbx
  unsigned int v15; // esi
  __int64 v16; // rcx
  int v17; // eax
  __int128 v18; // xmm6
  COverlayContext **v19; // rax
  void *v20; // r8
  bool v21; // zf
  void *v22; // r8
  __int64 v24; // rdx
  gsl::details **v25; // rax
  __int64 v26; // rsi
  __int64 v27; // r15
  __int64 v28; // rax
  COverlayContext *v29; // rdi
  const struct COverlayContext::OverlayPlaneInfo *v30; // rbx
  const struct COverlayContext::OverlayPlaneInfo *v31; // r14
  __int128 v32; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v33; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v34; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v35; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v36; // [rsp+68h] [rbp-98h]
  _BYTE **v37; // [rsp+70h] [rbp-90h]
  _BYTE v38[32]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE *v39; // [rsp+98h] [rbp-68h] BYREF
  _BYTE *v40; // [rsp+A0h] [rbp-60h]
  __int64 *v41; // [rsp+A8h] [rbp-58h]
  _BYTE v42[128]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v43; // [rsp+130h] [rbp+30h] BYREF

  v1 = *a1;
  v32 = (unsigned __int64)a1;
  v39 = v42;
  v40 = v42;
  v41 = &v43;
  v3 = 0;
  v4 = detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::reserve_region(
         &v39,
         0LL,
         v1);
  v6 = v32;
  v7 = (_QWORD *)v4;
  v8 = *((_QWORD *)&v32 + 1);
  v9 = 0LL;
  while ( (__int64 *)v6 != a1 || v8 != v1 )
  {
    if ( v8 == *(_QWORD *)v6 )
      goto LABEL_55;
    v5 = *(gsl::details **)(v9 + *(_QWORD *)(v6 + 8));
    *v7 = v5;
    if ( v9 < 0 || v8 == *(_QWORD *)v6 )
      goto LABEL_55;
    ++v8;
    v9 += 8LL;
    ++v7;
  }
  v35 = v38;
  v36 = v38;
  v37 = &v39;
  while ( 1 )
  {
    v10 = v40;
    if ( ((v40 - v39) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
      break;
    v11 = *((_QWORD *)v40 - 1);
    v12 = *(_BYTE *)(v11 + 13413);
    v13 = *(_QWORD *)(v11 + 80);
    *(_QWORD *)&v33 = v13;
    *(_QWORD *)detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::reserve_region(
                 &v35,
                 (v36 - v35) >> 3,
                 v6,
                 v9) = *((_QWORD *)v10 - 1);
    detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::clear_region(
      &v39,
      (v40 - v39 - 8) >> 3);
    if ( !v12 )
    {
      v14 = v39;
      v15 = DWORD1(v33);
      while ( v14 != v40 )
      {
        if ( *(_QWORD *)(*(_QWORD *)v14 + 80LL) == __PAIR64__(v15, v13) )
        {
          detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::push_back(
            &v35,
            v14);
          *(_QWORD *)&v33 = v14;
          v14 = *(_BYTE **)detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::erase(
                             &v39,
                             &v34,
                             &v33);
        }
        else
        {
          v14 += 8;
        }
      }
    }
    v16 = (v36 - v35) >> 3;
    if ( v36 - v35 < 0 )
    {
      gsl::details::terminate((gsl::details *)v16);
      __debugbreak();
    }
    *(_QWORD *)&v32 = (v36 - v35) >> 3;
    if ( v16 < 0 )
    {
      gsl::details::terminate((gsl::details *)v16);
      JUMPOUT(0x180049CB8LL);
    }
    *((_QWORD *)&v32 + 1) = v35;
    if ( !v35 && v16 )
    {
      gsl::details::terminate((gsl::details *)v16);
      __debugbreak();
    }
    v17 = COverlayContext::ComputeOverlayConfigurationForAdapter(&v32);
    v3 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, v17, 0x11Bu);
      goto LABEL_24;
    }
    v6 = (v36 - v35) >> 3;
    if ( v6 )
      detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::clear_region(&v35);
  }
  v24 = *a1;
  if ( !*a1 )
    goto LABEL_24;
  if ( *a1 <= 0 )
  {
LABEL_55:
    gsl::details::terminate(v5);
    __debugbreak();
  }
  v25 = (gsl::details **)a1[1];
  v26 = 0LL;
  *(_QWORD *)&v34 = *a1;
  v27 = 0LL;
  v5 = *v25;
  *(_QWORD *)&v33 = *((_QWORD *)*v25 + 1680);
  v28 = v24;
  while ( v26 != v28 )
  {
    if ( v26 == v24 )
      goto LABEL_55;
    v29 = *(COverlayContext **)(v27 + a1[1]);
    v30 = (const struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)v29 + 1054);
    v31 = (const struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)v29 + 1055);
    while ( v30 != v31 )
    {
      if ( COverlayContext::IsRevokable(v29, v30) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v33 + 536) + 104LL))(
          *(_QWORD *)(v33 + 536),
          CCommonRegistryData::m_dwOverlayDisqualifyInterval,
          0x10000LL);
        break;
      }
      v30 = (const struct COverlayContext::OverlayPlaneInfo *)((char *)v30 + 256);
    }
    if ( v27 < 0 )
      goto LABEL_55;
    v24 = *a1;
    if ( v26 == *a1 )
      goto LABEL_55;
    v28 = v34;
    ++v26;
    v27 += 8LL;
  }
LABEL_24:
  if ( v3 < 0 )
  {
    *((_QWORD *)&v32 + 1) = *a1;
    *(_QWORD *)&v32 = a1;
    v18 = v32;
    v34 = (unsigned __int64)a1;
    v33 = (unsigned __int64)a1;
    if ( (unsigned __int8)gsl::details::operator!=(&v33, &v32) )
    {
      v32 = v18;
      do
      {
        v19 = (COverlayContext **)gsl::details::span_iterator<gsl::span<COverlayContext::OverlayPlaneInfo *,-1>,0>::operator*((gsl::details *)&v34);
        COverlayContext::Reset(*v19);
        gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>::operator++((gsl::details *)&v34);
        v33 = v34;
      }
      while ( (unsigned __int8)gsl::details::operator!=(&v33, &v32) );
    }
  }
  if ( (v36 - v35) >> 3 )
    detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::clear_region(&v35);
  v20 = v35;
  v21 = v35 == v38;
  v35 = 0LL;
  if ( v21 )
    v20 = 0LL;
  if ( v20 )
    HeapFree(WPF::g_processHeap, 0, v20);
  if ( (v40 - v39) >> 3 )
    detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::clear_region(
      &v39,
      0LL);
  v22 = v39;
  v21 = v39 == v42;
  v39 = 0LL;
  if ( v21 )
    v22 = 0LL;
  if ( v22 )
    HeapFree(WPF::g_processHeap, 0, v22);
  return (unsigned int)v3;
}
