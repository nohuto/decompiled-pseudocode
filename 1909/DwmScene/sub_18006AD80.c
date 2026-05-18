/*
 * XREFs of sub_18006AD80 @ 0x18006AD80
 * Callers:
 *     sub_18006CDB0 @ 0x18006CDB0 (sub_18006CDB0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006AD80(__int64 a1, _QWORD *a2)
{
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 224LL))(a1);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
}
