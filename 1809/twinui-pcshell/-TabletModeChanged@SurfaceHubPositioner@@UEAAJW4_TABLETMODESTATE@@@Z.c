/*
 * XREFs of ?TabletModeChanged@SurfaceHubPositioner@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x1803390A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800498D4 (-IsPPIEdition@@YA_NXZ.c)
 *     ?IsPPIFullFrameUI@@YA_NXZ @ 0x180115358 (-IsPPIFullFrameUI@@YA_NXZ.c)
 */

__int64 __fastcall SurfaceHubPositioner::TabletModeChanged(__int64 a1, int a2)
{
  char v2; // bl

  v2 = 1;
  *(_DWORD *)(a1 + 16) = a2;
  if ( a2 != 1 || !IsPPIEdition() || IsPPIFullFrameUI() )
    v2 = 0;
  *(_BYTE *)(a1 + 416) = v2;
  return 0LL;
}
