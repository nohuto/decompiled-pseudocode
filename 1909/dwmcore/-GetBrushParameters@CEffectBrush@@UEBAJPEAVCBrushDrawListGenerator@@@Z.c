/*
 * XREFs of ?GetBrushParameters@CEffectBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801C9C70
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0 @ 0x18015D418 (McTemplateU0.c)
 */

__int64 __fastcall CEffectBrush::GetBrushParameters(CEffectBrush *this, struct CBrushDrawListGenerator *a2, __int64 a3)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_EFFECTBRUSH_DRAW_ERROR_INVALID_NESTING, a3);
  return 2147942450LL;
}
