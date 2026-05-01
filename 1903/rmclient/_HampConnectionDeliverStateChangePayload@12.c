/*
 * XREFs of _HampConnectionDeliverStateChangePayload@12 @ 0x10007230
 * Callers:
 *     <none>
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall HampConnectionDeliverStateChangePayload(int a1, int a2, int a3)
{
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(a1 + 56))(*(_DWORD *)(a1 + 56), a2, *(_DWORD *)(a1 + 60));
}
