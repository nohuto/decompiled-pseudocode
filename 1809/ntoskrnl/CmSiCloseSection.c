/*
 * XREFs of CmSiCloseSection @ 0x14016E5A8
 * Callers:
 *     HvpViewMapCleanup @ 0x1406C3E18 (HvpViewMapCleanup.c)
 *     BiDeleteKey @ 0x1406E1E8C (BiDeleteKey.c)
 *     BiDeleteRegistryValue @ 0x140711814 (BiDeleteRegistryValue.c)
 *     BiCreateKey @ 0x140713004 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x1407131C4 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x1407137A0 (BiOpenKey.c)
 *     BiCloseKey @ 0x140713910 (BiCloseKey.c)
 * Callees:
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 */

NTSTATUS __fastcall CmSiCloseSection(void *a1)
{
  return ZwClose(a1);
}
