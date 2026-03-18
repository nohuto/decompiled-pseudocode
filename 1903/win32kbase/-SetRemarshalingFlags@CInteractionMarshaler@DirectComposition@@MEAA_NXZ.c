/*
 * XREFs of ?SetRemarshalingFlags@CInteractionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01AA030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CInteractionMarshaler::SetRemarshalingFlags(
        DirectComposition::CInteractionMarshaler *this)
{
  unsigned int v1; // eax
  char v2; // dl
  bool result; // al

  v1 = *((_DWORD *)this + 4) & 0xFFFFFEDF;
  *((_DWORD *)this + 4) = v1;
  if ( *((_QWORD *)this + 31) )
  {
    v1 |= 0x40u;
    *((_DWORD *)this + 4) = v1;
  }
  v2 = *((_BYTE *)this + 316);
  if ( (v2 & 0x1F) != 0 || *((_DWORD *)this + 78) != 4 )
  {
    v1 |= 0x200u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((_QWORD *)this + 37) )
  {
    v1 |= 0x400u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((_QWORD *)this + 38) )
  {
    v1 |= 0x2000u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( (v2 & 0x60) != 0x60 )
    *((_DWORD *)this + 4) = v1 | 0x800;
  *((_DWORD *)this + 13) |= 0x1Fu;
  result = 1;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 39) |= 0x1Fu;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 56) = 0;
  return result;
}
