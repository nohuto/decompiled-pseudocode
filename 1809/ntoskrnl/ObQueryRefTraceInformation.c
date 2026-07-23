/*
 * XREFs of ObQueryRefTraceInformation @ 0x140863A94
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 */

__int64 __fastcall ObQueryRefTraceInformation(char *a1, SIZE_T Length, unsigned int *a3)
{
  unsigned int *v3; // r13
  unsigned int v4; // r12d
  unsigned int v6; // r14d
  unsigned int v7; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int16 v9; // r13
  char *v10; // r12
  __int16 v11; // cx
  unsigned int i; // r9d
  unsigned int j; // r8d
  __int64 v14; // r15
  int v17; // [rsp+88h] [rbp+20h]

  v3 = a3;
  v4 = Length;
  v6 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
    ProbeForWrite(a1, (unsigned int)Length, 8u);
  v7 = 40;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
  if ( (ObpTraceFlags & 2) != 0 )
  {
    v9 = 0;
    v17 = ObpTraceFlags & 0x20;
    if ( (ObpTraceFlags & 0x20) != 0 )
      v7 = ObpRuntimeTraceProcessName.Length + 42;
    if ( (ObpTraceFlags & 0x10) != 0 )
    {
      while ( v9 < 0x10u && *((_DWORD *)&ObpRuntimeTracePoolTags + v9) )
        ++v9;
      if ( v9 )
        v7 += 10 * v9;
    }
    if ( v7 <= v4 )
    {
      v10 = a1 + 40;
      memset(a1, 0, 0x28uLL);
      *a1 = 1;
      a1[1] = (ObpTraceFlags & 0x40) != 0;
      if ( v17 )
      {
        *((_WORD *)a1 + 4) = ObpRuntimeTraceProcessName.Length;
        *((_WORD *)a1 + 5) = ObpRuntimeTraceProcessName.MaximumLength;
        *((_QWORD *)a1 + 2) = v10;
        memmove(a1 + 40, ObpRuntimeTraceProcessName.Buffer, ObpRuntimeTraceProcessName.MaximumLength);
        v10 += 2 * ((unsigned __int64)ObpRuntimeTraceProcessName.MaximumLength >> 1);
      }
      if ( (ObpTraceFlags & 0x10) != 0 )
      {
        v11 = 2 * (5 * v9 - 1);
        *((_WORD *)a1 + 12) = v11;
        *((_WORD *)a1 + 13) = v11 + 2;
        *((_QWORD *)a1 + 4) = v10;
        for ( i = 0; i < v9; ++i )
        {
          for ( j = 0; ; ++j )
          {
            v14 = j + 5 * i;
            if ( j >= 4 )
              break;
            *(_WORD *)&v10[2 * v14] = (unsigned __int8)(*((_DWORD *)&ObpRuntimeTracePoolTags + i) >> (8 * j));
          }
          *(_WORD *)&v10[2 * v14] = 59;
        }
        *(_WORD *)&v10[10 * v9 - 2] = 0;
      }
      v3 = a3;
    }
    else
    {
      v6 = -1073741820;
      v3 = a3;
    }
  }
  else if ( v4 >= 0x28 )
  {
    *a1 = 0;
  }
  else
  {
    v6 = -1073741820;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
  KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -1073741820 )
  {
    if ( v3 )
      *v3 = v7;
  }
  return v6;
}
