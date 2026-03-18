/*
 * XREFs of NtGdiDdDDIPresent @ 0x1C0063440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDdDDIPresent(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, _QWORD))qword_1C01A1910)(a1, (unsigned int)gbGDIOn);
}
