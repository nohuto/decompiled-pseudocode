/*
 * XREFs of ExpGetKernelDataProtection @ 0x1405A1B24
 * Callers:
 *     ExpTimeRefreshWork @ 0x14056E0E0 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x1405A0AD0 (ExUpdateLicenseDataInternal.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1405A1820 (ExpGenuinePolicyCacheProvider.c)
 *     ExGetLicenseTamperState @ 0x1408CE940 (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x1408CEB50 (ExSetLicenseTamperState.c)
 *     sub_1408CF4A0 @ 0x1408CF4A0 (sub_1408CF4A0.c)
 *     sub_1408CF610 @ 0x1408CF610 (sub_1408CF610.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400914B0 (ExfReleasePushLockShared.c)
 *     sub_1405A1BD4 @ 0x1405A1BD4 (sub_1405A1BD4.c)
 */

__int64 __fastcall ExpGetKernelDataProtection(_OWORD *a1)
{
  _OWORD *v2; // rax
  int v4; // [rsp+20h] [rbp-18h]
  _OWORD *v5; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_14096E5A0, 0LL);
  if ( qword_14096E620 )
  {
    v5 = *(_OWORD **)qword_14096E620;
    v4 = sub_1405A1BD4(&v5);
    if ( v4 >= 0 )
    {
      v2 = v5;
      *a1 = *v5;
      a1[1] = v2[1];
      a1[2] = v2[2];
    }
  }
  else
  {
    v4 = -1073741275;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14096E5A0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14096E5A0);
  KeAbPostRelease((ULONG_PTR)&qword_14096E5A0);
  return (unsigned int)v4;
}
