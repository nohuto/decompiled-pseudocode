/*
 * XREFs of EtwpCovSampCaptureContextStart @ 0x140900900
 * Callers:
 *     EtwpCoverageSamplerStart @ 0x140905978 (EtwpCoverageSamplerStart.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140004950 (KeQueryMaximumProcessorCountEx.c)
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     KeSetBasePriorityThread @ 0x140012340 (KeSetBasePriorityThread.c)
 *     KeInitializeDpc @ 0x140098B70 (KeInitializeDpc.c)
 *     ExGenRandom @ 0x14009C340 (ExGenRandom.c)
 *     InitializeSListHead @ 0x1400EA4C0 (InitializeSListHead.c)
 *     ExSaAllocate @ 0x14016DBA0 (ExSaAllocate.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EtwpCovSampLookasideGrow @ 0x140335530 (EtwpCovSampLookasideGrow.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x1406725D0 (PsCreateSystemThreadEx.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x140900EE8 (EtwpCovSampCaptureFreeLookasides.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x140903990 (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x140903A24 (EtwpCovSampLookasideInitialize.c)
 *     EtwpCovSampStackHashTableAlloc @ 0x1409047EC (EtwpCovSampStackHashTableAlloc.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x140904884 (EtwpCovSampStrideSamplerInitialize.c)
 */

__int64 __fastcall EtwpCovSampCaptureContextStart(_DWORD *a1)
{
  PVOID *v1; // rsi
  HANDLE v2; // rdi
  PVOID *PoolWithTag; // rax
  int SystemThread; // ebx
  __int64 **v6; // r15
  PVOID v7; // rax
  __int64 v8; // rax
  struct _KTHREAD *v9; // rcx
  int v10; // ebx
  ULONG MaximumProcessorCount; // eax
  __int64 v12; // rbp
  __int64 v13; // r15
  __int64 v14; // rbx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rdi
  int v18; // eax
  __int64 *i; // r14
  unsigned int v20; // ecx
  PVOID Object; // [rsp+50h] [rbp-48h] BYREF
  ULONG v23; // [rsp+A8h] [rbp+10h]
  HANDLE Handle; // [rsp+B8h] [rbp+20h] BYREF

  v1 = (PVOID *)qword_140432528;
  v2 = 0LL;
  Handle = 0LL;
  if ( !qword_140432528 )
  {
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x3D0uLL, 0x56777445u);
    v1 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, 0x3D0uLL);
    v1[1] = (PVOID)-1LL;
    KeInitializeEvent((PRKEVENT)v1 + 28, NotificationEvent, 0);
    KeInitializeDpc((PRKDPC)(v1 + 76), (PKDEFERRED_ROUTINE)EtwpCovSampCaptureRebalanceDpc, v1);
    InitializeSListHead((PSLIST_HEADER)v1 + 44);
    KeInitializeEvent((PRKEVENT)(v1 + 92), NotificationEvent, 0);
    KeInitializeDpc((PRKDPC)(v1 + 95), (PKDEFERRED_ROUTINE)EtwpCovSampCaptureQueueDpc, v1);
    KeInitializeDpc((PRKDPC)(v1 + 103), (PKDEFERRED_ROUTINE)EtwpCovSampCaptureCleanupDpc, v1);
    KeInitializeEvent((PRKEVENT)v1 + 37, NotificationEvent, 0);
    qword_140432528 = (__int64)v1;
  }
  v6 = (__int64 **)(v1 + 72);
  v1[73] = v1 + 72;
  v1[72] = v1 + 72;
  v1[75] = v1 + 74;
  v1[74] = v1 + 74;
  EtwpCovSampLookasideControlInitialize(
    v1,
    v1 + 34,
    EtwpCovSampCaptureAllocateApc,
    (unsigned int)(3 * a1[9]) >> 2,
    a1[9]);
  EtwpCovSampLookasideControlInitialize(
    v1,
    v1 + 44,
    EtwpCovSampCaptureAllocateCaptureBuffer,
    (unsigned int)(3 * a1[8]) >> 2,
    a1[8]);
  if ( a1[19] )
  {
    EtwpCovSampStackHashTableAlloc(v1 + 118);
    EtwpCovSampStackHashTableAlloc(v1 + 119);
    v7 = v1[118];
    if ( !v7 || !v1[119] )
      goto LABEL_20;
    v1[117] = v7;
    v1[120] = (PVOID)(unsigned int)ExGenRandom(0);
  }
  if ( v1[1] == (PVOID)-1LL )
  {
    v8 = ExSaAllocate(0x150u, 0);
    if ( v8 != -1 )
    {
      v1[1] = (PVOID)v8;
      goto LABEL_12;
    }
LABEL_20:
    SystemThread = -1073741670;
    goto LABEL_32;
  }
