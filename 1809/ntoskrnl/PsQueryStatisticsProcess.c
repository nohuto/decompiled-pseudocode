/*
 * XREFs of PsQueryStatisticsProcess @ 0x1405FF700
 * Callers:
 *     EtwTraceAppStateChange @ 0x1405B3C80 (EtwTraceAppStateChange.c)
 *     PspEnforceLimitsProcessCallback @ 0x1405FE500 (PspEnforceLimitsProcessCallback.c)
 *     ExpCopyProcessInfo @ 0x1405FF390 (ExpCopyProcessInfo.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x140601010 (PspQueryProcessAccountingInformationCallback.c)
 *     PspRemoveProcessFromJobChain @ 0x140601410 (PspRemoveProcessFromJobChain.c)
 *     EtwpPsProvTraceProcess @ 0x14066D210 (EtwpPsProvTraceProcess.c)
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     KeQueryValuesThread @ 0x14008EE70 (KeQueryValuesThread.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PsQueryStatisticsProcess(__int64 a1, _QWORD *a2)
{
  signed __int64 *v4; // rbp
  __int64 v5; // r8
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  unsigned int v8; // r12d
  _QWORD *i; // rsi
  __int64 v10; // rcx
  __int64 result; // rax
  _BYTE v12[4]; // [rsp+20h] [rbp-48h] BYREF
  int v13; // [rsp+24h] [rbp-44h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (signed __int64 *)(a1 + 1712);
  ExAcquirePushLockSharedEx(a1 + 1712, 0LL);
  v6 = *(_DWORD *)(a1 + 620);
  v7 = *(_DWORD *)(a1 + 624);
  v8 = *(_DWORD *)(a1 + 628);
  a2[3] = *(_QWORD *)(a1 + 592);
  a2[4] = *(_QWORD *)(a1 + 600);
  a2[5] = *(_QWORD *)(a1 + 1208);
  a2[6] = *(_QWORD *)(a1 + 1216);
  a2[7] = *(_QWORD *)(a1 + 1224);
  a2[8] = *(_QWORD *)(a1 + 1232);
  a2[9] = *(_QWORD *)(a1 + 1240);
  a2[10] = *(_QWORD *)(a1 + 1248);
  for ( i = *(_QWORD **)(a1 + 1160); i != (_QWORD *)(a1 + 1160); v8 += v13 )
  {
    v6 += *((_DWORD *)i - 263);
    v7 += *((_DWORD *)i - 243);
    KeQueryValuesThread((__int64)(i - 213), (__int64)v12, v5);
    a2[3] += *(i - 204);
    a2[4] += *((unsigned int *)i - 341);
    a2[5] += *(i - 32);
    a2[6] += *(i - 31);
    a2[7] += *(i - 30);
    a2[8] += *(i - 29);
    a2[9] += *(i - 28);
    a2[10] += *(i - 27);
    i = (_QWORD *)*i;
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v10 = KeMaximumIncrement;
  *a2 = KeMaximumIncrement * (unsigned __int64)v6;
  a2[1] = v10 * v7;
  result = v10 * v8;
  a2[2] = result;
  return result;
}
