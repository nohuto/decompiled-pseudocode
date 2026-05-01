/*
 * XREFs of XamlExplorerHostWindowCreatedCallback__lambda_33af26c9d846f3b9c507d9b825ceee74___::XamlExplorerHostWindowCreatedCallback__lambda_33af26c9d846f3b9c507d9b825ceee74___ @ 0x18027D8F4
 * Callers:
 *     MakeXamlExplorerHostWindowCreatedCallback__lambda_33af26c9d846f3b9c507d9b825ceee74___ @ 0x18027D2C0 (MakeXamlExplorerHostWindowCreatedCallback__lambda_33af26c9d846f3b9c507d9b825ceee74___.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIXamlExplorerHostWindowCreatedCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x180259814 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIXamlExplorerHostWindowCr.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlExplorerHostWindowCreatedCallback__lambda_33af26c9d846f3b9c507d9b825ceee74___::XamlExplorerHostWindowCreatedCallback__lambda_33af26c9d846f3b9c507d9b825ceee74___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>(a1);
  *(_QWORD *)a1 = off_18050A6A0;
  *(_QWORD *)(a1 + 32) = off_18050A680;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)a2;
  v4 = (_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 56) = 0LL;
  if ( a1 + 56 != a2 + 8 )
  {
    *(_QWORD *)(a1 + 56) = *v4;
    *v4 = 0LL;
  }
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 80) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 32));
  *(_QWORD *)(a1 + 88) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 40));
  *(_QWORD *)(a1 + 96) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 48));
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 56);
  return a1;
}
