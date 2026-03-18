/*
 * XREFs of ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18021C654
 * Callers:
 *     ?ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETPATHDATA@@PEBXI@Z @ 0x1801A3C08 (-ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SE.c)
 *     ?GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801A50F0 (-GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PATHGEOMETRY_SETPATH@@@Z @ 0x1801AAB48 (-ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PATHGEOMETRY_SETPATH@@@Z.c)
 *     ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x18021D1B8 (-Simplify@CPathData@@QEBAJPEAPEAV1@@Z.c)
 *     ?GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x18021DC60 (-GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z.c)
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18021F368 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??$insert@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@X@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@1@Z @ 0x18021C554 (--$insert@V-$span_iterator@V-$span@$$CBE$0-0@gsl@@$0A@@details@gsl@@X@-$vector@EV-$allocator@E@s.c)
 *     ?reserve@?$vector@EV?$allocator@E@std@@@std@@QEAAX_K@Z @ 0x18021D408 (-reserve@-$vector@EV-$allocator@E@std@@@std@@QEAAX_K@Z.c)
 */

__int64 __fastcall CPathData::CPathData(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rdi
  _BYTE *v6; // r8
  __int128 v7; // xmm0
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int128 v10; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 8) = 0;
  v3 = (_QWORD *)(a1 + 24);
  *(_QWORD *)a1 = &CPathData::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 16) = &CPathData::`vftable'{for `ID2D1GeometrySink'};
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_BYTE *)(a1 + 80) = 0;
  std::vector<unsigned char>::reserve(v3, *a3);
  v6 = *(_BYTE **)(a1 + 32);
  *((_QWORD *)&v9 + 1) = *a3;
  *(_QWORD *)&v9 = a3;
  v7 = v9;
  v9 = (unsigned __int64)a3;
  v10 = v7;
  std::vector<unsigned char>::insert<gsl::details::span_iterator<gsl::span<unsigned char const,-1>,0>,void>(
    v3,
    &v11,
    v6,
    &v9,
    &v10);
  return a1;
}
