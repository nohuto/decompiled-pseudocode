/*
 * XREFs of ??_EAssistantLightStrip@Lighting@TwinUI@@UEAAPEAXI@Z @ 0x18039D980
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180083574 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

TwinUI::Lighting::AssistantLightStrip *__fastcall TwinUI::Lighting::AssistantLightStrip::`vector deleting destructor'(
        TwinUI::Lighting::AssistantLightStrip *this,
        char a2)
{
  __int64 v4; // rcx

  std::vector<Windows::UI::Color>::_Tidy((__int64)this + 64);
  std::vector<Windows::UI::Color>::_Tidy((__int64)this + 40);
  std::vector<Windows::UI::Color>::_Tidy((__int64)this + 16);
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *(_QWORD *)this = &TwinUI::Lighting::IAssistantLight::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
