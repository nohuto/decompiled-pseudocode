/*
 * XREFs of ?Destroy@ViewGroup@@UEAAJXZ @ 0x180206BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18011EC8C (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 */

__int64 __fastcall ViewGroup::Destroy(ViewGroup *this)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
         (RTL_SRWLOCK *)this + 17,
         *((struct IUnknown **)this + 20));
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      536LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
      (const char *)(unsigned int)v2);
  AcquireSRWLockShared((PSRWLOCK)this + 21);
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 27);
  try
  {
    v3 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    v4 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 11);
    if ( this != (ViewGroup *)-168LL )
      ReleaseSRWLockShared((PSRWLOCK)this + 21);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x222,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
                           v5);
  }
  return result;
}
