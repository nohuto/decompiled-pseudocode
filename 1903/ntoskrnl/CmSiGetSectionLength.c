/*
 * XREFs of CmSiGetSectionLength @ 0x140098EC0
 * Callers:
 *     HvpViewMapStart @ 0x14066008C (HvpViewMapStart.c)
 * Callees:
 *     ZwQuerySection @ 0x1401C0AF0 (ZwQuerySection.c)
 */

NTSTATUS __fastcall CmSiGetSectionLength(void *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  _QWORD v4[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  v4[0] = 0LL;
  v4[1] = 0LL;
  v5 = 0LL;
  result = ZwQuerySection(a1, SectionBasicInformation, v4, 0x18uLL, 0LL);
  if ( result >= 0 )
  {
    *a2 = v5;
    return 0;
  }
  return result;
}
