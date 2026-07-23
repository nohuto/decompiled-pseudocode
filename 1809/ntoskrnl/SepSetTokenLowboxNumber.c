/*
 * XREFs of SepSetTokenLowboxNumber @ 0x14065D2A4
 * Callers:
 *     SepGetAnonymousToken @ 0x1400DD58C (SepGetAnonymousToken.c)
 *     SeSetSessionIdToken @ 0x1405BD45C (SeSetSessionIdToken.c)
 *     SeSubProcessToken @ 0x14064FC0C (SeSubProcessToken.c)
 *     NtCreateLowBoxToken @ 0x140656130 (NtCreateLowBoxToken.c)
 *     SeExchangePrimaryToken @ 0x140749D88 (SeExchangePrimaryToken.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     SepGetTokenSessionMapEntry @ 0x140300A98 (SepGetTokenSessionMapEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x14065D400 (SepGetLowBoxNumberEntry.c)
 *     SepInitializeLowBoxNumberTable @ 0x14071FBA8 (SepInitializeLowBoxNumberTable.c)
 */

__int64 __fastcall SepSetTokenLowboxNumber(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  char v5; // r15
  char v6; // r12
  int LowBoxNumberEntry; // edi
  char *v8; // rsi
  struct _KTHREAD *v9; // rax
  volatile signed __int64 *v10; // rsi
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v13; // r14
  struct _KTHREAD *v14; // rax
  int TokenSessionMapEntry; // eax
  struct _KTHREAD *v16; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+48h] BYREF
  __int64 v18; // [rsp+78h] [rbp+50h]
  __int64 v19; // [rsp+80h] [rbp+58h] BYREF

  v18 = a2;
  v2 = *(unsigned int *)(a1 + 120);
  BugCheckParameter2 = 0LL;
  v19 = 0LL;
  v3 = a2;
  v5 = 0;
  v6 = 0;
  LowBoxNumberEntry = 0;
  if ( (unsigned int)v2 < 5 )
  {
    v8 = (char *)&g_SessionLowboxArray + 40 * v2;
    BugCheckParameter2 = (ULONG_PTR)v8;
LABEL_3:
    if ( !v8[32] )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v13 = (volatile signed __int64 *)BugCheckParameter2;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      if ( !v8[32] )
        LowBoxNumberEntry = SepInitializeLowBoxNumberTable(v13);
      if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      KeLeaveCriticalRegion();
      v3 = v18;
    }
    if ( !LowBoxNumberEntry )
    {
      v9 = KeGetCurrentThread();
      --v9->KernelApcDisable;
      v10 = (volatile signed __int64 *)BugCheckParameter2;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      LowBoxNumberEntry = SepGetLowBoxNumberEntry(v10, v3, &v19);
      if ( !LowBoxNumberEntry )
        *(_QWORD *)(a1 + 1080) = v19;
      if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      KeLeaveCriticalRegion();
    }
    goto LABEL_10;
  }
  v14 = KeGetCurrentThread();
  --v14->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&LowboxSessionMapLock, 0LL);
  v5 = 1;
  TokenSessionMapEntry = SepGetTokenSessionMapEntry(v2, 0, &BugCheckParameter2);
  LowBoxNumberEntry = TokenSessionMapEntry;
  if ( TokenSessionMapEntry >= 0 )
    goto LABEL_24;
  if ( TokenSessionMapEntry == -1073741275 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&LowboxSessionMapLock);
    KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
    KeLeaveCriticalRegion();
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&LowboxSessionMapLock, 0LL);
    v6 = 1;
    v5 = 0;
    LowBoxNumberEntry = SepGetTokenSessionMapEntry(v2, 1, &BugCheckParameter2);
  }
  if ( LowBoxNumberEntry >= 0 )
  {
LABEL_24:
    v8 = (char *)BugCheckParameter2;
    goto LABEL_3;
  }
LABEL_10:
  if ( v6 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&LowboxSessionMapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&LowboxSessionMapLock);
    goto LABEL_29;
  }
  if ( v5 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&LowboxSessionMapLock);
LABEL_29:
    KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)LowBoxNumberEntry;
}
