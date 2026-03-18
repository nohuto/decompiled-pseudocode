/*
 * XREFs of PsQueryStatisticsProcess @ 0x140613A50
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 *     PspEnforceLimitsProcessCallback @ 0x1406127F0 (PspEnforceLimitsProcessCallback.c)
 *     ExpCopyProcessInfo @ 0x1406136F0 (ExpCopyProcessInfo.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x140614A80 (PspQueryProcessAccountingInformationCallback.c)
 *     PspRemoveProcessFromJobChain @ 0x140614EA4 (PspRemoveProcessFromJobChain.c)
 *     EtwTraceAppStateChange @ 0x140636F48 (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x140683C20 (EtwpPsProvTraceProcess.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeQueryValuesThread @ 0x1400837B0 (KeQueryValuesThread.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PsQueryStatisticsProcess(__int64 a1, _QWORD *a2)
{
  signed __int64 *v4; // r13
  unsigned int v5; // ebp
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  _QWORD *i; // rsi
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // [rsp+20h] [rbp-48h] BYREF
  int v12; // [rsp+28h] [rbp-40h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp+8h]

  v11 = 0LL;
  v12 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (signed __int64 *)(a1 + 1760);
  ExAcquirePushLockSharedEx(a1 + 1760, 0LL);
  v5 = *(_DWORD *)(a1 + 628);
  v6 = *(_DWORD *)(a1 + 632);
  v7 = *(_DWORD *)(a1 + 636);
  a2[3] = *(_QWORD *)(a1 + 600);
  a2[4] = *(_QWORD *)(a1 + 608);
  a2[5] = *(_QWORD *)(a1 + 1208);
  a2[6] = *(_QWORD *)(a1 + 1216);
  a2[7] = *(_QWORD *)(a1 + 1224);
  a2[8] = *(_QWORD *)(a1 + 1232);
  a2[9] = *(_QWORD *)(a1 + 1240);
  a2[10] = *(_QWORD *)(a1 + 1248);
  for ( i = *(_QWORD **)(a1 + 1160); i != (_QWORD *)(a1 + 1160); v7 += HIDWORD(v11) )
  {
    v5 += *((_DWORD *)i - 267);
    v6 += *((_DWORD *)i - 247);
    KeQueryValuesThread((__int64)(i - 215), (__int64)&v11);
    a2[3] += *(i - 206);
    a2[4] += *((unsigned int *)i - 345);
    a2[5] += *(i - 34);
    a2[6] += *(i - 33);
    a2[7] += *(i - 32);
    a2[8] += *(i - 31);
    a2[9] += *(i - 30);
    a2[10] += *(i - 29);
    i = (_QWORD *)*i;
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v9 = KeMaximumIncrement;
  *a2 = KeMaximumIncrement * (unsigned __int64)v5;
  a2[1] = v9 * v6;
  result = v9 * v7;
  a2[2] = result;
  return result;
}
