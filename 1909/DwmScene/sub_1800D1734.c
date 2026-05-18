/*
 * XREFs of sub_1800D1734 @ 0x1800D1734
 * Callers:
 *     sub_1800426D8 @ 0x1800426D8 (sub_1800426D8.c)
 *     sub_1800B6600 @ 0x1800B6600 (sub_1800B6600.c)
 *     sub_1800B6F80 @ 0x1800B6F80 (sub_1800B6F80.c)
 * Callees:
 *     sub_1800D20C4 @ 0x1800D20C4 (sub_1800D20C4.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_1800D1734(_QWORD *a1))()
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::DeviceVertexLayout::`vftable';
  sub_1800D20C4(a1 + 14);
  v2 = (volatile signed __int32 *)a1[10];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_18006403C((__int64)a1);
}
