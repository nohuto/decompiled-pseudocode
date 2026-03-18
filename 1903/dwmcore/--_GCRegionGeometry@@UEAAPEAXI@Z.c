/*
 * XREFs of ??_GCRegionGeometry@@UEAAPEAXI@Z @ 0x1800895F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CGeometry@@MEAA@XZ @ 0x180089748 (--1CGeometry@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CRegionGeometry *__fastcall CRegionGeometry::`scalar deleting destructor'(CRegionGeometry *this, char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 17);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 19) - v4) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  CGeometry::~CGeometry(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
