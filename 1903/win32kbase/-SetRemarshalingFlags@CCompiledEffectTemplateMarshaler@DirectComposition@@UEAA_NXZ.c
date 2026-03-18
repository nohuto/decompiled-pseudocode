/*
 * XREFs of ?SetRemarshalingFlags@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01AB610
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearSynchronizationEvents@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAAXXZ @ 0x1C009C978 (-ClearSynchronizationEvents@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAAXXZ.c)
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A8154 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompiledEffectTemplateMarshaler *this)
{
  DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this);
  DirectComposition::CCompiledEffectTemplateMarshaler::ClearSynchronizationEvents(this);
  *((_DWORD *)this + 4) &= ~0x40u;
  return 1;
}
