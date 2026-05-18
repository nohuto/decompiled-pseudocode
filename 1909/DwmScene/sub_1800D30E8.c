/*
 * XREFs of sub_1800D30E8 @ 0x1800D30E8
 * Callers:
 *     sub_180038E68 @ 0x180038E68 (sub_180038E68.c)
 *     sub_180038F20 @ 0x180038F20 (sub_180038F20.c)
 *     sub_1800F9CF4 @ 0x1800F9CF4 (sub_1800F9CF4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_1800D30E8(_QWORD *a1))()
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx

  *a1 = &Spectre::Engine::DeviceConstantBuffer::`vftable';
  v2 = (volatile signed __int32 *)a1[14];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (volatile signed __int32 *)a1[10];
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  return sub_18006403C((__int64)a1);
}