LABEL_12:
  v9 = (struct _KTHREAD *)*v1;
  if ( *v1 )
    goto LABEL_15;
  SystemThread = PsCreateSystemThreadEx(
                   (__int64)&Handle,
                   0x1FFFFF,
                   0LL,
                   0LL,
                   0LL,
                   (__int64)EtwpCovSampCaptureWorkerThread,
                   (__int64)v1,
                   0LL,
                   0LL);
  if ( SystemThread >= 0 )
  {
    ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    v9 = (struct _KTHREAD *)Object;
    *v1 = Object;
LABEL_15:
    v10 = *a1 & 0x200;
    KeSetBasePriorityThread(v9, (v10 != 0) - 1);
    *((_DWORD *)v1 + 233) = v10 != 0;
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    v12 = MaximumProcessorCount;
    v23 = MaximumProcessorCount;
    if ( MaximumProcessorCount )
    {
      v13 = 0LL;
      do
      {
        v14 = ((unsigned __int64)v1[1] >> 4) & 0x1FF;
        v15 = ((unsigned int)v1[1] >> 13) & 0x3FFFF;
        _BitScanReverse(&v16, v15);
        v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + ExSaPageArrays) + 8LL * (v16 - 2)) + 8LL * (v15 ^ (1 << v16)) + 8);
        memset((void *)(v17 + 8 * (v14 + 1)), 0, 0x148uLL);
        *(_QWORD *)(v17 + 8 * v14) = 0LL;
        EtwpCovSampLookasideInitialize(v1, v17 + 8 * (v14 + 2), v1 + 34);
        EtwpCovSampLookasideInitialize(v1, v17 + 8 * (v14 + 10), v1 + 44);
        EtwpCovSampStrideSamplerInitialize(v17 + 8 * (v14 + 18), (unsigned int)a1[10], (unsigned int)a1[11]);
        EtwpCovSampStrideSamplerInitialize(v17 + 8 * (v14 + 23), (unsigned int)a1[12], (unsigned int)a1[13]);
        EtwpCovSampStrideSamplerInitialize(v17 + 8 * (v14 + 28), (unsigned int)a1[14], (unsigned int)a1[15]);
        EtwpCovSampStrideSamplerInitialize(v17 + 8 * (v14 + 33), (unsigned int)a1[16], (unsigned int)a1[17]);
        v13 += 8LL;
        --v12;
      }
      while ( v12 );
      LODWORD(v12) = v23;
      v6 = (__int64 **)(v1 + 72);
    }
    EtwpCovSampLookasideControlInitialize(
      v1,
      v1 + 54,
      EtwpCovSampCaptureAllocateSampleBuffer,
      (unsigned int)(3 * v12 * a1[7]) >> 2,
      v12 * a1[7]);
    EtwpCovSampLookasideInitialize(v1, v1 + 64, v1 + 54);
    v18 = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)v1 + 230) = 0;
    *((_DWORD *)v1 + 174) = v18;
    *((_DWORD *)v1 + 175) = v18;
    *((_DWORD *)v1 + 231) = a1[18];
    *((_DWORD *)v1 + 232) = a1[6];
    _InterlockedExchange((volatile __int32 *)v1 + 228, 1);
    *((_DWORD *)v1 + 229) = 0;
    for ( i = *v6; i != (__int64 *)v6; i = (__int64 *)*i )
    {
      _InterlockedExchange((volatile __int32 *)i + 6, 1);
      *((_DWORD *)i + 7) = 0;
      while ( 1 )
      {
        v20 = *((_DWORD *)i + 9);
        if ( v20 >= *(_DWORD *)(i[2] + 56) || v20 >= *((_DWORD *)i + 10) )
          break;
        SystemThread = EtwpCovSampLookasideGrow((__int64)v1, (__int64)(i - 2));
        if ( SystemThread < 0 )
          goto LABEL_31;
      }
    }
    SystemThread = 0;
    v2 = Handle;
    goto LABEL_28;
  }
LABEL_31:
  v2 = Handle;
LABEL_32:
  if ( v1[1] != (PVOID)-1LL )
    EtwpCovSampCaptureFreeLookasides(v1);
LABEL_28:
  if ( v2 )
    ObCloseHandle(v2, 0);
  return (unsigned int)SystemThread;
}
