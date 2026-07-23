/*
 * XREFs of CmSiCloseSection @ 0x14016E6C8
 * Callers:
 *     HvpViewMapCleanup @ 0x1406C5098 (HvpViewMapCleanup.c)
 *     BiDeleteKey @ 0x1406E310C (BiDeleteKey.c)
 *     BiDeleteRegistryValue @ 0x140712A94 (BiDeleteRegistryValue.c)
 *     BiCreateKey @ 0x140714284 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x140714444 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140714A20 (BiOpenKey.c)
 *     BiCloseKey @ 0x140714B90 (BiCloseKey.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 */

NTSTATUS __fastcall CmSiCloseSection(void *a1)
{
  return ZwClose(a1);
}
