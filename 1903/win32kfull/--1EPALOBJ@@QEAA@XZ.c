/*
 * XREFs of ??1EPALOBJ@@QEAA@XZ @ 0x1C00AD814
 * Callers:
 *     GreDereferenceObject @ 0x1C00455D4 (GreDereferenceObject.c)
 *     GreReferenceObject @ 0x1C004567C (GreReferenceObject.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C00AD034 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00ED094 (zzzUpdateWindowsAfterModeChange.c)
 *     RecreateRedirectionBitmap @ 0x1C00ED748 (RecreateRedirectionBitmap.c)
 *     NtGdiEngDeleteSurface @ 0x1C01371B0 (NtGdiEngDeleteSurface.c)
 *     GreCreateHalftonePalette @ 0x1C02B021C (GreCreateHalftonePalette.c)
 *     NtGdiResizePalette @ 0x1C02B0B50 (NtGdiResizePalette.c)
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
