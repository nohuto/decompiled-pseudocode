/*
 * XREFs of CmSiCloseSection @ 0x140178190
 * Callers:
 *     HvpViewMapCleanup @ 0x1406E44EC (HvpViewMapCleanup.c)
 *     BiDeleteKey @ 0x14072A888 (BiDeleteKey.c)
 *     BiDeleteRegistryValue @ 0x14073D820 (BiDeleteRegistryValue.c)
 *     BiCreateKey @ 0x14073F25C (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x14073F438 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x14073FA30 (BiOpenKey.c)
 *     BiCloseKey @ 0x14073FBB4 (BiCloseKey.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 */

NTSTATUS __fastcall CmSiCloseSection(void *a1)
{
  return ZwClose(a1);
}
