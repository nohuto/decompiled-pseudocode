/*
 * XREFs of sub_18007E128 @ 0x18007E128
 * Callers:
 *     sub_18006FFF0 @ 0x18006FFF0 (sub_18006FFF0.c)
 *     sub_18012D566 @ 0x18012D566 (sub_18012D566.c)
 *     sub_18012D662 @ 0x18012D662 (sub_18012D662.c)
 * Callees:
 *     sub_1800113D8 @ 0x1800113D8 (sub_1800113D8.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18007E128(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rcx

  sub_1800113D8((__int64 *)(a2 + 48));
  v3 = *(volatile signed __int32 **)(a2 + 40);
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  return j_j__o_free(a2);
}
