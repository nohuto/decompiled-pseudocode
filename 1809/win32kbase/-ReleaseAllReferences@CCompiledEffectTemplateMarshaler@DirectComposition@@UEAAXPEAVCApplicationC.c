/*
 * XREFs of ?ReleaseAllReferences@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C008A8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C000DCC0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ClearSynchronizationEvents@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAAXXZ @ 0x1C008A918 (-ClearSynchronizationEvents@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAAXXZ.c)
 */

void __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::ReleaseAllReferences(
        DirectComposition::CCompiledEffectTemplateMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 6) = 0LL;
  }
  DirectComposition::CCompiledEffectTemplateMarshaler::ClearSynchronizationEvents(this);
}
