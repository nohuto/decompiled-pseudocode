/*
 * XREFs of ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x1C00433F0
 * Callers:
 *     DxgkFlipOverlay @ 0x1C02552F0 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C0255780 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C0255D00 (DxgkUpdateOverlay.c)
 * Callees:
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00076AC (-Release@COREACCESS@@QEAAXXZ.c)
 */

__int64 __fastcall COREOVERLAYACCESS::AcquireShared(COREOVERLAYACCESS *this)
{
  COREACCESS::AcquireShared((__int64)this + 8, 0xFFFFFFFF, 0LL);
  if ( *(_DWORD *)(*((_QWORD *)this + 9) + 28LL) == 1 )
    return 0LL;
  COREACCESS::Release((COREOVERLAYACCESS *)((char *)this + 8));
  return 3221226166LL;
}
