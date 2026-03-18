/*
 * XREFs of ?Create@CSectionBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180226178
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180097B18 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 * Callees:
 *     ??0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@_N@Z @ 0x180091D10 (--0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_.c)
 *     ??2CSectionBitmapRealization@@KAPEAX_K@Z @ 0x180091DC0 (--2CSectionBitmapRealization@@KAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSectionBitmapRealization::Create(
        const struct CSM_BUFFER_ATTRIBUTES *a1,
        const struct CSM_REALIZATION_INFO *a2,
        const struct CSM_SYSMEM_SECTION_INFO *a3,
        struct CBitmapRealization **a4)
{
  CSectionBitmapRealization *v8; // rax
  __int64 v9; // rcx
  struct CBitmapRealization *v10; // rbx
  unsigned int v11; // edi
  int v12; // eax
  __int64 v13; // rcx

  *a4 = 0LL;
  v8 = (CSectionBitmapRealization *)CSectionBitmapRealization::operator new();
  if ( v8 )
    v10 = CSectionBitmapRealization::CSectionBitmapRealization(v8, a1, a2, a3, 1);
  else
    v10 = 0LL;
  if ( v10 )
  {
    (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v10 + 8LL))(v10);
    v12 = (*(__int64 (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v10 + 80LL))(v10);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x25u);
      (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    else
    {
      *a4 = v10;
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x22u);
  }
  return v11;
}
