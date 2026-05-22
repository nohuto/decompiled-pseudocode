/*
 * XREFs of ??$MakeAndInitialize@VMagnifierProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVMagnifierProcessor@@@Z @ 0x1800C1B18
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x1800199E8 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C548 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??0MagnifierProcessor@@QEAA@XZ @ 0x1800C20E4 (--0MagnifierProcessor@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MagnifierProcessor@@QEAAJXZ @ 0x180105718 (-RuntimeClassInitialize@MagnifierProcessor@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MagnifierProcessor,MagnifierProcessor,>(
        MagnifierProcessor **a1)
{
  MagnifierProcessor *v2; // rax
  int v3; // edi
  MagnifierProcessor *v4; // rbx
  MagnifierProcessor *v6; // [rsp+58h] [rbp+10h] BYREF
  MagnifierProcessor *v7; // [rsp+60h] [rbp+18h]

  *a1 = 0LL;
  v2 = (MagnifierProcessor *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( v2 )
  {
    v7 = v2;
    v4 = MagnifierProcessor::MagnifierProcessor(v2);
    v6 = v4;
    v3 = MagnifierProcessor::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      if ( v4 )
        (*(void (__fastcall **)(MagnifierProcessor *))(*(_QWORD *)v4 + 8LL))(v4);
      *a1 = v4;
      v3 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
