/*
 * XREFs of PfCheckDeprioritizeImage @ 0x140668014
 * Callers:
 *     CcUnmapVacb @ 0x1405F384C (CcUnmapVacb.c)
 *     PfProcessCreateNotification @ 0x140667D1C (PfProcessCreateNotification.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 */

_BOOL8 __fastcall PfCheckDeprioritizeImage(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // r9
  __int64 v5; // rax
  BOOL v6; // ebx
  __int64 v8; // rcx

  if ( !a1 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_14043D250, 0LL);
  if ( (_DWORD)qword_14043D244 )
  {
    v3 = 0LL;
    v4 = (1874161 * (HIBYTE(a1) + 37 * (BYTE2(a1) + 37 * (BYTE1(a1) + 37 * ((unsigned __int8)a1 + 11623883))))) & ((int)qword_14043D244 - 1);
    v5 = *(_QWORD *)((v4 << dword_14043D240) + qword_14043D238);
    if ( v5 )
    {
      v8 = *(_QWORD *)((v4 << dword_14043D240) + qword_14043D238);
      do
      {
        v5 = v8;
        if ( v8 == a1 )
          break;
        if ( !v3 )
        {
          v3 = 2654435761LL * a1 + 1;
          if ( ((-79 * (_BYTE)a1) & 1) != 0 )
            v3 = 2654435761LL * a1;
        }
        v4 = (unsigned int)(qword_14043D244 - 1) & (v3 + v4);
        v5 = *(_QWORD *)((v4 << dword_14043D240) + qword_14043D238);
        v8 = v5;
      }
      while ( v5 );
    }
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v5 != 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14043D250, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14043D250);
  KeAbPostRelease((ULONG_PTR)&qword_14043D250);
  KeLeaveCriticalRegion();
  return v6;
}
