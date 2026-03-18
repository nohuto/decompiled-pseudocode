/*
 * XREFs of NtGdiDdDDIDDisplayEnum @ 0x1C00FDBD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDdDDIDDisplayEnum(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return ((__int64 (__fastcall *)(__int64, __int64))qword_1C01CDE20)(a1, a2);
}
