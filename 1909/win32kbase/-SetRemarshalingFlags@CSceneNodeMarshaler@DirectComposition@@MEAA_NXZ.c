/*
 * XREFs of ?SetRemarshalingFlags@CSceneNodeMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BAF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSceneNodeMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneNodeMarshaler *this)
{
  if ( *((_QWORD *)this + 6) )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    *((_DWORD *)this + 16) = 0;
  }
  if ( *((_QWORD *)this + 10) )
  {
    *((_DWORD *)this + 4) |= 0x40u;
    *((_DWORD *)this + 24) = 0;
  }
  if ( *((_QWORD *)this + 13) )
    *((_DWORD *)this + 4) |= 0x80u;
  return (*((_DWORD *)this + 4) & 0xE0) != 0;
}
