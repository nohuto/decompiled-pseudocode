/*
 * XREFs of ?GetComponentsForHost@ViewEventDispatcher@@UEAAJUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@PEAPEAU?$IVectorView@I@Collections@Foundation@6@@Z @ 0x1802148C0
 * Callers:
 *     ?_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@@Z @ 0x18021EAA4 (-_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXPEAUIViewWrapperInternal@@@Z@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::GetComponentsForHost(__int64 a1, __int64 *a2)
{
  __int64 v2; // xmm0_8
  __int64 v3; // rcx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]

  v2 = *a2;
  v3 = *(_QWORD *)(a1 + 328);
  v6 = *((_DWORD *)a2 + 2);
  v5 = v2;
  return (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 64LL))(v3, &v5);
}
