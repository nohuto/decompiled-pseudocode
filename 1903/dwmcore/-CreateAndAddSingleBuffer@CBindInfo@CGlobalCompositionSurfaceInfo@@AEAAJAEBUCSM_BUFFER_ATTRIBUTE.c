/*
 * XREFs of ?CreateAndAddSingleBuffer@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@@Z @ 0x18025CCE4
 * Callers:
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18003D430 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJPEAVCBitmapRealization@@@Z @ 0x18003D7C8 (-AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJPEAVCBitmapRealization@@@Z.c)
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18003D8C4 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::CreateAndAddSingleBuffer(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_SINGLE_BUFFER_INFO *a3)
{
  signed int v4; // eax
  __int64 v5; // rcx
  struct CBitmapRealization *v6; // rdi
  unsigned int v7; // ebx
  signed int v8; // eax
  __int64 v9; // rcx
  struct CBitmapRealization *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  v4 = CGlobalCompositionSurfaceInfo::CBindInfo::CreateNewRealization(this, a2, a3, &v11);
  v6 = v11;
  v7 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_180314518, 3u, v4, 0x561u, 0LL);
  }
  else
  {
    v8 = CGlobalCompositionSurfaceInfo::CBindInfo::AddRealization(this, v11);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_180314518, 3u, v8, 0x566u, 0LL);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}
