/*
 * XREFs of ?TryGetDirtyRegion@CHolographicInteropTexture@@QEAAXPEAPEBVCDirtyRegion@@@Z @ 0x180247C2C
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x180246070 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x18002B298 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicInteropTexture::TryGetDirtyRegion(
        CHolographicInteropTexture *this,
        const struct CDirtyRegion **a2)
{
  RTL_SRWLOCK *v2; // rbx
  const struct CDirtyRegion *v5; // r9
  const struct CDirtyRegion *v6; // r8

  v2 = (RTL_SRWLOCK *)((char *)this + 304);
  AcquireSRWLockExclusive((PSRWLOCK)this + 38);
  v5 = (const struct CDirtyRegion *)*((_QWORD *)this + 11);
  v6 = v5;
  if ( v5 && *((_QWORD *)v5 + 2) != *(_QWORD *)(*((_QWORD *)this + 2) + 384LL) )
  {
    ReleaseInterface<CDisplay>((__int64 *)this + 11);
    v6 = (const struct CDirtyRegion *)*((_QWORD *)this + 11);
  }
  *a2 = v6;
  if ( v6 )
    (**(void (__fastcall ***)(const struct CDirtyRegion *))v6)(v6);
  ReleaseSRWLockExclusive(v2);
}
