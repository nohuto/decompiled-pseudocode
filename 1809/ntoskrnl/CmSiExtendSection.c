/*
 * XREFs of CmSiExtendSection @ 0x140139950
 * Callers:
 *     HvpViewMapExtendStorage @ 0x1406CC5C0 (HvpViewMapExtendStorage.c)
 * Callees:
 *     ZwExtendSection @ 0x1401B9CF0 (ZwExtendSection.c)
 */

NTSTATUS __fastcall CmSiExtendSection(void *a1, LARGE_INTEGER a2)
{
  LARGE_INTEGER NewMaximumSize; // [rsp+38h] [rbp+10h] BYREF

  NewMaximumSize = a2;
  return ZwExtendSection(a1, &NewMaximumSize);
}
