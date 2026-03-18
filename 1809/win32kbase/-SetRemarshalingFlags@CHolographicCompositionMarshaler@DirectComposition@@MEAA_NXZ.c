/*
 * XREFs of ?SetRemarshalingFlags@CHolographicCompositionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C017CDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C016AAD4 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CHolographicCompositionMarshaler::SetRemarshalingFlags(
        DirectComposition::CHolographicCompositionMarshaler *this)
{
  if ( *((_BYTE *)this + 52) && *((_BYTE *)this + 72) )
    *((_DWORD *)this + 4) |= 0x40u;
  DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this);
  return 1;
}
