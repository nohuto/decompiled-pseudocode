/*
 * XREFs of SeValidateImageHeader @ 0x1406548D4
 * Callers:
 *     MiValidateSectionCreate @ 0x140653FD0 (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepScheduleImageVerificationCallbacks @ 0x1406CEC68 (SepScheduleImageVerificationCallbacks.c)
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
  if ( qword_14040EDE0 )
  {
    if ( (a9 & 1) != 0 )
      _InterlockedCompareExchange(&dword_1404DAF00, 0, 0);
    return (unsigned int)((__int64 (__fastcall *)(__int64, __int64))qword_14040EDE0)(a1, a2);
  }
  else
  {
    return (unsigned int)-1073740760;
  }
}
