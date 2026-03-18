/*
 * XREFs of ?SetRemarshalingFlags@CVisualTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01C5620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CVisualTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CVisualTargetMarshaler *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 7) )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    return 1;
  }
  return result;
}
