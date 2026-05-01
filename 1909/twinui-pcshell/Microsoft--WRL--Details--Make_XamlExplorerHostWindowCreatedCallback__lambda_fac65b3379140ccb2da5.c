/*
 * XREFs of Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_fac65b3379140ccb2da51a4d302d8ccb_____lambda_fac65b3379140ccb2da51a4d302d8ccb___ @ 0x1802F5EBC
 * Callers:
 *     MakeXamlExplorerHostWindowCreatedCallback__lambda_fac65b3379140ccb2da51a4d302d8ccb___ @ 0x1802F60D8 (MakeXamlExplorerHostWindowCreatedCallback__lambda_fac65b3379140ccb2da51a4d302d8ccb___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIXamlExplorerHostWindowCreatedCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1802CF9B4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIXamlExplorerHostWindowCr.c)
 *     _lambda_fac65b3379140ccb2da51a4d302d8ccb_::_lambda_fac65b3379140ccb2da51a4d302d8ccb_ @ 0x1802F63E8 (_lambda_fac65b3379140ccb2da51a4d302d8ccb_--_lambda_fac65b3379140ccb2da51a4d302d8ccb_.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_fac65b3379140ccb2da51a4d302d8ccb_____lambda_fac65b3379140ccb2da51a4d302d8ccb___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx

  *a1 = 0LL;
  v4 = operator new(0x1A8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>((__int64)v4);
    *v5 = off_1805BCA40;
    v5[4] = off_1805BCA20;
    lambda_fac65b3379140ccb2da51a4d302d8ccb_::_lambda_fac65b3379140ccb2da51a4d302d8ccb_(v5 + 6, a2);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
