/*
 * XREFs of sub_1400FA510 @ 0x1400FA510
 * Callers:
 *     sub_1406AB150 @ 0x1406AB150 (sub_1406AB150.c)
 *     ExpConsumeAddonPolicySetCacheProvider @ 0x14090C620 (ExpConsumeAddonPolicySetCacheProvider.c)
 *     ExpGetSubscriptionPfn @ 0x14090C6D4 (ExpGetSubscriptionPfn.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     sub_1406AB8A0 @ 0x1406AB8A0 (sub_1406AB8A0.c)
 */

__int64 __fastcall sub_1400FA510(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  _DWORD *v9; // rax
  struct _KTHREAD *v10; // rax
  $6EAC78A6FCFADE0A5FA44F358736B38F *v12; // rcx
  unsigned int v14; // [rsp+30h] [rbp-38h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-28h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
  if ( !(_DWORD)NumOfElements && byte_1409AE5C3 == 1 )
  {
    v14 = -1073741772;
    goto LABEL_11;
  }
  v9 = off_1409AD038;
  if ( off_1409AD038 || (v9 = Data) != 0LL )
  {
    if ( *v9 == 24 )
    {
      v14 = -1073741772;
      goto LABEL_11;
    }
    if ( *v9 >= 0x18u )
    {
      v14 = sub_1406AB8A0(a1, a2, a3, a4, a5);
      goto LABEL_11;
    }
  }
  v14 = -1073741762;
LABEL_11:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1409AE5D8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1409AE5D8);
  KeAbPostRelease((ULONG_PTR)&qword_1409AE5D8);
  v10 = KeGetCurrentThread();
  if ( v10->KernelApcDisable++ == -1 )
  {
    v12 = &v10->152;
    if ( ($6EAC78A6FCFADE0A5FA44F358736B38F *)v12->ApcState.ApcListHead[0].Flink != v12 && !v10->SpecialApcDisable )
      KiCheckForKernelApcDelivery((__int64)v12);
  }
  return v14;
}
