/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIXamlExplorerHostWindowCreatedCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x180259814
 * Callers:
 *     Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f5e49d766d167_____lambda_37665b47845c81d82a3f5e49d766d167___ @ 0x18025923C (Microsoft--WRL--Details--Make_XamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f.c)
 *     Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_bb5ee7a853464f85d103d6a4a4db2877_____lambda_bb5ee7a853464f85d103d6a4a4db2877___ @ 0x180266930 (Microsoft--WRL--Details--Make_XamlExplorerHostWindowCreatedCallback__lambda_bb5ee7a853464f85d103.c)
 *     XamlExplorerHostWindowCreatedCallback__lambda_33af26c9d846f3b9c507d9b825ceee74___::XamlExplorerHostWindowCreatedCallback__lambda_33af26c9d846f3b9c507d9b825ceee74___ @ 0x18027D8F4 (XamlExplorerHostWindowCreatedCallback__lambda_33af26c9d846f3b9c507d9b825ceee74___--XamlExplorerH.c)
 *     XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401___::XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401___ @ 0x180282BC4 (XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401___--XamlExplorerH.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800364B4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>(
        __int64 a1)
{
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)a1);
  *(_DWORD *)(a1 + 44) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IXamlExplorerHostWindowCreatedCallback>>'};
  *(_QWORD *)(a1 + 32) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IXamlExplorerHostWindowCreatedCallback>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IXamlExplorerHostWindowCreatedCallback>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
