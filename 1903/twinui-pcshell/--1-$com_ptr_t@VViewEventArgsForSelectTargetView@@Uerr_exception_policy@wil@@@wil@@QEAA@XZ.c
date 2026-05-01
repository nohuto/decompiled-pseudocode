/*
 * XREFs of ??1?$com_ptr_t@VViewEventArgsForSelectTargetView@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18027A080
 * Callers:
 *     _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$15 @ 0x1800C49C0 (_WindowEventDispatcher--AppViewActivationRequested_--_1_--dtor$15.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800349D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1800349D0.c)
 */

__int64 __fastcall wil::com_ptr_t<ViewEventArgsForSelectTargetView,wil::err_exception_policy>::~com_ptr_t<ViewEventArgsForSelectTargetView,wil::err_exception_policy>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::Release(v1);
  return result;
}
