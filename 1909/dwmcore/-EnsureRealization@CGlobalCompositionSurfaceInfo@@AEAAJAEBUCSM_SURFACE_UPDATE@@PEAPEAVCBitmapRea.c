/*
 * XREFs of ?EnsureRealization@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x1800650DC
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x1800623B4 (-ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180051954 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?FindRealizationNoRef@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBAPEAVCBitmapRealization@@I@Z @ 0x180065180 (-FindRealizationNoRef@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBAPEAVCBitmapRealization@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::EnsureRealization(
        CGlobalCompositionSurfaceInfo *this,
        const struct CSM_SURFACE_UPDATE *a2,
        struct CBitmapRealization **a3)
{
  __int64 v3; // r14
  CGlobalCompositionSurfaceInfo::CBindInfo *v4; // rsi
  struct CBitmapRealization *RealizationNoRef; // rbx
  unsigned int v6; // edi
  int v10; // eax
  unsigned int v11; // ecx

  v3 = *((_QWORD *)a2 + 2);
  v4 = (CGlobalCompositionSurfaceInfo *)((char *)this + 88);
  RealizationNoRef = 0LL;
  v6 = 0;
  *a3 = 0LL;
  if ( *((_QWORD *)this + 12) == v3 )
    RealizationNoRef = CGlobalCompositionSurfaceInfo::CBindInfo::FindRealizationNoRef(
                         (CGlobalCompositionSurfaceInfo *)((char *)this + 88),
                         *((_DWORD *)a2 + 6));
  if ( !RealizationNoRef )
  {
    v10 = CGlobalCompositionSurfaceInfo::CBindInfo::Initialize(v4, v3);
    v6 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x163u, 0LL);
      return v6;
    }
    RealizationNoRef = CGlobalCompositionSurfaceInfo::CBindInfo::FindRealizationNoRef(v4, *((_DWORD *)a2 + 6));
    if ( !RealizationNoRef )
      return v6;
  }
  (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)RealizationNoRef + 8LL))(RealizationNoRef);
  *a3 = RealizationNoRef;
  return v6;
}
