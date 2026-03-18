/*
 * XREFs of ??1EPALOBJ@@QEAA@XZ @ 0x1C004E634
 * Callers:
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C004DE54 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     GreDereferenceObject @ 0x1C0089FA4 (GreDereferenceObject.c)
 *     GreReferenceObject @ 0x1C008A04C (GreReferenceObject.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00CBC74 (zzzUpdateWindowsAfterModeChange.c)
 *     RecreateRedirectionBitmap @ 0x1C00CC328 (RecreateRedirectionBitmap.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C00CCC00 (NtGdiDdDDICreateDCFromMemory.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C0102A70 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     NtGdiEngDeleteSurface @ 0x1C0111230 (NtGdiEngDeleteSurface.c)
 *     EngMarkBandingSurface @ 0x1C0112120 (EngMarkBandingSurface.c)
 *     DxgkEngBltViaGDI @ 0x1C0273B20 (DxgkEngBltViaGDI.c)
 *     GreCreateHalftonePalette @ 0x1C02AFD6C (GreCreateHalftonePalette.c)
 *     NtGdiResizePalette @ 0x1C02B06A0 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

void __fastcall EPALOBJ::~EPALOBJ(EPALOBJ *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
    DEC_SHARE_REF_CNT(v1);
}
