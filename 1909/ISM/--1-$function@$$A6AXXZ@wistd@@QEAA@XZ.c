/*
 * XREFs of ??1?$function@$$A6AXXZ@wistd@@QEAA@XZ @ 0x18001F4D0
 * Callers:
 *     ?RuntimeClassInitialize@ViewHierarchy@@UEAAJW4TestMode@1@@Z @ 0x18001F2D0 (-RuntimeClassInitialize@ViewHierarchy@@UEAAJW4TestMode@1@@Z.c)
 *     ??1?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ @ 0x180058D94 (--1-$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800975CC (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x1800977E8 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 *     _MPCHeadUpdateListener::Initialize_::_1_::dtor$0 @ 0x1800978E8 (_MPCHeadUpdateListener--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::function<void (void)>::~function<void (void)>(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return result;
}
