/*
 * XREFs of EtwpCovSampCaptureContextStart @ 0x1408C3D80
 * Callers:
 *     EtwpCoverageSamplerStart @ 0x1408C8B50 (EtwpCoverageSamplerStart.c)
 * Callees:
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     KeInitializeDpc @ 0x1400A56F0 (KeInitializeDpc.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1400A6A80 (KeQueryMaximumProcessorCountEx.c)
 *     KeInitializeEvent @ 0x1400B8E70 (KeInitializeEvent.c)
 *     KeSetBasePriorityThread @ 0x1400CD370 (KeSetBasePriorityThread.c)
 *     InitializeSListHead @ 0x1400F3180 (InitializeSListHead.c)
 *     ExSaAllocate @ 0x140167794 (ExSaAllocate.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     EtwpCovSampLookasideGrow @ 0x14031709C (EtwpCovSampLookasideGrow.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1405F5700 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x14066AAC0 (PsCreateSystemThreadEx.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x1408C4344 (EtwpCovSampCaptureFreeLookasides.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x1408C6BB0 (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x1408C6C44 (EtwpCovSampLookasideInitialize.c)
 *     EtwpCovSampStackHashTableAlloc @ 0x1408C79D8 (EtwpCovSampStackHashTableAlloc.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x1408C7A70 (EtwpCovSampStrideSamplerInitialize.c)
 */

__int64 __fastcall EtwpCovSampCaptureContextStart(_DWORD *a1)
{
  PVOID *v1; // rdi
  __int64 v2; // r14
  HANDLE v4; // rbp
  PVOID *PoolWithTag; // rax
  int SystemThread; // ebx
  __int64 **v7; // r15
  PVOID v8; // rax
  __int64 v9; // rax
  struct _KTHREAD *v10; // rcx
  int v11; // ebx
  ULONG MaximumProcessorCount; // ebp
  __int64 v13; // r15
  unsigned int v14; // eax
  unsigned int v15; // ecx
  _QWORD *v16; // rbx
  int v17; // eax
  __int64 *i; // r14
  unsigned int v19; // ecx
  HANDLE Handle; // [rsp+A0h] [rbp+18h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+20h] BYREF

  v1 = (PVOID *)qword_140409DE8;
  v2 = 0LL;
  Handle = 0LL;
  v4 = 0LL;
  if ( !qword_140409DE8 )
  {
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x3D0uLL, 0x56777445u);
    v1 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, 0x3D0uLL);
    v1[1] = (PVOID)-1LL;
    v1[33] = 0LL;
    KeInitializeEvent((PRKEVENT)v1 + 28, NotificationEvent, 0);
    KeInitializeDpc((PRKDPC)(v1 + 76), (PKDEFERRED_ROUTINE)EtwpCovSampCaptureRebalanceDpc, v1);
    InitializeSListHead((PSLIST_HEADER)v1 + 44);
    KeInitializeEvent((PRKEVENT)(v1 + 92), NotificationEvent, 0);
    KeInitializeDpc((PRKDPC)(v1 + 95), (PKDEFERRED_ROUTINE)EtwpCovSampCaptureQueueDpc, v1);
    KeInitializeDpc((PRKDPC)(v1 + 103), (PKDEFERRED_ROUTINE)EtwpCovSampCaptureCleanupDpc, v1);
    KeInitializeEvent((PRKEVENT)v1 + 37, NotificationEvent, 0);
    qword_140409DE8 = (__int64)v1;
  }
  v7 = (__int64 **)(v1 + 72);
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
    v8 = v1[118];
    if ( !v8 || !v1[119] )
      goto LABEL_20;
    v1[117] = v8;
    v2 = 0LL;
    v1[120] = (PVOID)(unsigned int)ExGenRandom(0);
  }
  if ( v1[1] == (PVOID)-1LL )
  {
    v9 = ExSaAllocate(0x150u, 0);
    if ( v9 != -1 )
    {
      v1[1] = (PVOID)v9;
      goto LABEL_12;
    }
LABEL_20:
    SystemThread = -1073741670;
    goto LABEL_32;
  }
LABEL_12:
  v10 = (struct _KTHREAD *)*v1;
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
    v10 = (struct _KTHREAD *)Object;
    *v1 = Object;
LABEL_15:
    v11 = *a1 & 0x200;
    KeSetBasePriorityThread(v10, (v11 != 0) - 1);
    *((_DWORD *)v1 + 233) = v11 != 0;
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    if ( MaximumProcessorCount )
    {
      v13 = MaximumProcessorCount;
      do
      {
        v14 = (*((_DWORD *)v1 + 2) >> 13) & 0x3FFFF;
        _BitScanReverse(&v15, v14);
        v16 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + ExSaPageArrays) + 8LL * (v15 - 2))
                                   + 8LL * (v14 ^ (1 << v15))
                                   + 8)
                       + 8LL * ((*((_DWORD *)v1 + 2) >> 4) & 0x1FF));
        memset(v16, 0, 0x150uLL);
        *v16 = 0LL;
        EtwpCovSampLookasideInitialize(v1, v16 + 2, v1 + 34);
        EtwpCovSampLookasideInitialize(v1, v16 + 10, v1 + 44);
        EtwpCovSampStrideSamplerInitialize(v16 + 18, (unsigned int)a1[10], (unsigned int)a1[11]);
        EtwpCovSampStrideSamplerInitialize(v16 + 23, (unsigned int)a1[12], (unsigned int)a1[13]);
        EtwpCovSampStrideSamplerInitialize(v16 + 28, (unsigned int)a1[14], (unsigned int)a1[15]);
        EtwpCovSampStrideSamplerInitialize(v16 + 33, (unsigned int)a1[16], (unsigned int)a1[17]);
        v2 += 8LL;
        --v13;
      }
      while ( v13 );
      v7 = (__int64 **)(v1 + 72);
    }
    EtwpCovSampLookasideControlInitialize(
      v1,
      v1 + 54,
      EtwpCovSampCaptureAllocateSampleBuffer,
      (3 * MaximumProcessorCount * a1[7]) >> 2,
      MaximumProcessorCount * a1[7]);
    EtwpCovSampLookasideInitialize(v1, v1 + 64, v1 + 54);
    v17 = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)v1 + 174) = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)v1 + 175) = v17;
    *((_DWORD *)v1 + 230) = 0;
    *((_DWORD *)v1 + 231) = a1[18];
    *((_DWORD *)v1 + 232) = a1[6];
    _InterlockedExchange((volatile __int32 *)v1 + 228, 1);
    *((_DWORD *)v1 + 229) = 0;
    for ( i = *v7; i != (__int64 *)v7; i = (__int64 *)*i )
    {
      _InterlockedExchange((volatile __int32 *)i + 6, 1);
      *((_DWORD *)i + 7) = 0;
      while ( 1 )
      {
        v19 = *((_DWORD *)i + 9);
        if ( v19 >= *(_DWORD *)(i[2] + 56) || v19 >= *((_DWORD *)i + 10) )
          break;
        SystemThread = EtwpCovSampLookasideGrow((__int64)v1, (__int64)(i - 2));
        if ( SystemThread < 0 )
          goto LABEL_31;
      }
    }
    SystemThread = 0;
    v4 = Handle;
    goto LABEL_28;
  }
LABEL_31:
  v4 = Handle;
LABEL_32:
  if ( v1[1] != (PVOID)-1LL )
    EtwpCovSampCaptureFreeLookasides(v1);
LABEL_28:
  if ( v4 )
    ObCloseHandle(v4, 0);
  return (unsigned int)SystemThread;
}
