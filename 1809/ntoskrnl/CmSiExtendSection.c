/*
 * XREFs of CmSiExtendSection @ 0x140139970
 * Callers:
 *     HvpViewMapExtendStorage @ 0x1406CC5A0 (HvpViewMapExtendStorage.c)
 * Callees:
 *     ZwExtendSection @ 0x1401B9D10 (ZwExtendSection.c)
 */

NTSTATUS __fastcall CmSiExtendSection(void *a1, LARGE_INTEGER a2)
{
  LARGE_INTEGER NewMaximumSize; // [rsp+38h] [rbp+10h] BYREF

  NewMaximumSize = a2;
  return ZwExtendSection(a1, &NewMaximumSize);
}
