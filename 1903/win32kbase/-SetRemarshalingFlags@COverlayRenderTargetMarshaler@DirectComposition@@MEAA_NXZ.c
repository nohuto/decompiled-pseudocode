/*
 * XREFs of ?SetRemarshalingFlags@COverlayRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BDF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::COverlayRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::COverlayRenderTargetMarshaler *this)
{
  bool v1; // zf
  int v2; // eax

  v1 = *((_QWORD *)this + 8) == 0LL;
  *((_DWORD *)this + 4) = 32;
  v2 = *((_DWORD *)this + 4);
  if ( !v1 )
    v2 = 96;
  *((_DWORD *)this + 4) = v2;
  return 1;
}
