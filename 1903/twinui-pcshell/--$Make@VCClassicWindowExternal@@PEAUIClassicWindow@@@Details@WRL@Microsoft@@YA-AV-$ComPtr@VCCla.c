/*
 * XREFs of ??$Make@VCClassicWindowExternal@@PEAUIClassicWindow@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCClassicWindowExternal@@@12@$$QEAPEAUIClassicWindow@@@Z @ 0x18007B3C4
 * Callers:
 *     _lambda_2dd20bac4e5d2f5df658143d4108a795_::operator() @ 0x18007B2F4 (_lambda_2dd20bac4e5d2f5df658143d4108a795_--operator().c)
 * Callees:
 *     ??0CClassicWindowExternal@@QEAA@PEAUIClassicWindow@@@Z @ 0x18007B424 (--0CClassicWindowExternal@@QEAA@PEAUIClassicWindow@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindowExternal@@UIClassicWindowContainer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180081D60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindowEx.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

CClassicWindowExternal **__fastcall Microsoft::WRL::Details::Make<CClassicWindowExternal,IClassicWindow *>(
        CClassicWindowExternal **a1,
        struct IClassicWindow **a2)
{
  CClassicWindowExternal *v4; // rax
  CClassicWindowExternal *v5; // rdi

  *a1 = 0LL;
  v4 = (CClassicWindowExternal *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = CClassicWindowExternal::CClassicWindowExternal(v4, *a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindowExternal,IClassicWindowContainer,Microsoft::WRL::FtmBase>::Release(*a1);
    *a1 = v5;
  }
  return a1;
}
