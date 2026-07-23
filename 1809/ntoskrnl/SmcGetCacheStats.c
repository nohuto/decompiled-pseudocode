/*
 * XREFs of SmcGetCacheStats @ 0x1408B01E0
 * Callers:
 *     SmcProcessStatsRequest @ 0x1408AD474 (SmcProcessStatsRequest.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SmKmFileInfoGetPath @ 0x1408ADDC8 (SmKmFileInfoGetPath.c)
 *     SmcCacheReference @ 0x1408AFF08 (SmcCacheReference.c)
 */

__int64 __fastcall SmcGetCacheStats(__int64 a1, _DWORD *a2)
{
  struct _EX_RUNDOWN_REF v4; // rax
  unsigned __int64 Count; // rsi
  int Path; // edi
  unsigned int v7; // ecx
  int v8; // edi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v10; // rbp
  _DWORD *v11; // rsi
  __int64 v12; // rdx

  memset(a2 + 2, 0, 0x460uLL);
  v4.Count = SmcCacheReference(a1, a2[1]).Count;
  Count = v4.Count;
  if ( v4.Count )
  {
    v7 = a2[7] & 0xFFFFFFC0 | 1;
    a2[7] = v7;
    *((_QWORD *)a2 + 1) = *(_QWORD *)(v4.Count + 16);
    a2[5] = *(_DWORD *)(v4.Count + 8);
    a2[6] = *(_DWORD *)(v4.Count + 24);
    a2[25] = *(_DWORD *)(v4.Count + 32);
    a2[7] = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(v4.Count + 28) << 6)) & 0x40;
    if ( (*a2 & 0x100) != 0 || (Path = SmKmFileInfoGetPath(v4.Count + 40, a2 + 26, 0x400u), Path >= 0) )
    {
      a2[24] = 0;
      v8 = 0;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v10 = (signed __int64 *)(Count + 160);
      ExAcquirePushLockSharedEx(Count + 160, 0LL);
      v11 = (_DWORD *)(Count + 168);
      v12 = 16LL;
      do
      {
        if ( *v11 != -1 )
        {
          a2[v8 + 8] = *v11;
          if ( (v11[1] & 3) == 0 )
            a2[24] |= 1 << v8;
          ++v8;
        }
        v11 += 6;
        --v12;
      }
      while ( v12 );
      if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v10);
      KeAbPostRelease((ULONG_PTR)v10);
      KeLeaveCriticalRegion();
      a2[4] = v8;
      Path = 0;
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(32LL * (a2[1] & 0xF) + a1 + 8));
  }
  else
  {
    return (unsigned int)-1073741672;
  }
  return (unsigned int)Path;
}
