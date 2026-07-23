/*
 * XREFs of PsInitializeVsmEnclave @ 0x14088F43C
 * Callers:
 *     MiInitializeEnclave @ 0x14085B4A0 (MiInitializeEnclave.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     VslInitializeEnclave @ 0x140819B7C (VslInitializeEnclave.c)
 */

__int64 __fastcall PsInitializeVsmEnclave(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r15
  volatile signed __int64 *v5; // rbp
  int v6; // ecx
  NTSTATUS v7; // edi
  _QWORD *PoolWithQuotaTag; // r14
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // r8

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  --CurrentThread->KernelApcDisable;
  v5 = (volatile signed __int64 *)(a1 + 48);
  ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
  v6 = *(_DWORD *)(a1 + 44);
  if ( v6 )
  {
    if ( v6 == 1 )
      v7 = -1073740528;
    else
      v7 = -1073740526;
  }
  else
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 40 * v3, 0x74457350u);
    if ( PoolWithQuotaTag )
    {
      v7 = VslInitializeEnclave(*(_QWORD *)(a1 + 24), v3, a1 + 80, (_DWORD *)(a1 + 40));
      if ( v7 >= 0 )
      {
        *(_DWORD *)(a1 + 72) = v3;
        *(_QWORD *)(a1 + 64) = a1 + 56;
        *(_QWORD *)(a1 + 56) = a1 + 56;
        *PoolWithQuotaTag = 0LL;
        if ( (unsigned int)v3 > 1 )
        {
          v9 = PoolWithQuotaTag + 5;
          v10 = PoolWithQuotaTag;
          v11 = (unsigned int)(v3 - 1);
          do
          {
            *v9 = v10;
            v10 += 5;
            v9 += 5;
            --v11;
          }
          while ( v11 );
        }
        *(_QWORD *)(a1 + 120) = PoolWithQuotaTag;
        *(_DWORD *)(a1 + 44) = 1;
        v7 = 0;
        *(_QWORD *)(a1 + 128) = &PoolWithQuotaTag[5 * (unsigned int)(v3 - 1)];
      }
      else
      {
        ExFreePoolWithTag(PoolWithQuotaTag, 0);
      }
    }
    else
    {
      v7 = -1073741670;
    }
  }
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v7;
}
