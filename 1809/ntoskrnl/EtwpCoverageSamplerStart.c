/*
 * XREFs of EtwpCoverageSamplerStart @ 0x1408C9E10
 * Callers:
 *     EtwpSetCoverageSamplerInformation @ 0x1408CA57C (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KeStartProfile @ 0x140295E1C (KeStartProfile.c)
 *     PsEnumProcesses @ 0x1405B2AFC (PsEnumProcesses.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1406C6838 (EtwpUpdateGlobalGroupMasks.c)
 *     KeSetIntervalProfile @ 0x1406D7F60 (KeSetIntervalProfile.c)
 *     MmEnumerateSystemImages @ 0x140727E0C (MmEnumerateSystemImages.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140749410 (PsSetLoadImageNotifyRoutineEx.c)
 *     KeInitializeProfileCallback @ 0x14084578C (KeInitializeProfileCallback.c)
 *     EtwpCovSampCaptureContextStart @ 0x1408C5040 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCoverageSamplerAllocateTable @ 0x1408C8DD0 (EtwpCoverageSamplerAllocateTable.c)
 */

__int64 __fastcall EtwpCoverageSamplerStart(_DWORD *Object)
{
  unsigned __int64 v2; // r14
  __int16 v3; // r12
  _QWORD *Table; // rax
  int ImageNotifyRoutine; // esi
  PVOID *v6; // rdx
  unsigned int v7; // ecx
  unsigned int v8; // esi
  int v9; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // r15
  __int64 v12; // rcx
  int v13; // edx
  int v14; // eax
  _QWORD v16[4]; // [rsp+30h] [rbp-48h] BYREF
  char v17; // [rsp+80h] [rbp+8h] BYREF

  LODWORD(v2) = 0;
  v3 = 0;
  Table = EtwpCoverageSamplerAllocateTable(Object[9]);
  *((_QWORD *)Object + 142) = Table;
  if ( !Table )
  {
    ImageNotifyRoutine = -1073741670;
    goto LABEL_29;
  }
  ++Object[292];
  v6 = (PVOID *)*((_QWORD *)Object + 145);
  if ( *v6 != Object + 288 )
    __fastfail(3u);
  *Table = Object + 288;
  Table[1] = v6;
  *v6 = Table;
  *((_QWORD *)Object + 145) = Table;
  v7 = Object[17];
  v8 = Object[16];
  if ( v7 )
    v8 /= v7;
  v9 = Object[6];
  if ( (v9 & 4) != 0 )
    goto LABEL_16;
  if ( (v9 & 2) != 0 )
    goto LABEL_14;
  v16[1] = 0LL;
  v16[2] = 0LL;
  v16[0] = 2LL;
  if ( ((int (__fastcall *)(__int64, __int64, _QWORD *, char *))off_140401458[0])(1LL, 24LL, v16, &v17) < 0
    || !BYTE4(v16[0]) )
  {
    if ( (Object[6] & 1) != 0 )
    {
      ImageNotifyRoutine = -1073741637;
      goto LABEL_29;
    }
LABEL_14:
    LODWORD(v2) = 10 * v8;
    if ( (BYTE4(PerfGlobalGroupMask[0]) & 2) != 0 )
      LODWORD(v2) = EtwpProfileInterval;
    goto LABEL_16;
  }
  v3 = 2;
  v2 = v8 * (unsigned __int64)(unsigned int)EtwCPUSpeedInMHz / 5;
LABEL_16:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCovSampGlobals, 0LL);
  qword_14040AE28 = (__int64)KeGetCurrentThread();
  if ( qword_14040AE38 )
  {
    ImageNotifyRoutine = -1073740008;
  }
  else
  {
    ImageNotifyRoutine = EtwpCovSampCaptureContextStart(Object + 6);
    if ( ImageNotifyRoutine >= 0 )
    {
      v11 = qword_14040AE48;
      ObfReferenceObject(Object);
      qword_14040AE38 = (__int64)Object;
      _InterlockedExchange64((volatile __int64 *)&stru_14040AE40, 0LL);
      Object[283] |= 1u;
      v12 = EtwpHostSiloState;
      v13 = *(_DWORD *)(EtwpHostSiloState + 4548) | 4;
      *(_DWORD *)(EtwpHostSiloState + 4548) = v13;
      v14 = Object[6];
      if ( (v14 & 8) == 0 )
      {
        *(_DWORD *)(v12 + 4552) |= 4u;
        v14 = Object[6];
      }
      if ( (v14 & 0x10) == 0 )
      {
        *(_DWORD *)(v12 + 4552) |= 0x200u;
        v14 = Object[6];
      }
      if ( (v14 & 0x20) == 0 )
        *(_DWORD *)(v12 + 4548) = v13 | 0x1000;
      EtwpUpdateGlobalGroupMasks(v12, 0, 9u);
      Object[283] |= 4u;
      ImageNotifyRoutine = PsSetLoadImageNotifyRoutineEx((__int64)EtwpCovSampImageNotify, 0LL);
      if ( ImageNotifyRoutine >= 0 )
      {
        Object[283] |= 2u;
        PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))EtwpCovSampEnumerateProcess, (__int64)(Object + 4));
        MmEnumerateSystemImages(
          (__int64 (__fastcall *)(PVOID *, __int64))EtwpCovSampEnumerateDriver,
          (__int64)(Object + 4));
        if ( (Object[6] & 4) == 0 )
        {
          KeInitializeProfileCallback((_DWORD *)(v11 + 16), (__int64)EtwpCovSampProfileInterrupt, v11, v3);
          KeSetIntervalProfile(v2, *(__int16 *)(v11 + 256));
          KeStartProfile(v11 + 16);
          Object[283] |= 8u;
        }
        ImageNotifyRoutine = 0;
      }
    }
  }
LABEL_29:
  if ( (struct _KTHREAD *)qword_14040AE28 == KeGetCurrentThread() )
  {
    qword_14040AE28 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCovSampGlobals);
    KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)ImageNotifyRoutine;
}
