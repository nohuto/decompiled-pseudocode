/*
 * XREFs of NtGdiDdDDINetDispStopMiracastDisplayDevice @ 0x1C00FE0A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?IsAllowedToCallMiracast@@YA_NXZ @ 0x1C00FD24C (-IsAllowedToCallMiracast@@YA_NXZ.c)
 */

__int64 __fastcall NtGdiDdDDINetDispStopMiracastDisplayDevice(__int64 a1, __int64 a2)
{
  if ( IsAllowedToCallMiracast() )
    return ((__int64 (__fastcall *)(__int64, __int64))qword_1C01CDB20)(a1, a2);
  else
    return 2147483656LL;
}
