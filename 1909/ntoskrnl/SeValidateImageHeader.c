/*
 * XREFs of SeValidateImageHeader @ 0x14064226C
 * Callers:
 *     MiValidateSectionCreate @ 0x1406423A4 (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SepScheduleImageVerificationCallbacks @ 0x14071ED78 (SepScheduleImageVerificationCallbacks.c)
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
  if ( qword_140436420 )
  {
    if ( (a9 & 1) != 0 )
      _InterlockedCompareExchange(&dword_140503FE0, 0, 0);
    return (unsigned int)((__int64 (__fastcall *)(__int64, __int64))qword_140436420)(a1, a2);
  }
  else
  {
    return (unsigned int)-1073740760;
  }
}
