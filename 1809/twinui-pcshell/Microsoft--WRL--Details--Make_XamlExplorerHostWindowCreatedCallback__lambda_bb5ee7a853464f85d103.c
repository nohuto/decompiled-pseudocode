/*
 * XREFs of Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_bb5ee7a853464f85d103d6a4a4db2877_____lambda_bb5ee7a853464f85d103d6a4a4db2877___ @ 0x180266930
 * Callers:
 *     MakeXamlExplorerHostWindowCreatedCallback__lambda_bb5ee7a853464f85d103d6a4a4db2877___ @ 0x180266F18 (MakeXamlExplorerHostWindowCreatedCallback__lambda_bb5ee7a853464f85d103d6a4a4db2877___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIXamlExplorerHostWindowCreatedCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x180259814 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIXamlExplorerHostWindowCr.c)
 *     _lambda_bb5ee7a853464f85d103d6a4a4db2877_::_lambda_bb5ee7a853464f85d103d6a4a4db2877_ @ 0x180268524 (_lambda_bb5ee7a853464f85d103d6a4a4db2877_--_lambda_bb5ee7a853464f85d103d6a4a4db2877_.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_bb5ee7a853464f85d103d6a4a4db2877_____lambda_bb5ee7a853464f85d103d6a4a4db2877___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx

  *a1 = 0LL;
  v4 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>((__int64)v4);
    *v5 = off_180508790;
    v5[4] = off_180508770;
    lambda_bb5ee7a853464f85d103d6a4a4db2877_::_lambda_bb5ee7a853464f85d103d6a4a4db2877_(v5 + 6, a2);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
