/*
 * XREFs of VmpPauseResumeNotify @ 0x1408B19D8
 * Callers:
 *     VmPauseResumeNotify @ 0x1408B1660 (VmPauseResumeNotify.c)
 * Callees:
 *     SmStoreExistsForProcess @ 0x140011FA4 (SmStoreExistsForProcess.c)
 *     MiGetProcessPartition @ 0x14004D19C (MiGetProcessPartition.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     MmProcessWorkingSetControl @ 0x14085FFE0 (MmProcessWorkingSetControl.c)
 */

__int64 __fastcall VmpPauseResumeNotify(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // r12d
  volatile signed __int64 *v6; // r14
  unsigned int v7; // eax
  int v8; // edi
  int v9; // esi
  int i; // esi
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  int v15; // [rsp+28h] [rbp-8h]

  CurrentThread = KeGetCurrentThread();
  v5 = 4;
  --CurrentThread->KernelApcDisable;
  v6 = (volatile signed __int64 *)(a1 + 88);
  ExAcquirePushLockExclusiveEx(a1 + 88, 0LL);
  v7 = *(_DWORD *)(a1 + 96);
  if ( (v7 & 1) != 0 )
  {
    v8 = -1073740682;
    goto LABEL_30;
  }
  v9 = (v7 >> 1) & 3;
  if ( a2 )
  {
    if ( v9 >= a2 )
    {
      v8 = -1073741811;
      goto LABEL_30;
    }
  }
  else if ( !v9 )
  {
    v8 = 1075380276;
    goto LABEL_30;
  }
  *(_DWORD *)(a1 + 96) = v7 | 1;
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  v14 = 3LL;
  v15 = 0;
  if ( a2 )
  {
    for ( i = v9 + 1; ; ++i )
    {
      if ( i > a2 )
      {
        v5 = a2;
        goto LABEL_27;
      }
      if ( i == 1 )
      {
        if ( *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].Spare2[39] << 12 >> 20 > (unsigned __int64)(unsigned int)VmPauseOutswapSizeCapMB )
          continue;
        HIDWORD(v14) = 0;
        v15 = 0;
      }
      else
      {
        if ( (unsigned int)(i - 2) > 1
          || !*(_DWORD *)(MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process) + 1144) && i != 3 )
        {
          continue;
        }
        HIDWORD(v14) = 1;
        v15 = 3;
        if ( SmStoreExistsForProcess() )
        {
          v11 = 11;
          if ( i == 3 )
            v11 = 27;
          v15 = v11;
        }
      }
      v8 = MmProcessWorkingSetControl(0xFFFFFFFFFFFFFFFFuLL, &v14, 0xCu, 0);
      if ( v8 < 0 )
        goto LABEL_28;
    }
  }
  HIDWORD(v14) = 0;
  v15 = 1;
  MmProcessWorkingSetControl(0xFFFFFFFFFFFFFFFFuLL, &v14, 0xCu, 0);
  v5 = 0;
LABEL_27:
  v8 = 0;
LABEL_28:
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v6, 0LL);
  v12 = *(_DWORD *)(a1 + 96) & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 96) = v12;
  if ( v5 != 4 )
    *(_DWORD *)(a1 + 96) = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(2 * v5)) & 6;
LABEL_30:
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v8;
}
