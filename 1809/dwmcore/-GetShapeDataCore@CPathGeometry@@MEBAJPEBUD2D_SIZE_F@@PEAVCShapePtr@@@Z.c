/*
 * XREFs of ?GetShapeDataCore@CPathGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801AAAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z @ 0x18021F8F8 (--0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z.c)
 */

__int64 __fastcall CPathGeometry::GetShapeDataCore(
        const struct CPathData **this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  unsigned int v3; // ebx
  CPathSegmentsShape *v6; // rax
  __int64 v7; // rcx
  CPathSegmentsShape *v8; // rdi

  v3 = 0;
  if ( this[17] )
  {
    v6 = (CPathSegmentsShape *)HeapAlloc(WPF::g_processHeap, 0, 0x18uLL);
    if ( v6 )
      v8 = CPathSegmentsShape::CPathSegmentsShape(v6, this[17]);
    else
      v8 = 0LL;
    if ( v8 )
    {
      CShapePtr::Release(a3);
      *(_QWORD *)a3 = v8;
      *((_BYTE *)a3 + 8) = 1;
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x3Cu);
    }
  }
  return v3;
}
