/*
 * XREFs of ?ClearMoveData@CDwmMetaRegion@@QEAAXXZ @ 0x180028244
 * Callers:
 *     ??1CWindowNode@@MEAA@XZ @ 0x180027F30 (--1CWindowNode@@MEAA@XZ.c)
 *     ?AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z @ 0x180180F74 (-AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z.c)
 *     ?IntersectDirtyRectWithMoveData@CDwmMetaRegion@@AEAAJPEAUtagRECT@@@Z @ 0x180182438 (-IntersectDirtyRectWithMoveData@CDwmMetaRegion@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
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
    operator delete(v3);
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
