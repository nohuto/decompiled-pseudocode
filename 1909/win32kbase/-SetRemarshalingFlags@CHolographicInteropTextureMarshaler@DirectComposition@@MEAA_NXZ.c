/*
 * XREFs of ?SetRemarshalingFlags@CHolographicInteropTextureMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A91C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CHolographicInteropTextureMarshaler::SetRemarshalingFlags(
        DirectComposition::CHolographicInteropTextureMarshaler *this)
{
  char v1; // dl
  int v2; // eax

  v1 = 0;
  v2 = *((_DWORD *)this + 4) | 0x20;
  *((_DWORD *)this + 4) = v2;
  if ( *((_DWORD *)this + 13) || *((_DWORD *)this + 14) || *((_DWORD *)this + 11) || *((_DWORD *)this + 12) )
  {
    v2 |= 0x40u;
    *((_DWORD *)this + 4) = v2;
  }
  if ( *((_DWORD *)this + 10) )
  {
    v2 |= 0x100u;
    *((_DWORD *)this + 4) = v2;
  }
  if ( *((_QWORD *)this + 9) )
  {
    v2 |= 0x80u;
    *((_DWORD *)this + 4) = v2;
  }
  if ( *((_DWORD *)this + 15) || (v2 & 0xC0) != 0 )
    return 1;
  return v1;
}
