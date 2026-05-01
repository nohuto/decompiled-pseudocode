/*
 * XREFs of _lambda_37665b47845c81d82a3f5e49d766d167_::__lambda_37665b47845c81d82a3f5e49d766d167_ @ 0x180259A68
 * Callers:
 *     _XamlExplorerHostShellComponent::InitializeWindows_::_1_::dtor$6 @ 0x18025AE45 (_XamlExplorerHostShellComponent--InitializeWindows_--_1_--dtor$6.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIXamlExplorerHost@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B9820 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_1801B9820.c)
 */

__int64 __fastcall lambda_37665b47845c81d82a3f5e49d766d167_::__lambda_37665b47845c81d82a3f5e49d766d167_(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
