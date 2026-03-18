/*
 * XREFs of ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x1800623B4
 * Callers:
 *     ?ProcessSurfaceUpdate@CGlobalCompositionSurfaceInfo@@UEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180062330 (-ProcessSurfaceUpdate@CGlobalCompositionSurfaceInfo@@UEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?EnsureCurrentRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAAJXZ @ 0x1800BD94C (-EnsureCurrentRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAAJXZ.c)
 * Callees:
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x180062BD4 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM.c)
 *     ?EnsureRealization@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x1800650DC (-EnsureRealization@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRea.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x1800C2A20 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::ProcessSurfaceUpdateInternal(
        CGlobalCompositionSurfaceInfo *this,
        const struct CSM_SURFACE_UPDATE *a2)
{
  unsigned int v2; // esi
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ecx
  struct CBitmapRealization *v8; // r14
  struct CBitmapRealization *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v10 = 0LL;
  v5 = *((_QWORD *)a2 + 2);
  if ( *((_QWORD *)this + 12) != v5 )
  {
    CGlobalCompositionSurfaceInfo::CBindInfo::Reset((CGlobalCompositionSurfaceInfo *)((char *)this + 88));
    CGlobalCompositionSurfaceInfo::UpdateRenderingRealization(this, 0LL, 0LL, 0LL, 0LL, 1);
    v5 = *((_QWORD *)a2 + 2);
  }
  if ( v5 )
  {
    v6 = CGlobalCompositionSurfaceInfo::EnsureRealization(this, a2, &v10);
    v8 = v10;
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x124u, 0LL);
    }
    else
    {
      *((_DWORD *)this + 28) = *((_DWORD *)a2 + 7);
      *((_DWORD *)this + 29) = *((_DWORD *)a2 + 48);
      CGlobalCompositionSurfaceInfo::UpdateRenderingRealization(
        this,
        v8,
        (const struct CSM_SURFACE_UPDATE *)((char *)a2 + 72),
        *((HRGN *)a2 + 4),
        (const struct CSM_SURFACE_UPDATE *)((char *)a2 + 40),
        0);
    }
    if ( v8 )
      (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v2;
}
