/*
 * XREFs of ??1CEdgeFlagsMap@@QEAA@XZ @ 0x1801819D4
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B4690 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?clear@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800E64F8 (-clear@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_p.c)
 *     ?clear_region@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE968 (-clear_region@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@.c)
 *     ?clear_region@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EEBAC (-clear_region@-$vector_facade@UD2D_VECTOR_2F@@V-$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expa.c)
 */

void __fastcall CEdgeFlagsMap::~CEdgeFlagsMap(CEdgeFlagsMap *this, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rcx
  unsigned __int64 v5; // r8
  CEdgeFlagsMap *v6; // rcx
  __int64 v7; // rdx
  CEdgeFlagsMap *v8; // rcx
  unsigned __int64 v9; // r8

  v2 = (_QWORD *)((char *)this + 240);
  v4 = (_QWORD *)*((_QWORD *)this + 30);
  v5 = (__int64)(v2[1] - (_QWORD)v4) >> 3;
  if ( v5 )
  {
    detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,8,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64)v2,
      a2,
      v5);
    v4 = (_QWORD *)*v2;
  }
  *v2 = 0LL;
  if ( v4 == v2 + 3 )
    v4 = 0LL;
  WPF::ProcessHeapImpl::Free(v4);
  detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 11);
  v6 = (CEdgeFlagsMap *)*((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v6 == (CEdgeFlagsMap *)((char *)this + 112) )
    v6 = 0LL;
  WPF::ProcessHeapImpl::Free(v6);
  v8 = *(CEdgeFlagsMap **)this;
  v9 = (__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 2;
  if ( v9 )
  {
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64)this,
      v7,
      v9);
    v8 = *(CEdgeFlagsMap **)this;
  }
  *(_QWORD *)this = 0LL;
  if ( v8 == (CEdgeFlagsMap *)((char *)this + 24) )
    v8 = 0LL;
  WPF::ProcessHeapImpl::Free(v8);
}
