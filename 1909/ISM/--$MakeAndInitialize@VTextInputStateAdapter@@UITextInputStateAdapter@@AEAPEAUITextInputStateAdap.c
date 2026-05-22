/*
 * XREFs of ??$MakeAndInitialize@VTextInputStateAdapter@@UITextInputStateAdapter@@AEAPEAUITextInputStateAdapterOwner@@@Details@WRL@Microsoft@@YAJPEAPEAUITextInputStateAdapter@@AEAPEAUITextInputStateAdapterOwner@@@Z @ 0x180147D54
 * Callers:
 *     ?RuntimeClassInitialize@HotkeyContextualProcessor@@QEAAJXZ @ 0x1801084D0 (-RuntimeClassInitialize@HotkeyContextualProcessor@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C548 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??0TextInputStateAdapter@@QEAA@XZ @ 0x180147E1C (--0TextInputStateAdapter@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TextInputStateAdapter@@QEAAJPEAUITextInputStateAdapterOwner@@@Z @ 0x1801495B4 (-RuntimeClassInitialize@TextInputStateAdapter@@QEAAJPEAUITextInputStateAdapterOwner@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TextInputStateAdapter,ITextInputStateAdapter,ITextInputStateAdapterOwner * &>(
        _QWORD *a1,
        struct ITextInputStateAdapterOwner **a2)
{
  TextInputStateAdapter *v4; // rax
  int v5; // edi
  TextInputStateAdapter *v6; // rbx

  *a1 = 0LL;
  v4 = (TextInputStateAdapter *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = TextInputStateAdapter::TextInputStateAdapter(v4);
    v5 = TextInputStateAdapter::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
      v5 = (**(__int64 (__fastcall ***)(TextInputStateAdapter *, GUID *, _QWORD *))v6)(
             v6,
             &GUID_357266b0_f382_4b51_bb07_358e832a9d12,
             a1);
    if ( v6 )
      (*(void (__fastcall **)(TextInputStateAdapter *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
