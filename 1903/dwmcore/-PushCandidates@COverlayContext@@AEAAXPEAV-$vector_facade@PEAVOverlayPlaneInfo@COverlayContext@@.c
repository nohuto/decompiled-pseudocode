/*
 * XREFs of ?PushCandidates@COverlayContext@@AEAAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800E4320
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180092EC4 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800B0D60 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?swap@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEAV12@@Z @ 0x1800E4484 (-swap@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COverl.c)
 *     ??$swap@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x1800E4730 (--$swap@$0BA@@-$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAE.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800EC440 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??$assign@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@0@Z @ 0x180182718 (--$assign@V-$move_iterator@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X.c)
 *     ??$emplace@VOverlayPlaneInfo@COverlayContext@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@VOverlayPlaneInfo@COverlayContext@@@Z @ 0x1801828B4 (--$emplace@VOverlayPlaneInfo@COverlayContext@@@-$vector_facade@VOverlayPlaneInfo@COverlayContext.c)
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x18018319C (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z @ 0x18018336C (--0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z.c)
 *     ??1OverlayPlaneInfo@COverlayContext@@QEAA@XZ @ 0x1801836C0 (--1OverlayPlaneInfo@COverlayContext@@QEAA@XZ.c)
 *     ?erase@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@@Z @ 0x180187D58 (-erase@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal.c)
 */

__int64 __fastcall COverlayContext::PushCandidates(__int64 a1, const struct COverlayContext::OverlayPlaneInfo ***a2)
{
  __int64 v2; // r12
  char v5; // r14
  __int64 v6; // r8
  _QWORD *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // eax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // rax
  __int64 result; // rax
  const struct COverlayContext::OverlayPlaneInfo **v16; // rbx
  __int64 v17; // rax
  COverlayContext::OverlayPlaneInfo *v18; // rdi
  __int64 v19; // rax
  void *v20; // rcx
  bool v21; // zf
  __int64 v22; // rcx
  int v23; // ebx
  const struct COverlayContext::OverlayPlaneInfo **v24; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE *v25; // [rsp+28h] [rbp-D8h] BYREF
  char v26[256]; // [rsp+30h] [rbp-D0h] BYREF
  char v27[256]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v28[16]; // [rsp+230h] [rbp+130h] BYREF
  _BYTE *v29; // [rsp+240h] [rbp+140h] BYREF
  const struct COverlayContext::OverlayPlaneInfo **v30; // [rsp+248h] [rbp+148h]
  __int64 *v31; // [rsp+250h] [rbp+150h]
  _BYTE v32[4096]; // [rsp+258h] [rbp+158h] BYREF
  __int64 v33; // [rsp+1258h] [rbp+1158h] BYREF

  v2 = a1 + 4312;
  v5 = 0;
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((_QWORD *)(a1 + 4312));
  if ( a2 )
  {
    v16 = *a2;
    v29 = v32;
    v30 = (const struct COverlayContext::OverlayPlaneInfo **)v32;
    v31 = &v33;
    while ( v16 != a2[1] )
    {
      if ( *(_QWORD *)*v16 == a1 )
      {
        v17 = COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo((COverlayContext::OverlayPlaneInfo *)v26, *v16);
        v24 = v30;
        v18 = (COverlayContext::OverlayPlaneInfo *)v17;
        v19 = COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v27, v17);
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace<COverlayContext::OverlayPlaneInfo>(
          &v29,
          &v25,
          &v24,
          v19);
        COverlayContext::OverlayPlaneInfo::~OverlayPlaneInfo(v18);
        v24 = v16;
        v16 = *(const struct COverlayContext::OverlayPlaneInfo ***)detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::erase(
                                                                     a2,
                                                                     v28,
                                                                     &v24);
      }
      else
      {
        ++v16;
      }
    }
    v7 = (_QWORD *)(a1 + 192);
    detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap(
      v2,
      a1 + 192,
      v6);
    if ( &v29 != (_BYTE **)(a1 + 192) )
    {
      if ( (unsigned __int8)detail::expandable_buffer_base<COverlayContext::OverlayPlaneInfo,16>::swap<16>(
                              a1 + 192,
                              &v29) )
      {
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(&v29);
      }
      else
      {
        v24 = v30;
        v25 = v29;
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::assign<std::move_iterator<detail::basic_iterator<COverlayContext::OverlayPlaneInfo>>,void>(
          a1 + 192,
          &v25,
          &v24);
      }
    }
    detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(&v29);
    v20 = v29;
    v21 = v29 == v32;
    v29 = 0LL;
    if ( v21 )
      v20 = 0LL;
    operator delete(v20);
  }
  else
  {
    v7 = (_QWORD *)(a1 + 192);
    detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap(
      v2,
      a1 + 192,
      v6);
  }
  v8 = *(_QWORD *)(a1 + 12552);
  v9 = (*(_QWORD *)(a1 + 12560) - v8) / 120;
  if ( v9 )
    v5 = *(_BYTE *)(v8 + 112) != 0;
  if ( *(_BYTE *)(a1 + 13439) != v5 )
  {
    v22 = *(_QWORD *)(a1 + 16);
    LOBYTE(v9) = v5;
    *(_BYTE *)(a1 + 13439) = v5;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 312LL))(v22, v9);
    *(_BYTE *)(a1 + 13433) = 1;
    *(_BYTE *)(a1 + 13447) = 1;
  }
  v10 = *(_DWORD *)(a1 + 12880);
  v11 = *(_OWORD *)(a1 + 12832);
  *(_OWORD *)(a1 + 12952) = *(_OWORD *)(a1 + 12816);
  v12 = *(_OWORD *)(a1 + 12848);
  *(_OWORD *)(a1 + 12968) = v11;
  v13 = *(_OWORD *)(a1 + 12864);
  *(_OWORD *)(a1 + 12984) = v12;
  *(_OWORD *)(a1 + 13000) = v13;
  *(_DWORD *)(a1 + 13016) = v10;
  *(_BYTE *)(a1 + 13442) = *(_BYTE *)(a1 + 13441);
  v14 = *(_QWORD *)(a1 + 8440);
  if ( ((v7[1] - *v7) & 0xFFFFFFFFFFFFFF00uLL) != 0 )
  {
    result = v14 - *(_QWORD *)(a1 + 8432);
    if ( (result & 0xFFFFFFFFFFFFFF00uLL) == 0 && *(_DWORD *)(a1 + 104) != 1 )
    {
      *(_DWORD *)(a1 + 108) = 1;
LABEL_27:
      *(_BYTE *)(a1 + 13446) = 1;
    }
  }
  else
  {
    result = v14 - *(_QWORD *)(a1 + 8432);
    if ( (result & 0xFFFFFFFFFFFFFF00uLL) != 0 )
    {
      v23 = *(_DWORD *)(a1 + 104);
      result = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16), v28);
      if ( *(_DWORD *)(result + 4) != v23 )
      {
        *(_DWORD *)(a1 + 108) = v23;
        goto LABEL_27;
      }
    }
  }
  return result;
}
