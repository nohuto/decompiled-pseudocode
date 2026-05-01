/*
 * XREFs of ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z @ 0x180220080
 * Callers:
 *     _lambda_2042965200248d0a427160a096d62bcd_::operator() @ 0x180212210 (_lambda_2042965200248d0a427160a096d62bcd_--operator().c)
 *     ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@II@Z @ 0x18022015C (-_PropagateNewRegistration@ViewEventDispatcher@@AEAAXW4CRSIdType@ViewEventHandlers@OneCore@Inter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x18021FA4C (-_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 */

void __fastcall ViewEventDispatcher::_PropagateNewRegistration(
        ViewEventDispatcher *this,
        struct IViewWrapperInternal *a2,
        struct IViewWrapperInternal *a3)
{
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rax
  char v12; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v6 = *(_QWORD *)a3;
    v7 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)a2 + 672LL))(a2);
    (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD))(v6 + 848))(a3, v7);
    v8 = *(_QWORD *)a3;
    v9 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)a2 + 896LL))(a2);
    (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD))(v8 + 872))(a3, v9);
    v10 = *(_QWORD *)a3;
    v11 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *, char *))(*(_QWORD *)a2 + 888LL))(a2, &v12);
    (*(void (__fastcall **)(struct IViewWrapperInternal *, __int64))(v10 + 880))(a3, v11);
  }
  ViewEventDispatcher::_HostChanged(this, a3, (__int64)a3);
}
