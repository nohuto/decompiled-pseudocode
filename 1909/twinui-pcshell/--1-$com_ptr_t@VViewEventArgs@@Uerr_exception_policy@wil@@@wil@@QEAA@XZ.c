/*
 * XREFs of ??1?$com_ptr_t@VViewEventArgs@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180299554
 * Callers:
 *     _WindowEventDispatcher::RaiseViewEventWithPropertySet_::_1_::dtor$2 @ 0x1800E5692 (_WindowEventDispatcher--RaiseViewEventWithPropertySet_--_1_--dtor$2.c)
 *     _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$79 @ 0x1800E61E0 (_WindowEventDispatcher--AppViewActivationRequested_--_1_--dtor$79.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019F70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase.c)
 */

__int64 __fastcall wil::com_ptr_t<ViewEventArgs,wil::err_exception_policy>::~com_ptr_t<ViewEventArgs,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase>::Release(v1);
  return result;
}
