/*
 * XREFs of SeValidateImageHeader @ 0x140653714
 * Callers:
 *     MiValidateSectionCreate @ 0x140652E10 (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     SepScheduleImageVerificationCallbacks @ 0x1406CD9C8 (SepScheduleImageVerificationCallbacks.c)
 */

__int64 __fastcall SeValidateImageHeader(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  if ( qword_14040DD80 )
  {
    if ( (a9 & 1) != 0 )
      _InterlockedCompareExchange(&dword_1404D9E40, 0, 0);
    return (unsigned int)((__int64 (__fastcall *)(__int64, __int64))qword_14040DD80)(a1, a2);
  }
  else
  {
    return (unsigned int)-1073740760;
  }
}
