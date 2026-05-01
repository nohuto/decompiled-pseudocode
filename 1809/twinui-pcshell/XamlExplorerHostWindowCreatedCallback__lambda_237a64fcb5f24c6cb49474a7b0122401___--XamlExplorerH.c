/*
 * XREFs of XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401___::XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401___ @ 0x180282BC4
 * Callers:
 *     MakeXamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401___ @ 0x180282970 (MakeXamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401___.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIXamlExplorerHostWindowCreatedCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x180259814 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIXamlExplorerHostWindowCr.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401___::XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>(a1);
  *(_QWORD *)a1 = off_18050A938;
  *(_QWORD *)(a1 + 32) = off_18050A918;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 64) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 16));
  *(_QWORD *)(a1 + 72) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 24));
  *(_QWORD *)(a1 + 80) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 32));
  *(_QWORD *)(a1 + 88) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 40));
  return a1;
}
