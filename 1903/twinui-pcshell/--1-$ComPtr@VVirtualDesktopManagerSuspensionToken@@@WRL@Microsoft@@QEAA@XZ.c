/*
 * XREFs of ??1?$ComPtr@VVirtualDesktopManagerSuspensionToken@@@WRL@Microsoft@@QEAA@XZ @ 0x1803EB0C0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopManagerSuspensionToken_IUnknown_CVirtualDesktopManager____::_1_::dtor$1 @ 0x1803EADA5 (_Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopManagerSuspensionToken_IU_ea_1803EADA5.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B1EF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBa.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<VirtualDesktopManagerSuspensionToken>::~ComPtr<VirtualDesktopManagerSuspensionToken>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
