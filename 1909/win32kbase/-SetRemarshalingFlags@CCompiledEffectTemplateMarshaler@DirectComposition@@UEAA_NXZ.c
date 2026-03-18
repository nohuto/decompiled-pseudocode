/*
 * XREFs of ?SetRemarshalingFlags@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01A9930
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearSynchronizationEvents@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAAXXZ @ 0x1C009C0B8 (-ClearSynchronizationEvents@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAAXXZ.c)
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A5EB4 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompiledEffectTemplateMarshaler *this)
{
  DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this);
  DirectComposition::CCompiledEffectTemplateMarshaler::ClearSynchronizationEvents(this);
  *((_DWORD *)this + 4) &= ~0x40u;
  return 1;
}
