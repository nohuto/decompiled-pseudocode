/*
 * XREFs of ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x18002F1F0
 * Callers:
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800EE5A0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 * Callees:
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x18002F3D4 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     ?reserve@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18002F3F8 (-reserve@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@deta.c)
 *     ?clear@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18002F4A4 (-clear@-$vector_facade@URampPair@CoordMap@@V-$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_exp.c)
 *     ?clear@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18002F52C (-clear@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail.c)
 *     ?GetRampValues@CoordMap@@AEBAXAEBV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEAV?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@3@@Z @ 0x18002F5C0 (-GetRampValues@CoordMap@@AEBAXAEBV-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry.c)
 *     ??$ComputeTexPositionsWorker@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@KAXV?$span@$$CBM$0?0@gsl@@V?$span@$$CBURampPair@CoordMap@@$0?0@2@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@M@Z @ 0x18002F8BC (--$ComputeTexPositionsWorker@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@d.c)
 *     ??$?0URampPair@CoordMap@@$0?0X@?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEAA@AEBV?$span@URampPair@CoordMap@@$0?0@1@@Z @ 0x18002FC4C (--$-0URampPair@CoordMap@@$0-0X@-$span@$$CBURampPair@CoordMap@@$0-0@gsl@@QEAA@AEBV-$span@URampPai.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int128 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  _BYTE *v18; // rbx
  __int64 v19; // rax
  gsl::details *v20; // rcx
  __int128 *v21; // rax
  void *v22; // rcx
  bool v23; // zf
  __int128 v24; // [rsp+20h] [rbp-91h] BYREF
  __int128 v25; // [rsp+30h] [rbp-81h] BYREF
  _BYTE v26[16]; // [rsp+40h] [rbp-71h] BYREF
  _BYTE *v27; // [rsp+50h] [rbp-61h] BYREF
  _BYTE *v28; // [rsp+58h] [rbp-59h]
  __int64 *v29; // [rsp+60h] [rbp-51h]
  _BYTE v30[72]; // [rsp+68h] [rbp-49h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-1h] BYREF

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
  *(_QWORD *)&v24 = v12;
  if ( v12 < 0 || (*((_QWORD *)&v24 + 1) = v11) == 0LL && v12 )
  {
    ((void (__fastcall *)(__int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(v14, v13);
    __debugbreak();
  }
  v15 = (__int128 *)gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(v26, &v24);
  v25 = *(_OWORD *)a3;
  v24 = *v15;
  CoordMap::ComputeTexPositionsWorker<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    &v25,
    &v24,
    a5);
  CoordMap::GetRampValues(v16, a1 + 184, v17, &v27);
  v18 = v27;
  v19 = gsl::narrow<__int64,unsigned __int64>((v28 - v27) / 12);
  *(_QWORD *)&v24 = v19;
  if ( v19 < 0 || (*((_QWORD *)&v24 + 1) = v18) == 0LL && v19 )
  {
    `gsl::details::get_terminate_handler'::`2'::handler(v20);
    __debugbreak();
  }
  v21 = (__int128 *)gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(v26, &v24);
  v24 = *(_OWORD *)a4;
  v25 = *v21;
  CoordMap::ComputeTexPositionsWorker<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    &v24,
    &v25,
    a6);
  detail::vector_facade<CoordMap::RampPair,detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>>::clear(&v27);
  v22 = v27;
  v23 = v27 == v30;
  v27 = 0LL;
  if ( v23 )
    v22 = 0LL;
  operator delete(v22);
}
