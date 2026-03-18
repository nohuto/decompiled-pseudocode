/*
 * XREFs of ?SetRemarshalingFlags@CCompositionSkyBoxBrushMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01AD940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CCompositionSkyBoxBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionSkyBoxBrushMarshaler *this)
{
  if ( *((_DWORD *)this + 18) != 63 )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((float *)this + 19) != 0.0 || *((float *)this + 20) != 0.0 || *((float *)this + 21) != 0.0 )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((float *)this + 22) != 100.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((_BYTE *)this + 92) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_QWORD *)this + 8) )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((_QWORD *)this + 7) )
    *((_DWORD *)this + 4) |= 0x200u;
  return 1;
}
