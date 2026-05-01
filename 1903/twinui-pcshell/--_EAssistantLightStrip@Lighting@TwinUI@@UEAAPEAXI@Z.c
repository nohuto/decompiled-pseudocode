/*
 * XREFs of ??_EAssistantLightStrip@Lighting@TwinUI@@UEAAPEAXI@Z @ 0x180403220
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18006614C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x18016A3E8 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 */

TwinUI::Lighting::AssistantLightStrip *__fastcall TwinUI::Lighting::AssistantLightStrip::`vector deleting destructor'(
        TwinUI::Lighting::AssistantLightStrip *this,
        char a2)
{
  __int64 v4; // rcx

  std::vector<Windows::UI::Color>::_Tidy((__int64)this + 64);
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)this + 40);
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)this + 16);
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
