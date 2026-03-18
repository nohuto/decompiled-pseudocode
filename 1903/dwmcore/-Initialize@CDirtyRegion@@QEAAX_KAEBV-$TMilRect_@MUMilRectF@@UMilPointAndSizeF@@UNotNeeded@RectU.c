/*
 * XREFs of ?Initialize@CDirtyRegion@@QEAAX_KAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800B90E8
 * Callers:
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800B908C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 * Callees:
 *     ?ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ @ 0x1800B94C4 (-ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

__int64 __fastcall CDirtyRegion::Initialize(CDirtyRegion *this, __int64 a2, _OWORD *a3, char a4)
{
  __int64 result; // rax
  __int64 v9; // rcx

  memset_0((char *)this + 24, 0, 0x80uLL);
  memset_0((char *)this + 536, 0, 0x120uLL);
  *((_QWORD *)this + 2) = a2;
  *(_WORD *)((char *)this + 2885) = 0;
  *((_DWORD *)this + 714) = 0;
  *((_DWORD *)this + 319) = 0;
  *((_BYTE *)this + 2884) = 0;
  *(_WORD *)((char *)this + 2881) = 0;
  *((_DWORD *)this + 719) = 1065353216;
  *((_BYTE *)this + 2883) = a4;
  *(_OWORD *)((char *)this + 2860) = *a3;
  if ( !*((_BYTE *)this + 2880) )
    CDirtyRegion::ClearDirtyRegionAnnotationLists(this);
  result = (__int64)this + 160;
  v9 = 8LL;
  do
  {
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result - 8) = 0LL;
    *(_BYTE *)(result + 260) = 1;
    *(_QWORD *)(result + 252) = 0LL;
    *(_DWORD *)(result + 248) = 0;
    *(_QWORD *)(result - 128) = 0LL;
    *(_QWORD *)(result - 136) = 0LL;
    result += 16LL;
    --v9;
  }
  while ( v9 );
  return result;
}
