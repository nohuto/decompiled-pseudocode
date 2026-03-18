/*
 * XREFs of ?SetRemarshalingFlags@CEffectBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01A71C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CEffectBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CEffectBrushMarshaler *this)
{
  if ( *((_QWORD *)this + 7) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 8) )
    *((_DWORD *)this + 4) |= 0x40u;
  *((_DWORD *)this + 21) = 0;
  return 1;
}
