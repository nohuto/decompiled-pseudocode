/*
 * XREFs of ??0CDrawListEntryBatch@@AEAA@PEAVCD3DDeviceLevel1@@PEAVCSharedDirect3DResources@0@@Z @ 0x1800BAF90
 * Callers:
 *     ?OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCDrawListEntryBatch@@@Z @ 0x18006654C (-OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCDrawListEntryB.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

CDrawListEntryBatch *__fastcall CDrawListEntryBatch::CDrawListEntryBatch(
        CDrawListEntryBatch *this,
        struct CD3DDeviceLevel1 *a2,
        struct CDrawListEntryBatch::CSharedDirect3DResources *a3)
{
  _OWORD *v4; // rax

  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &CDrawListEntryBatch::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  *((_QWORD *)this + 1) = &CDrawListEntryBatch::`vftable'{for `CMILRefCountBase'};
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 12) = -1;
  *((_DWORD *)this + 13) = -1;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 19) = 1065353216;
  *((_QWORD *)this + 10) = a3;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  v4 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  *((_QWORD *)this + 11) = v4;
  *v4 = 0LL;
  **((_QWORD **)this + 11) = (char *)this + 88;
  return this;
}
