/*
 * XREFs of sub_1400F2B80 @ 0x1400F2B80
 * Callers:
 *     sub_1406A1AF0 @ 0x1406A1AF0 (sub_1406A1AF0.c)
 *     ExpConsumeAddonPolicySetCacheProvider @ 0x14090C080 (ExpConsumeAddonPolicySetCacheProvider.c)
 *     ExpGetSubscriptionPfn @ 0x14090C134 (ExpGetSubscriptionPfn.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     sub_1406A2250 @ 0x1406A2250 (sub_1406A2250.c)
 */

__int64 __fastcall sub_1400F2B80(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  _DWORD *v9; // rax
  struct _KTHREAD *v10; // rax
  $C6908ADE9723D0A04AF8EE82D8D15C40 *v12; // rcx
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
      v14 = sub_1406A2250(a1, a2, a3, a4, a5);
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
    if ( ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v12->ApcState.ApcListHead[0].Flink != v12 && !v10->SpecialApcDisable )
      KiCheckForKernelApcDelivery((__int64)v12);
  }
  return v14;
}
