/*
 * XREFs of StorPortGetBusData @ 0x1C0023130
 * Callers:
 *     StorPortGetBusDataVrfy @ 0x1C0078210 (StorPortGetBusDataVrfy.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024A40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StorPortGetBusData(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int))(**(_QWORD **)(a1 - 16) + 656LL))(
           *(_QWORD *)(**(_QWORD **)(a1 - 16) + 608LL),
           a2,
           a5,
           0LL,
           a6);
}
