/*
 * XREFs of ?SetRemarshalingFlags@CDesktopTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01AA110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CDesktopTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CDesktopTargetMarshaler *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 4) | 0x20;
  *((_DWORD *)this + 4) = v1;
  if ( *((_QWORD *)this + 7) )
  {
    v1 |= 0x40u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((_QWORD *)this + 8) )
  {
    v1 |= 0x80u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((_QWORD *)this + 9) )
  {
    v1 |= 0x400u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((_BYTE *)this + 52) )
  {
    v1 |= 0x100u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((_BYTE *)this + 53) )
  {
    v1 |= 0x200u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((_BYTE *)this + 54) )
  {
    v1 |= 0x1000u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((_DWORD *)this + 20) || *((_DWORD *)this + 22) || *((_DWORD *)this + 21) || *((_DWORD *)this + 23) )
  {
    v1 |= 0x800u;
    *((_DWORD *)this + 4) = v1;
  }
  return (v1 & 0x1FC0) != 0;
}
