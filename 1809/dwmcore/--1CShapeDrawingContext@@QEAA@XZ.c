/*
 * XREFs of ??1CShapeDrawingContext@@QEAA@XZ @ 0x1801D9F20
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801DA22C (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CShapeDrawingContext::~CShapeDrawingContext(CShapeDrawingContext *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 64);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 56 * ((*((_QWORD *)this + 66) - (_QWORD)v2) / 56LL));
    *((_QWORD *)this + 64) = 0LL;
    *((_QWORD *)this + 65) = 0LL;
    *((_QWORD *)this + 66) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 8);
  WPF::ProcessHeapImpl::Free(*((void **)this + 6));
}
