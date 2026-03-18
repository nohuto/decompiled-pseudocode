/*
 * XREFs of EtwpCoverageSamplerStart @ 0x140905978
 * Callers:
 *     EtwpSetCoverageSamplerInformation @ 0x1409060E0 (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     KeStartProfile @ 0x1402AC15C (KeStartProfile.c)
 *     PsEnumProcesses @ 0x140638AD8 (PsEnumProcesses.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1406E8248 (EtwpUpdateGlobalGroupMasks.c)
 *     KeSetIntervalProfile @ 0x1406F9F50 (KeSetIntervalProfile.c)
 *     MmEnumerateSystemImages @ 0x14070A210 (MmEnumerateSystemImages.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140758E40 (PsSetLoadImageNotifyRoutineEx.c)
 *     KeInitializeProfileCallback @ 0x14087F04C (KeInitializeProfileCallback.c)
 *     EtwpCovSampCaptureContextStart @ 0x140900900 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCoverageSamplerAllocateTable @ 0x140904924 (EtwpCoverageSamplerAllocateTable.c)
 */

__int64 __fastcall EtwpCoverageSamplerStart(_DWORD *Object)
{
  int v2; // ecx
  unsigned __int64 v3; // r14
  __int16 v4; // r12
  _QWORD *Table; // rax
  int ImageNotifyRoutine; // esi
  PVOID *v7; // rdx
  unsigned int v8; // ecx
  unsigned int v9; // esi
  int v10; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // r15
  __int64 v13; // rcx
  int v14; // edx
  int v15; // eax
  _DWORD v17[8]; // [rsp+30h] [rbp-48h] BYREF
  char v18; // [rsp+80h] [rbp+8h] BYREF

  v2 = Object[9];
  LODWORD(v3) = 0;
  memset(v17, 0, 24);
  v4 = 0;
  Table = EtwpCoverageSamplerAllocateTable(v2);
  *((_QWORD *)Object + 143) = Table;
  if ( !Table )
  {
    ImageNotifyRoutine = -1073741670;
    goto LABEL_29;
  }
  ++Object[294];
  v7 = (PVOID *)*((_QWORD *)Object + 146);
  if ( *v7 != Object + 290 )
    __fastfail(3u);
  *Table = Object + 290;
  Table[1] = v7;
  *v7 = Table;
  *((_QWORD *)Object + 146) = Table;
  v8 = Object[17];
  v9 = Object[16];
  if ( v8 )
    v9 /= v8;
  v10 = Object[6];
  if ( (v10 & 4) != 0 )
    goto LABEL_16;
  if ( (v10 & 2) != 0 )
    goto LABEL_14;
  v17[0] = 2;
  if ( ((int (__fastcall *)(__int64, __int64, _DWORD *, char *))off_140426798[0])(1LL, 24LL, v17, &v18) < 0
    || !LOBYTE(v17[1]) )
  {
    if ( (Object[6] & 1) != 0 )
    {
      ImageNotifyRoutine = -1073741637;
      goto LABEL_29;
    }
LABEL_14:
    LODWORD(v3) = 10 * v9;
    if ( (BYTE4(PerfGlobalGroupMask[0]) & 2) != 0 )
      LODWORD(v3) = EtwpProfileInterval;
    goto LABEL_16;
  }
  v4 = 2;
  v3 = v9 * (unsigned __int64)(unsigned int)EtwCPUSpeedInMHz / 5;
LABEL_16:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCovSampGlobals, 0LL);
  qword_140432508 = (__int64)KeGetCurrentThread();
  if ( qword_140432518 )
  {
    ImageNotifyRoutine = -1073740008;
  }
  else
  {
    ImageNotifyRoutine = EtwpCovSampCaptureContextStart(Object + 6);
    if ( ImageNotifyRoutine >= 0 )
    {
      v12 = qword_140432528;
      ObfReferenceObject(Object);
      qword_140432518 = (__int64)Object;
      _InterlockedExchange64((volatile __int64 *)&stru_140432520, 0LL);
      Object[285] |= 1u;
      v13 = EtwpHostSiloState;
      v14 = *(_DWORD *)(EtwpHostSiloState + 4548) | 4;
      *(_DWORD *)(EtwpHostSiloState + 4548) = v14;
      v15 = Object[6];
      if ( (v15 & 8) == 0 )
      {
        *(_DWORD *)(v13 + 4552) |= 4u;
        v15 = Object[6];
      }
      if ( (v15 & 0x10) == 0 )
      {
        *(_DWORD *)(v13 + 4552) |= 0x200u;
        v15 = Object[6];
      }
      if ( (v15 & 0x20) == 0 )
        *(_DWORD *)(v13 + 4548) = v14 | 0x1000;
      EtwpUpdateGlobalGroupMasks(v13, 0, 9u);
      Object[285] |= 4u;
      ImageNotifyRoutine = PsSetLoadImageNotifyRoutineEx((__int64)EtwpCovSampImageNotify, 0LL);
      if ( ImageNotifyRoutine >= 0 )
      {
        Object[285] |= 2u;
        PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))EtwpCovSampEnumerateProcess, (__int64)(Object + 4));
        MmEnumerateSystemImages(
          (__int64 (__fastcall *)(PVOID *, __int64))EtwpCovSampEnumerateDriver,
          (__int64)(Object + 4));
        if ( (Object[6] & 4) == 0 )
        {
          KeInitializeProfileCallback((_DWORD *)(v12 + 16), (__int64)EtwpCovSampProfileInterrupt, v12, v4);
          KeSetIntervalProfile(v3, *(__int16 *)(v12 + 256));
          KeStartProfile(v12 + 16);
          Object[285] |= 8u;
        }
        ImageNotifyRoutine = 0;
      }
    }
  }
LABEL_29:
  if ( (struct _KTHREAD *)qword_140432508 == KeGetCurrentThread() )
  {
    qword_140432508 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCovSampGlobals);
    KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)ImageNotifyRoutine;
}
