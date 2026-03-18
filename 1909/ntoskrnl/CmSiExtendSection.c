/*
 * XREFs of CmSiExtendSection @ 0x1400EC9A8
 * Callers:
 *     HvpViewMapExtendStorage @ 0x14068C3D4 (HvpViewMapExtendStorage.c)
 * Callees:
 *     ZwExtendSection @ 0x1401C27F0 (ZwExtendSection.c)
 */

NTSTATUS __fastcall CmSiExtendSection(void *a1, LARGE_INTEGER a2)
{
  LARGE_INTEGER NewMaximumSize; // [rsp+38h] [rbp+10h] BYREF

  NewMaximumSize = a2;
  return ZwExtendSection(a1, &NewMaximumSize);
}
