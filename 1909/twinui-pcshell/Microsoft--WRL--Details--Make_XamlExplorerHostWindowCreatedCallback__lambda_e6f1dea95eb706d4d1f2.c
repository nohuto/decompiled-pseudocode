/*
 * XREFs of Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_e6f1dea95eb706d4d1f25363c8f9b29f_____lambda_e6f1dea95eb706d4d1f25363c8f9b29f___ @ 0x1802CF3CC
 * Callers:
 *     MakeXamlExplorerHostWindowCreatedCallback__lambda_e6f1dea95eb706d4d1f25363c8f9b29f___ @ 0x1802CF608 (MakeXamlExplorerHostWindowCreatedCallback__lambda_e6f1dea95eb706d4d1f25363c8f9b29f___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIXamlExplorerHostWindowCreatedCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1802CF9B4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIXamlExplorerHostWindowCr.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_e6f1dea95eb706d4d1f25363c8f9b29f_____lambda_e6f1dea95eb706d4d1f25363c8f9b29f___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx

  *a1 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>(v4);
    *v5 = off_1805B9D18;
    v5[4] = off_1805B9D68;
    v5[6] = 0LL;
    if ( v5 + 6 != a2 )
    {
      v5[6] = *a2;
      *a2 = 0LL;
    }
    v5[7] = a2[1];
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
