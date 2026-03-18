/*
 * XREFs of ?EnsureRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x1800A3828
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x1800A302C (-ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x1800975F8 (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?FindRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@QEBAPEAVCBitmapRealization@@I@Z @ 0x1800A38CC (-FindRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@QEBAPEAVCBitmapRealization@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::EnsureRealization(
        CCompositionSurfaceInfo *this,
        const struct CSM_SURFACE_UPDATE *a2,
        struct CBitmapRealization **a3)
{
  __int64 v3; // r14
  CCompositionSurfaceInfo::CBindInfo *v4; // rsi
  struct CBitmapRealization *RealizationNoRef; // rbx
  unsigned int v6; // edi
  int v10; // eax
  unsigned int v11; // ecx

  v3 = *((_QWORD *)a2 + 2);
  v4 = (CCompositionSurfaceInfo *)((char *)this + 48);
  RealizationNoRef = 0LL;
  v6 = 0;
  *a3 = 0LL;
  if ( *((_QWORD *)this + 7) == v3 )
    RealizationNoRef = CCompositionSurfaceInfo::CBindInfo::FindRealizationNoRef(
                         (CCompositionSurfaceInfo *)((char *)this + 48),
                         *((_DWORD *)a2 + 6));
  if ( !RealizationNoRef )
  {
    v10 = CCompositionSurfaceInfo::CBindInfo::Initialize(v4, v3);
    v6 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1AFu);
      return v6;
    }
    RealizationNoRef = CCompositionSurfaceInfo::CBindInfo::FindRealizationNoRef(v4, *((_DWORD *)a2 + 6));
    if ( !RealizationNoRef )
      return v6;
  }
  (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)RealizationNoRef + 8LL))(RealizationNoRef);
  *a3 = RealizationNoRef;
  return v6;
}
