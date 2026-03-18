/*
 * XREFs of CmSiExtendSection @ 0x14013CE70
 * Callers:
 *     HvpViewMapExtendStorage @ 0x140662C30 (HvpViewMapExtendStorage.c)
 * Callees:
 *     ZwExtendSection @ 0x1401C1C70 (ZwExtendSection.c)
 */

NTSTATUS __fastcall CmSiExtendSection(void *a1, LARGE_INTEGER a2)
{
  LARGE_INTEGER NewMaximumSize; // [rsp+38h] [rbp+10h] BYREF

  NewMaximumSize = a2;
  return ZwExtendSection(a1, &NewMaximumSize);
}
