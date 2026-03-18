/*
 * XREFs of xxxInvalidateWallpaperWindow @ 0x1C0112F84
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C002AC50 (xxxInternalInvalidate.c)
 */

void xxxInvalidateWallpaperWindow()
{
  __int64 v0; // rax
  __int64 v1; // rax
  struct tagWND *v2; // rcx

  v0 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v0 )
  {
    v1 = *(_QWORD *)(v0 + 8);
    v2 = *(struct tagWND **)(v1 + 184);
    if ( v2 || (v2 = *(struct tagWND **)(v1 + 24)) != 0LL )
      xxxInternalInvalidate(v2, (HRGN)1, 0x405u);
  }
}
