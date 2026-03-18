/*
 * XREFs of ?SetRemarshalingFlags@CTextBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01B6350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CTextBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CTextBrushMarshaler *this)
{
  int v1; // eax

  if ( *((_QWORD *)this + 7) && *((_QWORD *)this + 8) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 9) && *((_QWORD *)this + 10) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((float *)this + 22) > 0.0 )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((float *)this + 23) != 0.0
    || *((float *)this + 24) != 0.0
    || *((float *)this + 25) != 0.0
    || *((float *)this + 26) != 0.0 )
  {
    *((_DWORD *)this + 4) |= 0x100u;
  }
  if ( *((_DWORD *)this + 27) )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((_DWORD *)this + 28) )
    *((_DWORD *)this + 4) |= 0x400u;
  v1 = *((_DWORD *)this + 4);
  if ( *((_DWORD *)this + 29) )
  {
    v1 |= 0x800u;
    *((_DWORD *)this + 4) = v1;
  }
  return (v1 & 0xFE0) != 0;
}
