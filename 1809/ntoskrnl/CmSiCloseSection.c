/*
 * XREFs of CmSiCloseSection @ 0x14016E5C8
 * Callers:
 *     HvpViewMapCleanup @ 0x1406C3DF8 (HvpViewMapCleanup.c)
 *     BiDeleteKey @ 0x1406E1E6C (BiDeleteKey.c)
 *     BiDeleteRegistryValue @ 0x1407117F4 (BiDeleteRegistryValue.c)
 *     BiCreateKey @ 0x140712FE4 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x1407131A4 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140713780 (BiOpenKey.c)
 *     BiCloseKey @ 0x1407138F0 (BiCloseKey.c)
 * Callees:
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 */

NTSTATUS __fastcall CmSiCloseSection(void *a1)
{
  return ZwClose(a1);
}
