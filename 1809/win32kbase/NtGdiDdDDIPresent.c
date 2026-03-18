/*
 * XREFs of NtGdiDdDDIPresent @ 0x1C0076750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDdDDIPresent(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, _QWORD))qword_1C01CD7B0)(a1, (unsigned int)gbGDIOn);
}
