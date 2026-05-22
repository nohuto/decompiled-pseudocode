/*
 * XREFs of ??$MakeAndInitialize@VActivationProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEAPEAVActivationProcessor@@$$QEAPEAVDWMInputRouter@@@Z @ 0x1800C19D0
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x1800199E8 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C548 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??0ActivationProcessor@@QEAA@XZ @ 0x1800C1F7C (--0ActivationProcessor@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ActivationProcessor,ActivationProcessor,DWMInputRouter *>(
        ActivationProcessor **a1,
        __int64 *a2)
{
  unsigned int v2; // edi
  ActivationProcessor *v5; // rax
  ActivationProcessor *v6; // rax
  __int64 v7; // rcx
  ActivationProcessor *v8; // rbx
  ActivationProcessor *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = (ActivationProcessor *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = ActivationProcessor::ActivationProcessor(v5);
    v7 = *a2;
    v8 = v6;
    v10 = v6;
    *((_QWORD *)v6 + 9) = v7;
    (*(void (__fastcall **)(ActivationProcessor *))(*(_QWORD *)v6 + 8LL))(v6);
    *a1 = v8;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
