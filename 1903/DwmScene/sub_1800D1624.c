/*
 * XREFs of sub_1800D1624 @ 0x1800D1624
 * Callers:
 *     sub_1800425C8 @ 0x1800425C8 (sub_1800425C8.c)
 *     sub_1800B64F0 @ 0x1800B64F0 (sub_1800B64F0.c)
 *     sub_1800B6E70 @ 0x1800B6E70 (sub_1800B6E70.c)
 * Callees:
 *     sub_1800D1FB4 @ 0x1800D1FB4 (sub_1800D1FB4.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_1800D1624(_QWORD *a1))()
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::DeviceVertexLayout::`vftable';
  sub_1800D1FB4(a1 + 14);
  v2 = (volatile signed __int32 *)a1[10];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_180063F2C((__int64)a1);
}
