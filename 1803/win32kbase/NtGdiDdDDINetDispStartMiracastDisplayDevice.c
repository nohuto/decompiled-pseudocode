/*
 * XREFs of NtGdiDdDDINetDispStartMiracastDisplayDevice @ 0x1C00CA4B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?IsAllowedToCallMiracast@@YA_NXZ @ 0x1C00C9430 (-IsAllowedToCallMiracast@@YA_NXZ.c)
 */

__int64 __fastcall NtGdiDdDDINetDispStartMiracastDisplayDevice(__int64 a1)
{
  if ( IsAllowedToCallMiracast() )
    return ((__int64 (__fastcall *)(__int64))qword_1C01A1C78)(a1);
  else
    return 2147483656LL;
}
