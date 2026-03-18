/*
 * XREFs of PfpScenCtxPrefetchWait @ 0x1405967B0
 * Callers:
 *     PfPowerActionNotify @ 0x140596AF4 (PfPowerActionNotify.c)
 *     PfpProcessScenarioPhase @ 0x140744520 (PfpProcessScenarioPhase.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     PfpScenCtxWaiterTimedOut @ 0x14016A164 (PfpScenCtxWaiterTimedOut.c)
 */

__int64 __fastcall PfpScenCtxPrefetchWait(ULONG_PTR BugCheckParameter2, int a2, unsigned int a3)
{
  int v3; // r13d
  unsigned int v4; // r15d
  unsigned int v5; // ebx
  int v6; // esi
  int v8; // r14d
  struct _KTHREAD *CurrentThread; // rax
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // r12d
  __int64 v13; // rbx
  unsigned int v14; // esi
  NTSTATUS v15; // r10d
  __int64 v16; // rax
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+8h] BYREF
  int v19; // [rsp+78h] [rbp+10h]
  unsigned int v20; // [rsp+80h] [rbp+18h]

  v20 = a3;
  v19 = a2;
  Timeout.QuadPart = 0LL;
  v3 = 0;
  v4 = 0;
  v5 = a3;
  v6 = a2;
  v8 = dword_140467818 < (unsigned int)dword_14046781C ? 0x7D0 : 0;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    if ( *(_DWORD *)(BugCheckParameter2 + 48) != v6 || (*(_DWORD *)(BugCheckParameter2 + 8) & 0xC) == 8 )
      break;
    if ( v3 )
      goto LABEL_21;
    KeResetEvent((PRKEVENT)(BugCheckParameter2 + 16));
    v10 = *(_DWORD *)(BugCheckParameter2 + 8) & 3;
    if ( v10 == 1 )
    {
      v12 = 2;
      v11 = v5 - v4;
    }
    else
    {
      if ( v10 )
        break;
      if ( !v8 )
      {
LABEL_21:
        PfpScenCtxWaiterTimedOut(BugCheckParameter2);
        break;
      }
      v11 = v8;
      v12 = 1;
      v8 = 0;
    }
    *(_DWORD *)(BugCheckParameter2 + 8) = *(_DWORD *)(BugCheckParameter2 + 8) & 0xFFFFFFF3 | 4;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    Timeout.QuadPart = -10000LL * v11;
    v13 = MEMORY[0xFFFFF78000000320];
    v14 = MEMORY[0xFFFFF78000000004];
    v15 = KeWaitForSingleObject((PVOID)(BugCheckParameter2 + 16), Executive, 0, 0, &Timeout);
    v16 = (unsigned int)v13;
    v5 = v20;
    v4 += ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
        + ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324] - v14 * HIDWORD(v13)) << 8)
        - ((v16 * (unsigned __int64)v14) >> 24);
    if ( v15 == 258 || v4 >= v20 )
    {
      v3 = 1;
    }
    else if ( v12 == 2 )
    {
      return v4;
    }
    v6 = v19;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegion();
  return v4;
}
