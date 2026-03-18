/*
 * XREFs of ??1CShapeDrawingContext@@QEAA@XZ @ 0x18020CB98
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18020CEFC (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?clear@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18020DAE0 (-clear@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansi.c)
 */

void __fastcall CShapeDrawingContext::~CShapeDrawingContext(CShapeDrawingContext *this)
{
  void *v2; // rcx
  CShapeDrawingContext *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 63);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 56 * ((*((_QWORD *)this + 65) - (_QWORD)v2) / 56LL));
    *((_QWORD *)this + 63) = 0LL;
    *((_QWORD *)this + 64) = 0LL;
    *((_QWORD *)this + 65) = 0LL;
  }
  detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::clear((char *)this + 64);
  v3 = (CShapeDrawingContext *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v3 == (CShapeDrawingContext *)((char *)this + 88) )
    v3 = 0LL;
  operator delete(v3);
  operator delete(*((void **)this + 6));
}
