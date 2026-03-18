/*
 * XREFs of ObQueryRefTraceInformation @ 0x14089EAC0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
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
  char v14; // bl
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
          for ( j = 0; j < 4; ++j )
            *(_WORD *)&v10[8 * i + 2 * i + 2 * j] = (unsigned __int8)(*((_DWORD *)&ObpRuntimeTracePoolTags + i) >> (8 * j));
          *(_WORD *)&v10[8 * i + 2 * i + 2 * j] = 59;
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
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
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
