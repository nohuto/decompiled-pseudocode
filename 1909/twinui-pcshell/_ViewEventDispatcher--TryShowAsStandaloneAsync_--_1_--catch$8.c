/*
 * XREFs of _ViewEventDispatcher::TryShowAsStandaloneAsync_::_1_::catch$8 @ 0x180290667
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180185708 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewEventDispatcher::TryShowAsStandaloneAsync_::_1_::catch_8(wil *a1, __int64 a2)
{
  __int64 v2; // rdi
  void (__fastcall *v3)(__int64, __int64); // rbx
  __int64 v4; // rdx

  v2 = *(_QWORD *)(a2 + 208);
  v3 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 24LL);
  v4 = (unsigned int)wil::ResultFromCaughtException(a1);
  v3(v2, v4);
  return &loc_180290605;
}
