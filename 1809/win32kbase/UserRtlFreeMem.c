/*
 * XREFs of UserRtlFreeMem @ 0x1C00A25C0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

void __fastcall UserRtlFreeMem(__int64 a1)
{
  Win32FreePool(a1);
}
