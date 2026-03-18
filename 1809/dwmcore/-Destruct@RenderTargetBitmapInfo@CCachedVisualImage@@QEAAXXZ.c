/*
 * XREFs of ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x18008C270
 * Callers:
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x18008B7E8 (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18008BF90 (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x18008C35C (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x18008FCAC (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ @ 0x1800920F0 (-RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCachedVisualImage::RenderTargetBitmapInfo::Destruct(CCachedVisualImage::RenderTargetBitmapInfo *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 32LL))(
      v2,
      (*(_QWORD *)this + 128LL) & -(__int64)(*(_QWORD *)this != 0LL));
    ReleaseInterface<IBitmapLock>((__int64 *)this + 2);
  }
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
}
