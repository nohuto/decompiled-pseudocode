/*
 * XREFs of ?ClearSynchronizationEvents@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAAXXZ @ 0x1C008A918
 * Callers:
 *     ?ReleaseAllReferences@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C008A8E0 (-ReleaseAllReferences@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAXPEAVCApplicationC.c)
 *     ?SetRemarshalingFlags@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C016E9B0 (-SetRemarshalingFlags@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C005B9E8 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

void __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::ClearSynchronizationEvents(
        DirectComposition::CCompiledEffectTemplateMarshaler *this)
{
  DirectComposition::CEvent *v2; // rcx
  __int64 v3; // rcx
  DirectComposition::CEvent *v4; // rcx

  v2 = (DirectComposition::CEvent *)*((_QWORD *)this + 10);
  if ( v2 )
  {
    DirectComposition::CEvent::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 10) = 0LL;
  }
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    KeSetEvent(*(PRKEVENT *)(v3 + 8), 1, 0);
    v4 = (DirectComposition::CEvent *)*((_QWORD *)this + 9);
    if ( v4 )
      DirectComposition::CEvent::`scalar deleting destructor'(v4);
    *((_QWORD *)this + 9) = 0LL;
  }
}
