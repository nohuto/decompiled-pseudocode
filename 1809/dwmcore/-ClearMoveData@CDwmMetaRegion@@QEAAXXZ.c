/*
 * XREFs of ?ClearMoveData@CDwmMetaRegion@@QEAAXXZ @ 0x180094968
 * Callers:
 *     ??1CWindowNode@@MEAA@XZ @ 0x180094640 (--1CWindowNode@@MEAA@XZ.c)
 *     ?AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z @ 0x18017F30C (-AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z.c)
 *     ?IntersectDirtyRectWithMoveData@CDwmMetaRegion@@AEAAJPEAUtagRECT@@@Z @ 0x18018071C (-IntersectDirtyRectWithMoveData@CDwmMetaRegion@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CDwmMetaRegion::ClearMoveData(CDwmMetaRegion *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    DeleteObject(v2);
    *((_QWORD *)this + 3) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    WPF::ProcessHeapImpl::Free(v3);
    *((_QWORD *)this + 4) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    DeleteObject(v4);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_BYTE *)this + 40) = 0;
}
