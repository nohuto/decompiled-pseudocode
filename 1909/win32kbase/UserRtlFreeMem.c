/*
 * XREFs of UserRtlFreeMem @ 0x1C00B06A0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

void __fastcall UserRtlFreeMem(__int64 a1)
{
  Win32FreePool(a1);
}
