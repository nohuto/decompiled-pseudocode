/*
 * XREFs of ?SetRemarshalingFlags@CSceneModelTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BAF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSceneModelTransformMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneModelTransformMarshaler *this)
{
  if ( *((_QWORD *)this + 5) )
    *((_DWORD *)this + 4) |= 0x20u;
  return (*((_DWORD *)this + 4) & 0x20) != 0;
}
