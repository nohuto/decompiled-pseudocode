/*
 * XREFs of ?SetRemarshalingFlags@CSceneMeshRendererComponentMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01C51A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSceneMeshRendererComponentMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneMeshRendererComponentMarshaler *this)
{
  if ( *((_QWORD *)this + 5) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 6) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_DWORD *)this + 16) )
  {
    *((_DWORD *)this + 4) |= 0x80u;
    *((_DWORD *)this + 17) = 0;
  }
  return (*((_DWORD *)this + 4) & 0xE0) != 0;
}
