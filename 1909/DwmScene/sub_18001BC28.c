/*
 * XREFs of sub_18001BC28 @ 0x18001BC28
 * Callers:
 *     sub_180018130 @ 0x180018130 (sub_180018130.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_18001BC28(__int64 a1))(__int64, _DWORD *, _QWORD *)
{
  __int64 (__fastcall **result)(__int64, _DWORD *, _QWORD *); // rax
  __int64 v3; // rcx

  result = &off_1801480B0;
  *(_QWORD *)a1 = &off_1801480B0;
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    result = (__int64 (__fastcall **)(__int64, _DWORD *, _QWORD *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
