/*
 * XREFs of sub_1800CDC60 @ 0x1800CDC60
 * Callers:
 *     sub_1800CDC20 @ 0x1800CDC20 (sub_1800CDC20.c)
 *     sub_1800CDC30 @ 0x1800CDC30 (sub_1800CDC30.c)
 *     sub_1800CDC40 @ 0x1800CDC40 (sub_1800CDC40.c)
 *     sub_1800CDC50 @ 0x1800CDC50 (sub_1800CDC50.c)
 *     sub_1800CE00C @ 0x1800CE00C (sub_1800CE00C.c)
 *     sub_1800CE020 @ 0x1800CE020 (sub_1800CE020.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_1800CDC60(_QWORD *a1))()
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::DeviceShader::`vftable';
  v2 = (volatile signed __int32 *)a1[10];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_18006403C((__int64)a1);
}
