/*
 * XREFs of ?FCursorShadowed@@YAHPEAU_CURSINFO@@@Z @ 0x1C0018F24
 * Callers:
 *     zzzUpdateCursorImage @ 0x1C0017DF0 (zzzUpdateCursorImage.c)
 *     SetPointer @ 0x1C00BD490 (SetPointer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FCursorShadowed(struct _CURSINFO *a1)
{
  unsigned int v1; // r8d

  v1 = 0;
  if ( !gbDisableAlpha && ((unsigned int)gpdwCPUserPreferencesMask & 0x80002000) == 0x80002000 )
    return (*(_DWORD *)a1 & 0x200) != 0;
  return v1;
}
