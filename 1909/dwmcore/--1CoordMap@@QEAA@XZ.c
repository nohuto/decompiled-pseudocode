/*
 * XREFs of ??1CoordMap@@QEAA@XZ @ 0x18000ED50
 * Callers:
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x18000EC80 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18000E798 (-clear_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_.c)
 *     ?clear_region@?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18000EE24 (-clear_region@-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@CoordMap@@$09$00Vli.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 */

void __fastcall CoordMap::~CoordMap(CoordMap *this, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rcx
  unsigned __int64 v5; // r8
  CoordMap **v6; // rdi
  CoordMap *v7; // rcx
  CoordMap *v8; // rcx

  v2 = (_QWORD *)((char *)this + 368);
  v4 = (_QWORD *)*((_QWORD *)this + 46);
  v5 = (__int64)(v2[1] - (_QWORD)v4) >> 4;
  if ( v5 )
  {
    detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64)v2,
      a2,
      v5);
    v4 = (_QWORD *)*v2;
  }
  *v2 = 0LL;
  if ( v4 == v2 + 3 )
    v4 = 0LL;
  operator delete(v4);
  v6 = (CoordMap **)((char *)this + 184);
  v7 = (CoordMap *)*((_QWORD *)this + 23);
  if ( (__int64)(*((_QWORD *)this + 24) - (_QWORD)v7) >> 4 )
  {
    detail::vector_facade<CoordMap::RampEntry,detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>>::clear_region((char *)this + 184);
    v7 = *v6;
  }
  *v6 = 0LL;
  if ( v7 == (CoordMap *)((char *)this + 208) )
    v7 = 0LL;
  operator delete(v7);
  v8 = *(CoordMap **)this;
  if ( (__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 4 )
  {
    detail::vector_facade<CoordMap::RampEntry,detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>>::clear_region(this);
    v8 = *(CoordMap **)this;
  }
  *(_QWORD *)this = 0LL;
  if ( v8 == (CoordMap *)((char *)this + 24) )
    v8 = 0LL;
  operator delete(v8);
}
