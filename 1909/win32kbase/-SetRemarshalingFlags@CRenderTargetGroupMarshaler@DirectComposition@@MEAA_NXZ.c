/*
 * XREFs of ?SetRemarshalingFlags@CRenderTargetGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01AF3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CRenderTargetGroupMarshaler::SetRemarshalingFlags(
        DirectComposition::CRenderTargetGroupMarshaler *this)
{
  if ( !*((_DWORD *)this + 12) )
    return 0;
  *((_DWORD *)this + 13) = 0;
  return 1;
}
