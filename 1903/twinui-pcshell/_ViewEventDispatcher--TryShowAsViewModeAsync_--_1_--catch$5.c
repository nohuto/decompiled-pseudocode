/*
 * XREFs of _ViewEventDispatcher::TryShowAsViewModeAsync_::_1_::catch$5 @ 0x180271460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180166380 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewEventDispatcher::TryShowAsViewModeAsync_::_1_::catch_5(wil *a1, __int64 a2)
{
  __int64 v2; // rdi
  void (__fastcall *v3)(__int64, __int64); // rbx
  __int64 v4; // rdx

  v2 = *(_QWORD *)(a2 + 232);
  v3 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 24LL);
  v4 = (unsigned int)wil::ResultFromCaughtException(a1);
  v3(v2, v4);
  return &loc_18027140F;
}
