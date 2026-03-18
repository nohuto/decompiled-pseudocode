/*
 * XREFs of ?_ivOnChildNotification@CBaseInput@@CAJPEAX0@Z @ 0x1C018BE90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseInput::_ivOnChildNotification(void *a1, void *a2)
{
  return (*(__int64 (__fastcall **)(void *, void *))(*(_QWORD *)a1 + 136LL))(a1, a2);
}
