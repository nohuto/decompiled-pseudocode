/*
 * XREFs of EtwQueryProcessTelemetryCoverage @ 0x1408B7930
 * Callers:
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     EtwpCoverageUserIsAdmin @ 0x1406E3954 (EtwpCoverageUserIsAdmin.c)
 */

__int64 __fastcall EtwQueryProcessTelemetryCoverage(_KPROCESS *a1, char *a2, unsigned int a3, unsigned int *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  unsigned int v9; // esi
  __int64 *v10; // r15
  __int64 *i; // rcx
  _DWORD *v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rdi
  __int64 *j; // rsi
  unsigned int v16; // eax
  __int64 v17; // rdi
  unsigned int v19; // [rsp+24h] [rbp-44h]

  if ( a1 == KeGetCurrentThread()->ApcState.Process )
  {
    if ( EtwpCoverageContext )
    {
      if ( EtwpCoverageUserIsAdmin() )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
        EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
        v8 = EtwpCoverageContext;
        v9 = *(_DWORD *)(*(_QWORD *)(EtwpCoverageContext + 16) + 16LL);
        v10 = (__int64 *)(EtwpCoverageContext + 48);
        for ( i = *(__int64 **)(EtwpCoverageContext + 48); i != v10; i = (__int64 *)*i )
          v9 = *((_DWORD *)i + 6) - (_DWORD)i + v9 - 40;
        if ( a4 )
          *a4 = v9;
        v12 = *(_DWORD **)(v8 + 16);
        v13 = v12[4];
        if ( a3 < v13 )
          v13 = a3;
        if ( v13 )
        {
          v14 = v13;
          memmove(a2, v12, v13);
          a2 += v14;
        }
        if ( a3 < v9 )
        {
          v19 = -2147483643;
        }
        else
        {
          for ( j = (__int64 *)*v10; j != v10; j = (__int64 *)*j )
          {
            v16 = *((_DWORD *)j + 6) - (_DWORD)j - 40;
            if ( *((_DWORD *)j + 6) - (_DWORD)j != 40 )
            {
              v17 = v16;
              memmove(a2, j + 5, v16);
              a2 += v17;
            }
          }
          v19 = 0;
        }
      }
      else
      {
        v19 = -1073741790;
      }
    }
    else
    {
      v19 = -1073741641;
    }
  }
  else
  {
    v19 = -1073741637;
  }
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v19;
}
