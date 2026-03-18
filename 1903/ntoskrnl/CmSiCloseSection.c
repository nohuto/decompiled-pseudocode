/*
 * XREFs of CmSiCloseSection @ 0x140177AA0
 * Callers:
 *     HvpViewMapCleanup @ 0x1406E3090 (HvpViewMapCleanup.c)
 *     BiDeleteKey @ 0x140729518 (BiDeleteKey.c)
 *     BiDeleteRegistryValue @ 0x14073B920 (BiDeleteRegistryValue.c)
 *     BiCreateKey @ 0x14073D35C (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x14073D538 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x14073DB30 (BiOpenKey.c)
 *     BiCloseKey @ 0x14073DCB4 (BiCloseKey.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 */

NTSTATUS __fastcall CmSiCloseSection(void *a1)
{
  return ZwClose(a1);
}
