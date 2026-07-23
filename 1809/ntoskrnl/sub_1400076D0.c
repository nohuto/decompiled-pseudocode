/*
 * XREFs of sub_1400076D0 @ 0x1400076D0
 * Callers:
 *     ExQueryLicenseValueInternal @ 0x1405A1260 (ExQueryLicenseValueInternal.c)
 *     ExpConsumeAddonPolicySetCacheProvider @ 0x1408D0290 (ExpConsumeAddonPolicySetCacheProvider.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     sub_1405A17B0 @ 0x1405A17B0 (sub_1405A17B0.c)
 */

__int64 __fastcall sub_1400076D0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v10; // rax
  unsigned int v11; // eax
  unsigned int v13; // [rsp+30h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_14096F4E0, 0LL);
  if ( !(_DWORD)NumOfElements && byte_14096F4DB == 1 )
  {
    v13 = -1073741772;
    goto LABEL_11;
  }
  v10 = (unsigned int *)off_14096E030;
  if ( off_14096E030 || (v10 = (unsigned int *)Data) != 0LL )
  {
    v11 = *v10;
    if ( v11 == 24 )
    {
      v13 = -1073741772;
      goto LABEL_11;
    }
    if ( v11 >= 0x18 )
    {
      v13 = sub_1405A17B0(a1, a2, a3, a4, a5);
      goto LABEL_11;
    }
  }
  v13 = -1073741762;
LABEL_11:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14096F4E0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&qword_14096F4E0);
  KeAbPostRelease((ULONG_PTR)&qword_14096F4E0);
  KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
  return v13;
}
