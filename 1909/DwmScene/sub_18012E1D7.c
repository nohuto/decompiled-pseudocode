/*
 * XREFs of sub_18012E1D7 @ 0x18012E1D7
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_113 @ 0x18000F724 (unknown_libname_113.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall sub_18012E1D7(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rax

  v3 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 128) + 8LL))(*(_QWORD *)(a2 + 128));
  unknown_libname_113((__int64 *)(a2 + 160), v3);
  return &loc_18007C021;
}
