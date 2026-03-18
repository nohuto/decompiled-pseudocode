/*
 * XREFs of NtGdiDdDDIEnumAdapters2 @ 0x1C006AA00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDdDDIEnumAdapters2(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  LOBYTE(a2) = 1;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))qword_1C01A1800)(a1, a2, a3, 6LL);
}
