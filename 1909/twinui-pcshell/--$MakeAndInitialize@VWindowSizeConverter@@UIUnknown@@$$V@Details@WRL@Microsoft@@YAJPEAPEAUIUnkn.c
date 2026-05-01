/*
 * XREFs of ??$MakeAndInitialize@VWindowSizeConverter@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803B0D34
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VWindowSizeConverter@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1803B1D40 (-CreateInstance@-$SimpleClassFactory@VWindowSizeConverter@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0WindowSizeConverter@@QEAA@XZ @ 0x1803B1624 (--0WindowSizeConverter@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@WindowSizeConverter@@QEAAJXZ @ 0x1803B2BA4 (-RuntimeClassInitialize@WindowSizeConverter@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<WindowSizeConverter,IUnknown,>(_QWORD *a1)
{
  WindowSizeConverter *v2; // rax
  int v3; // edi
  WindowSizeConverter *v4; // rbx

  *a1 = 0LL;
  v2 = (WindowSizeConverter *)operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = WindowSizeConverter::WindowSizeConverter(v2);
    v3 = WindowSizeConverter::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = (**(__int64 (__fastcall ***)(WindowSizeConverter *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v4 )
      (*(void (__fastcall **)(WindowSizeConverter *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
