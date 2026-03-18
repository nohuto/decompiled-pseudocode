/*
 * XREFs of ?NotifyTreeDirtyRegion@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x180245DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReplaceInterface@$$CBVCDirtyRegion@@$$CBV1@@@YAXAEAPEBVCDirtyRegion@@PEBV0@@Z @ 0x180166EC0 (--$ReplaceInterface@$$CBVCDirtyRegion@@$$CBV1@@@YAXAEAPEBVCDirtyRegion@@PEBV0@@Z.c)
 */

void __fastcall CHolographicInteropTexture::NotifyTreeDirtyRegion(
        CHolographicInteropTexture *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  RTL_SRWLOCK *v3; // rbx

  v3 = (RTL_SRWLOCK *)((char *)this + 248);
  AcquireSRWLockExclusive((PSRWLOCK)this + 31);
  ReplaceInterface<CDirtyRegion const,CDirtyRegion const>((__int64 *)this + 4, (__int64 (__fastcall ***)(_QWORD))a3);
  ReleaseSRWLockExclusive(v3);
}
