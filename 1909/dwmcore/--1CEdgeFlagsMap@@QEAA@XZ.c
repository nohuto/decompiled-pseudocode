/*
 * XREFs of ??1CEdgeFlagsMap@@QEAA@XZ @ 0x1801AD9F8
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180094470 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?clear@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801AE164 (-clear@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_p.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AE258 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vlibera.c)
 *     ?clear_region@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AE4A4 (-clear_region@-$vector_facade@UD2D_VECTOR_2F@@V-$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expa.c)
 */

void __fastcall CEdgeFlagsMap::~CEdgeFlagsMap(CEdgeFlagsMap *this)
{
  char *v1; // rbx
  char *v3; // rcx
  CEdgeFlagsMap *v4; // rcx
  CEdgeFlagsMap *v5; // rcx

  v1 = (char *)this + 240;
  v3 = (char *)*((_QWORD *)this + 30);
  if ( (__int64)(*((_QWORD *)v1 + 1) - (_QWORD)v3) >> 3 )
  {
    detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,8,1,detail::liberal_expansion_policy>>::clear_region(v1);
    v3 = *(char **)v1;
  }
  *(_QWORD *)v1 = 0LL;
  if ( v3 == v1 + 24 )
    v3 = 0LL;
  operator delete(v3);
  detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear((char *)this + 88);
  v4 = (CEdgeFlagsMap *)*((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v4 == (CEdgeFlagsMap *)((char *)this + 112) )
    v4 = 0LL;
  operator delete(v4);
  v5 = *(CEdgeFlagsMap **)this;
  if ( (__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 2 )
  {
    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(this);
    v5 = *(CEdgeFlagsMap **)this;
  }
  *(_QWORD *)this = 0LL;
  if ( v5 == (CEdgeFlagsMap *)((char *)this + 24) )
    v5 = 0LL;
  operator delete(v5);
}
