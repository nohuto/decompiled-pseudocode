/*
 * XREFs of ?OnMessage@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@UEAAJI_K_J@Z @ 0x180080840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::OnMessage(
        Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler *this,
        int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  v6 = a4;
  v8 = a3;
  v7 = a2;
  v4 = *((_QWORD *)this + 17);
  if ( !v4 )
    __fastfail(7u);
  return (*(__int64 (__fastcall **)(__int64, int *, __int64 *, __int64 *))(*(_QWORD *)v4 + 16LL))(v4, &v7, &v8, &v6);
}
