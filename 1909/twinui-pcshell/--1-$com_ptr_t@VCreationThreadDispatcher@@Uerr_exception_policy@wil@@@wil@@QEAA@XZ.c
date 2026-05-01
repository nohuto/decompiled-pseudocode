/*
 * XREFs of ??1?$com_ptr_t@VCreationThreadDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1801F641C
 * Callers:
 *     _WindowGroupManager::WindowGroupManager_::_1_::dtor$5 @ 0x18027C1A0 (_WindowGroupManager--WindowGroupManager_--_1_--dtor$5.c)
 *     _XamlBaseViewController::XamlBaseViewController_::_1_::dtor$5 @ 0x18030BC57 (_XamlBaseViewController--XamlBaseViewController_--_1_--dtor$5.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801D0E20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBa.c)
 */

__int64 __fastcall wil::com_ptr_t<CreationThreadDispatcher,wil::err_exception_policy>::~com_ptr_t<CreationThreadDispatcher,wil::err_exception_policy>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,Microsoft::WRL::FtmBase>::Release(
             v2,
             a2);
  return result;
}
