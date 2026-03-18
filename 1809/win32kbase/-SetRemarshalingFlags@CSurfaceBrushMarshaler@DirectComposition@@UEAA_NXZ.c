/*
 * XREFs of ?SetRemarshalingFlags@CSurfaceBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0176360
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
  v1 = *((_DWORD *)this + 4);
  if ( *((_QWORD *)this + 8) )
  {
    v1 |= 0x40u;
    *((_DWORD *)this + 4) = v1;
  }
  *((_DWORD *)this + 4) = v1 | 0x7C0;
  return 1;
}
