/*
 * XREFs of ExEnableHandleExceptions @ 0x1406C5E28
 * Callers:
 *     PspApplyMitigationOptions @ 0x14064EF50 (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 */

bool __fastcall ExEnableHandleExceptions(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int64 *v5; // rbp
  __int64 v6; // rcx
  char v7; // cl
  bool v8; // di
  int v10; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (volatile signed __int64 *)(a1 + 56);
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v6 = *(_QWORD *)(a1 + 96);
  if ( v6 )
  {
    v10 = *(_DWORD *)(v6 + 8);
    if ( (v10 & 8) == 0 )
    {
      if ( a2 )
        *(_DWORD *)(v6 + 8) = v10 | 8;
      goto LABEL_4;
    }
  }
  else
  {
    v7 = *(_BYTE *)(a1 + 44);
    if ( (v7 & 2) == 0 )
    {
      *(_BYTE *)(a1 + 44) = v7 & 0xFD | (a2 != 0 ? 2 : 0);
LABEL_4:
      v8 = 1;
      goto LABEL_5;
    }
  }
  v8 = a2 != 0;
LABEL_5:
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v8;
}
