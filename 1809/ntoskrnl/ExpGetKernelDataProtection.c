/*
 * XREFs of ExpGetKernelDataProtection @ 0x1405A2B24
 * Callers:
 *     ExpTimeRefreshWork @ 0x14056F0E0 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x1405A1AD0 (ExUpdateLicenseDataInternal.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1405A2820 (ExpGenuinePolicyCacheProvider.c)
 *     ExGetLicenseTamperState @ 0x1408CFC00 (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x1408CFE10 (ExSetLicenseTamperState.c)
 *     sub_1408D0760 @ 0x1408D0760 (sub_1408D0760.c)
 *     sub_1408D08D0 @ 0x1408D08D0 (sub_1408D08D0.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     sub_1405A2BD4 @ 0x1405A2BD4 (sub_1405A2BD4.c)
 */

__int64 __fastcall ExpGetKernelDataProtection(_OWORD *a1)
{
  _OWORD *v2; // rax
  int v4; // [rsp+20h] [rbp-18h]
  _OWORD *v5; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_14096F5A0, 0LL);
  if ( qword_14096F620 )
  {
    v5 = *(_OWORD **)qword_14096F620;
    v4 = sub_1405A2BD4(&v5);
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
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14096F5A0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14096F5A0);
  KeAbPostRelease((ULONG_PTR)&qword_14096F5A0);
  return (unsigned int)v4;
}
