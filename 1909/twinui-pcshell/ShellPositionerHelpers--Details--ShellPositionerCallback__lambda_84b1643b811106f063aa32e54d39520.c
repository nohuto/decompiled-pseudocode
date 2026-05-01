/*
 * XREFs of ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_84b1643b811106f063aa32e54d395206___::_scalar_deleting_destructor_ @ 0x1800858D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIXamlExplorerHostWindowInternal@@UIXamlExplorerHostWindow@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x180085908 (--1-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ChainInterfaces@UIXamlExplorerHostW.c)
 *     ??3@YAXPEAX@Z @ 0x18008A5F0 (--3@YAXPEAX@Z.c)
 */

void *__fastcall ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_84b1643b811106f063aa32e54d395206___::_scalar_deleting_destructor_(
        void *Block,
        char a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IXamlExplorerHostWindowInternal,IXamlExplorerHostWindow,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IXamlExplorerHostWindowInternal,IXamlExplorerHostWindow,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>();
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
