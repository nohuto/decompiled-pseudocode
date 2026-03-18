/*
 * XREFs of ?CreateAndAddSingleBuffer@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@@Z @ 0x1801BC3A8
 * Callers:
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x1800975F8 (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?AddRealization@CBindInfo@CCompositionSurfaceInfo@@AEAAJPEAVCBitmapRealization@@@Z @ 0x180097A14 (-AddRealization@CBindInfo@CCompositionSurfaceInfo@@AEAAJPEAVCBitmapRealization@@@Z.c)
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180097B18 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::CreateAndAddSingleBuffer(
        CCompositionSurfaceInfo::CBindInfo *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_SINGLE_BUFFER_INFO *a3)
{
  int v4; // eax
  __int64 v5; // rcx
  struct CBitmapRealization *v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  struct CBitmapRealization *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  v4 = CCompositionSurfaceInfo::CBindInfo::CreateNewRealization(this, a2, a3, &v11);
  v6 = v11;
  v7 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802BCDC0, 3u, v4, 0x5AAu);
  }
  else
  {
    v8 = CCompositionSurfaceInfo::CBindInfo::AddRealization(this, v11);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1802BCDC0, 3u, v8, 0x5AFu);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}
