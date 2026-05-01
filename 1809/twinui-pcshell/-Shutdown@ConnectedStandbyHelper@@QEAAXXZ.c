/*
 * XREFs of ?Shutdown@ConnectedStandbyHelper@@QEAAXXZ @ 0x18023BC40
 * Callers:
 *     ?UnsubscribeFromServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18021BD00 (-UnsubscribeFromServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18022CC50 (-UnsubscribeFromServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     PdcNotificationClientUnregister @ 0x18039DFE8 (PdcNotificationClientUnregister.c)
 */

void __fastcall ConnectedStandbyHelper::Shutdown(ConnectedStandbyHelper *this)
{
  void *v2; // rcx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    v3 = PdcNotificationClientUnregister(v2);
    if ( v3 >= 0 )
      *((_QWORD *)this + 4) = 0LL;
    else
      wil::details::in1diag3::_Log_NtStatus(
        retaddr,
        (void *)0x27,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\connectedstandbyhelper.cpp",
        (const char *)(unsigned int)v3);
  }
}
