/*
 * XREFs of ??1CoordMap@@QEAA@XZ @ 0x18000D110
 * Callers:
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x18000D040 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?clear_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EF36C (-clear_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_.c)
 *     ?clear_region@?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EF404 (-clear_region@-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@CoordMap@@$09$00Vli.c)
 */

void __fastcall CoordMap::~CoordMap(CoordMap *this)
{
  char *v1; // rdi
  char *v3; // rcx
  CoordMap **v4; // rdi
  CoordMap *v5; // rcx
  CoordMap *v6; // rcx

  v1 = (char *)this + 368;
  v3 = (char *)*((_QWORD *)this + 46);
  if ( (__int64)(*((_QWORD *)v1 + 1) - (_QWORD)v3) >> 4 )
  {
    detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>>::clear_region(v1);
    v3 = *(char **)v1;
  }
  *(_QWORD *)v1 = 0LL;
  if ( v3 == v1 + 24 )
    v3 = 0LL;
  WPF::ProcessHeapImpl::Free(v3);
  v4 = (CoordMap **)((char *)this + 184);
  v5 = (CoordMap *)*((_QWORD *)this + 23);
  if ( (__int64)(*((_QWORD *)this + 24) - (_QWORD)v5) >> 4 )
  {
    detail::vector_facade<CoordMap::RampEntry,detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>>::clear_region((char *)this + 184);
    v5 = *v4;
  }
  *v4 = 0LL;
  if ( v5 == (CoordMap *)((char *)this + 208) )
    v5 = 0LL;
  WPF::ProcessHeapImpl::Free(v5);
  v6 = *(CoordMap **)this;
  if ( (__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 4 )
  {
    detail::vector_facade<CoordMap::RampEntry,detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>>::clear_region(this);
    v6 = *(CoordMap **)this;
  }
  *(_QWORD *)this = 0LL;
  if ( v6 == (CoordMap *)((char *)this + 24) )
    v6 = 0LL;
  WPF::ProcessHeapImpl::Free(v6);
}
