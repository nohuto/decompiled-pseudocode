/*
 * XREFs of ExpGetKernelDataProtection @ 0x1406A3670
 * Callers:
 *     ExpTimeRefreshWork @ 0x14059D9D0 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x1406A2590 (ExUpdateLicenseDataInternal.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1406A3340 (ExpGenuinePolicyCacheProvider.c)
 *     ExGetLicenseTamperState @ 0x14090B980 (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x14090BBC0 (ExSetLicenseTamperState.c)
 *     sub_14090C670 @ 0x14090C670 (sub_14090C670.c)
 *     sub_14090C800 @ 0x14090C800 (sub_14090C800.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     sub_1406A3720 @ 0x1406A3720 (sub_1406A3720.c)
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
    v4 = sub_1406A3720(&v5);
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
