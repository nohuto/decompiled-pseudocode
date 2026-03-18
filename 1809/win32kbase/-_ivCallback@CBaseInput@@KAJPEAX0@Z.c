/*
 * XREFs of ?_ivCallback@CBaseInput@@KAJPEAX0@Z @ 0x1C0155E90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseInput::_ivCallback(void *a1, void *a2)
{
  return (*(__int64 (__fastcall **)(void *, void *))(*(_QWORD *)a1 + 144LL))(a1, a2);
}
