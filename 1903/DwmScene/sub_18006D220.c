/*
 * XREFs of sub_18006D220 @ 0x18006D220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall sub_18006D220(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // rax

  v2 = *a1;
  *a2 = 34;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v2 + 96))(a1, 12LL) )
    *a2 |= 0x10u;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*a1 + 96))(a1, 13LL) )
    *a2 |= 1u;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*a1 + 96))(a1, 14LL) )
    *a2 |= 4u;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*a1 + 96))(a1, 15LL) )
    *a2 |= 8u;
  return a2;
}
