/*
 * XREFs of ?FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@Z @ 0x1C0010EB4
 * Callers:
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C0010650 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     ?OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x1C005C51C (-OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_.c)
 *     ?RemoveRealization@CCompositionBuffer@@MEAAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@Z @ 0x1C005CE10 (-RemoveRealization@CCompositionBuffer@@MEAAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@.c)
 * Callees:
 *     ?GetRealizationAt@CCompositionBuffer@@IEBAPEAVCBufferRealization@@I@Z @ 0x1C0010EE8 (-GetRealizationAt@CCompositionBuffer@@IEBAPEAVCBufferRealization@@I@Z.c)
 */

__int64 __fastcall CCompositionBuffer::FindRealization(
        CCompositionBuffer *this,
        const struct CSM_REALIZATION_INFO *a2,
        struct CBufferRealization **a3)
{
  struct CBufferRealization *RealizationAt; // rax
  unsigned int v4; // r10d
  struct CBufferRealization **v5; // r11

  *a3 = 0LL;
  RealizationAt = CCompositionBuffer::GetRealizationAt(this, *((_DWORD *)a2 + 1));
  if ( RealizationAt )
  {
    *v5 = RealizationAt;
    return 0;
  }
  return v4;
}
