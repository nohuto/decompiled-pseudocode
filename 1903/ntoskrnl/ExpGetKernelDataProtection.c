/*
 * XREFs of ExpGetKernelDataProtection @ 0x1406ACCC0
 * Callers:
 *     ExpTimeRefreshWork @ 0x14059D9F0 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x1406ABBE0 (ExUpdateLicenseDataInternal.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1406AC990 (ExpGenuinePolicyCacheProvider.c)
 *     ExGetLicenseTamperState @ 0x14090BF20 (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x14090C160 (ExSetLicenseTamperState.c)
 *     sub_14090CC10 @ 0x14090CC10 (sub_14090CC10.c)
 *     sub_14090CDA0 @ 0x14090CDA0 (sub_14090CDA0.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     sub_1406ACD70 @ 0x1406ACD70 (sub_1406ACD70.c)
 */

__int64 __fastcall ExpGetKernelDataProtection(_OWORD *a1)
{
  _OWORD *v2; // rax
  int v4; // [rsp+20h] [rbp-18h]
  _OWORD *v5; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1409AE688, 0LL);
  if ( qword_1409AE6E8 )
  {
    v5 = *(_OWORD **)qword_1409AE6E8;
    v4 = sub_1406ACD70(&v5);
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
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1409AE688, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1409AE688);
  KeAbPostRelease((ULONG_PTR)&qword_1409AE688);
  return (unsigned int)v4;
}
