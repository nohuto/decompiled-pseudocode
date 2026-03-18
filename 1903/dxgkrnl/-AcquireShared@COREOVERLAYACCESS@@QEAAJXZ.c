/*
 * XREFs of ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x1C0043290
 * Callers:
 *     DxgkFlipOverlay @ 0x1C0254C70 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C0255100 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C0255680 (DxgkUpdateOverlay.c)
 * Callees:
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F3C (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00074E4 (-Release@COREACCESS@@QEAAXXZ.c)
 */

__int64 __fastcall COREOVERLAYACCESS::AcquireShared(COREOVERLAYACCESS *this)
{
  COREACCESS::AcquireShared((__int64)this + 8, 0xFFFFFFFF, 0LL);
  if ( *(_DWORD *)(*((_QWORD *)this + 9) + 28LL) == 1 )
    return 0LL;
  COREACCESS::Release((COREOVERLAYACCESS *)((char *)this + 8));
  return 3221226166LL;
}
