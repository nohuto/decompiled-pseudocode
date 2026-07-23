/*
 * XREFs of CmSiGetSectionLength @ 0x14000F130
 * Callers:
 *     HvpViewMapStart @ 0x1405A61A0 (HvpViewMapStart.c)
 * Callees:
 *     ZwQuerySection @ 0x1401B8D10 (ZwQuerySection.c)
 */

NTSTATUS __fastcall CmSiGetSectionLength(void *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  _BYTE SectionInformation[16]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  result = ZwQuerySection(a1, SectionBasicInformation, SectionInformation, 0x18uLL, 0LL);
  if ( result >= 0 )
  {
    *a2 = v5;
    return 0;
  }
  return result;
}
