/*
 * XREFs of ??$MakeAndInitialize@VHotKeyProcessor@@V1@PEAVHotkeyContextualProcessor@@@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyProcessor@@$$QEAPEAVHotkeyContextualProcessor@@@Z @ 0x18010830C
 * Callers:
 *     ?RuntimeClassInitialize@HotkeyContextualProcessor@@QEAAJXZ @ 0x1801084D0 (-RuntimeClassInitialize@HotkeyContextualProcessor@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C548 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??0HotKeyProcessor@@QEAA@XZ @ 0x1801457FC (--0HotKeyProcessor@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@HotKeyProcessor@@QEAAJPEAUIHotkeyProcessorOwner@@@Z @ 0x180146EE4 (-RuntimeClassInitialize@HotKeyProcessor@@QEAAJPEAUIHotkeyProcessorOwner@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<HotKeyProcessor,HotKeyProcessor,HotkeyContextualProcessor *>(
        HotKeyProcessor **a1,
        _QWORD *a2)
{
  HotKeyProcessor *v4; // rax
  int v5; // edi
  HotKeyProcessor *v6; // rbx
  HotKeyProcessor *v8; // [rsp+60h] [rbp+18h] BYREF
  HotKeyProcessor *v9; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v4 = (HotKeyProcessor *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  if ( v4 )
  {
    v9 = v4;
    v6 = HotKeyProcessor::HotKeyProcessor(v4);
    v8 = v6;
    v5 = HotKeyProcessor::RuntimeClassInitialize(
           v6,
           (struct IHotkeyProcessorOwner *)((*a2 + 16LL) & -(__int64)(*a2 != 0LL)));
    if ( v5 >= 0 )
    {
      if ( v6 )
        (*(void (__fastcall **)(HotKeyProcessor *))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v6;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
