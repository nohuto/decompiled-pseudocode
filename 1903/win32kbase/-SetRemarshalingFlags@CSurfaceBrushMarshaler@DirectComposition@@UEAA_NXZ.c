/*
 * XREFs of ?SetRemarshalingFlags@CSurfaceBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01B2A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CSurfaceBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CSurfaceBrushMarshaler *this)
{
  int v1; // eax

  if ( *((_QWORD *)this + 7) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 8) )
    *((_DWORD *)this + 4) |= 0x40u;
  v1 = *((_DWORD *)this + 4);
  if ( *((_BYTE *)this + 104) )
    v1 |= 0x800u;
  *((_DWORD *)this + 4) = v1 | 0x780;
  return 1;
}
