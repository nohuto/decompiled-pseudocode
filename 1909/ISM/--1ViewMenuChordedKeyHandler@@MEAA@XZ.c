/*
 * XREFs of ??1ViewMenuChordedKeyHandler@@MEAA@XZ @ 0x180079650
 * Callers:
 *     ??_EViewMenuChordedKeyHandler@@MEAAPEAXI@Z @ 0x1800796F0 (--_EViewMenuChordedKeyHandler@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18002B0AC (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewMenuChordedKeyHandler::~ViewMenuChordedKeyHandler(ViewMenuChordedKeyHandler *this)
{
  __int64 v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &ViewMenuChordedKeyHandler::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 4) = 0LL;
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 96LL))(v2);
  std::vector<Windows::UI::Color>::_Tidy((__int64)this + 80);
  v3 = (void *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    std::_Deallocate<16,0>(
      v3,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 8) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFFCuLL));
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 3);
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
