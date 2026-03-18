/*
 * XREFs of ?SetRemarshalingFlags@CAnimationTriggerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01B9030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CAnimationTriggerMarshaler::SetRemarshalingFlags(
        DirectComposition::CAnimationTriggerMarshaler *this)
{
  return (*((_DWORD *)this + 4) & 0x20) != 0;
}
