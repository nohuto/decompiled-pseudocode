/*
 * XREFs of ?ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@@@Z @ 0x1801C2DD4
 * Callers:
 *     ??1CDrawingContext@@EEAA@XZ @ 0x180024C68 (--1CDrawingContext@@EEAA@XZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180077D38 (--1CVisual@@MEAA@XZ.c)
 *     ?PurgeOldRenderPassInfos@CVisual@@QEAAXXZ @ 0x1801C2C48 (-PurgeOldRenderPassInfos@CVisual@@QEAAXXZ.c)
 * Callees:
 *     ??_GCMoveRenderPassInfo@@UEAAPEAXI@Z @ 0x18017ED60 (--_GCMoveRenderPassInfo@@UEAAPEAXI@Z.c)
 */

void __fastcall CVisual::ReleaseMoveRenderPassInfoForContext(
        CVisual *this,
        struct CDrawingContext *a2,
        struct CMoveRenderPassInfo *a3)
{
  struct CMoveRenderPassInfo **v3; // r9
  struct CMoveRenderPassInfo **v4; // rcx
  struct CMoveRenderPassInfo **v5; // rdx
  struct CMoveRenderPassInfo **v6; // rax

  v3 = (struct CMoveRenderPassInfo **)*((_QWORD *)a3 + 11);
  if ( v3[1] != (struct CMoveRenderPassInfo *)((char *)a3 + 88)
    || (v4 = (struct CMoveRenderPassInfo **)*((_QWORD *)a3 + 12), *v4 != (struct CMoveRenderPassInfo *)((char *)a3 + 88))
    || (*v4 = (struct CMoveRenderPassInfo *)v3,
        v3[1] = (struct CMoveRenderPassInfo *)v4,
        --*((_DWORD *)a2 + 1548),
        v5 = (struct CMoveRenderPassInfo **)*((_QWORD *)a3 + 13),
        v5[1] != (struct CMoveRenderPassInfo *)((char *)a3 + 104))
    || (v6 = (struct CMoveRenderPassInfo **)*((_QWORD *)a3 + 14), *v6 != (struct CMoveRenderPassInfo *)((char *)a3 + 104)) )
  {
    __fastfail(3u);
  }
  *v6 = (struct CMoveRenderPassInfo *)v5;
  v5[1] = (struct CMoveRenderPassInfo *)v6;
  if ( a3 )
    CMoveRenderPassInfo::`scalar deleting destructor'((void **)a3, 1);
}
