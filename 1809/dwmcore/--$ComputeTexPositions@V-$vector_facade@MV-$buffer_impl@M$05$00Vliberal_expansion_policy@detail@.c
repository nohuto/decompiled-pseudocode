/*
 * XREFs of ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x18000B924
 * Callers:
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x18000C120 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z.c)
 * Callees:
 *     ?reserve@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18000BB14 (-reserve@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@deta.c)
 *     ??$ComputeTexPositionsWorker@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@KAXV?$span@$$CBM$0?0@gsl@@V?$span@$$CBURampPair@CoordMap@@$0?0@2@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@M@Z @ 0x18000BCA0 (--$ComputeTexPositionsWorker@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@d.c)
 *     ?clear@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18000CB78 (-clear@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail.c)
 *     ??$?0URampPair@CoordMap@@$0?0X@?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEAA@AEBV?$span@URampPair@CoordMap@@$0?0@1@@Z @ 0x18000CB9C (--$-0URampPair@CoordMap@@$0-0X@-$span@$$CBURampPair@CoordMap@@$0-0@gsl@@QEAA@AEBV-$span@URampPai.c)
 *     ?clear@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18000CBD0 (-clear@-$vector_facade@URampPair@CoordMap@@V-$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_exp.c)
 *     ?GetRampValues@CoordMap@@AEBAXAEBV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEAV?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@3@@Z @ 0x18000CBF4 (-GetRampValues@CoordMap@@AEBAXAEBV-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry.c)
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x180068294 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

void __fastcall CoordMap::ComputeTexPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // rcx
  __int64 v10; // r8
  _BYTE *v11; // rbx
  __int64 v12; // rax
  gsl::details *v13; // rcx
  __int128 v14; // xmm0
  __int64 v15; // rcx
  __int64 v16; // r8
  _BYTE *v17; // rbx
  __int64 v18; // rax
  gsl::details *v19; // rcx
  __int128 v20; // xmm0
  void *v21; // rcx
  bool v22; // zf
  __int128 v23; // [rsp+20h] [rbp-A1h] BYREF
  __int128 v24; // [rsp+30h] [rbp-91h] BYREF
  __int128 v25; // [rsp+40h] [rbp-81h] BYREF
  _BYTE v26[16]; // [rsp+50h] [rbp-71h] BYREF
  _BYTE *v27; // [rsp+60h] [rbp-61h] BYREF
  _BYTE *v28; // [rsp+68h] [rbp-59h]
  __int64 *v29; // [rsp+70h] [rbp-51h]
  _BYTE v30[72]; // [rsp+78h] [rbp-49h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-1h] BYREF

  v27 = v30;
  v28 = v30;
  v29 = &v31;
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(a5);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(a6);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve(a5, *a3);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve(a6, *a4);
  CoordMap::GetRampValues(v9, a1, v10, &v27);
  v11 = v27;
  v12 = gsl::narrow<__int64,unsigned __int64>((v28 - v27) / 12);
  *(_QWORD *)&v23 = v12;
  if ( v12 < 0 || (*((_QWORD *)&v23 + 1) = v11) == 0LL && v12 )
  {
    gsl::details::terminate(v13);
    JUMPOUT(0x18000BB0CLL);
  }
  v14 = *(_OWORD *)gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(&v25, &v23);
  v24 = *(_OWORD *)a3;
  v23 = v14;
  CoordMap::ComputeTexPositionsWorker<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    &v24,
    &v23,
    a5);
  CoordMap::GetRampValues(v15, a1 + 184, v16, &v27);
  v17 = v27;
  v18 = gsl::narrow<__int64,unsigned __int64>((v28 - v27) / 12);
  *(_QWORD *)&v23 = v18;
  if ( v18 < 0 || (*((_QWORD *)&v23 + 1) = v17) == 0LL && v18 )
  {
    gsl::details::terminate(v19);
    __debugbreak();
  }
  v20 = *(_OWORD *)gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(v26, &v23);
  v25 = *(_OWORD *)a4;
  v24 = v20;
  CoordMap::ComputeTexPositionsWorker<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    &v25,
    &v24,
    a6);
  detail::vector_facade<CoordMap::RampPair,detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>>::clear(&v27);
  v21 = v27;
  v22 = v27 == v30;
  v27 = 0LL;
  if ( v22 )
    v21 = 0LL;
  WPF::ProcessHeapImpl::Free(v21);
}
