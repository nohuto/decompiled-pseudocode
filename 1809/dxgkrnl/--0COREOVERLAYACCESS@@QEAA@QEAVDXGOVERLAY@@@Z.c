/*
 * XREFs of ??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z @ 0x1C003CA04
 * Callers:
 *     DxgkFlipOverlay @ 0x1C0220700 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C0220BA0 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C0221190 (DxgkUpdateOverlay.c)
 * Callees:
 *     <none>
 */

COREOVERLAYACCESS *__fastcall COREOVERLAYACCESS::COREOVERLAYACCESS(
        COREOVERLAYACCESS *this,
        struct DXGOVERLAY *const a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 16LL);
  *((_QWORD *)this + 3) = v2;
  *((_BYTE *)this + 32) = 0;
  if ( v2 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v2 + 24));
    *((_QWORD *)this + 2) = -1LL;
  }
  *((_QWORD *)this + 5) = a2;
  return this;
}
