/*
 * XREFs of ?NotifyTreeDirtyRegion@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x18020E240
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReplaceInterface@VCDisplay@@V1@@@YAXAEAPEAVCDisplay@@PEAV0@@Z @ 0x1800D874C (--$ReplaceInterface@VCDisplay@@V1@@@YAXAEAPEAVCDisplay@@PEAV0@@Z.c)
 */

void __fastcall CHolographicInteropTexture::NotifyTreeDirtyRegion(
        CHolographicInteropTexture *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  RTL_SRWLOCK *v3; // rbx

  v3 = (RTL_SRWLOCK *)((char *)this + 248);
  AcquireSRWLockExclusive((PSRWLOCK)this + 31);
  ReplaceInterface<CDisplay,CDisplay>((__int64 *)this + 4, (__int64 (__fastcall ***)(_QWORD))a3);
  ReleaseSRWLockExclusive(v3);
}
