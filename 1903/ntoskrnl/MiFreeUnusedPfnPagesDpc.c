/*
 * XREFs of MiFreeUnusedPfnPagesDpc @ 0x140185A00
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MiFreedUnusedPfnPagesWorker @ 0x140185D04 (MiFreedUnusedPfnPagesWorker.c)
 */

__int64 __fastcall MiFreeUnusedPfnPagesDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v7; // eax
  unsigned int v8; // ebx
  char *AnyMultiplexedVm; // r15
  LONG *SharedVm; // rbx
  KIRQL v11; // al
  KIRQL v12; // r12
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 result; // rax
  __int64 v18; // rdx
  signed __int32 v19; // eax
  unsigned int v20; // ebx
  _DWORD v21[10]; // [rsp+20h] [rbp-28h] BYREF
  int v22; // [rsp+68h] [rbp+20h] BYREF

  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v22 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v8 )
      KeYieldProcessorEx(&v22);
  }
  else
  {
    *(_DWORD *)a4 = v8 | *(_DWORD *)(a4 + 4);
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    v11 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v12 = v11;
    ExAcquireSpinLockExclusive(&dword_140468540);
    if ( qword_1404684A8 )
    {
      if ( *(_QWORD *)a2 )
      {
        v18 = *(_QWORD *)(a2 + 8);
        *(_DWORD *)(v18 + 12) = 0;
        *(_WORD *)(v18 + 8) = 263;
        *(_BYTE *)(v18 + 10) = 6;
        *(_QWORD *)(v18 + 24) = v18 + 16;
        *(_QWORD *)(v18 + 16) = v18 + 16;
        *(_QWORD *)v18 = qword_1404684D8;
        qword_1404684D8 = v18;
      }
      else
      {
        stru_1404684B0.List.Flink = 0LL;
        stru_1404684B0.WorkerRoutine = (void (__fastcall *)(void *))MiFreeUnusedPfnPages;
        stru_1404684B0.Parameter = &MiSystemPartition;
        ExQueueWorkItem(&stru_1404684B0, DelayedWorkQueue);
        byte_140468544 = 1;
      }
      v13 = 259;
    }
    else
    {
      MiFreedUnusedPfnPagesWorker(a2);
      v13 = 0;
    }
    *(_DWORD *)(a2 + 16) = v13;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140468540);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
      KeGetCurrentIrql();
    __writecr8(2uLL);
    LOBYTE(v14) = v12;
    MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v14, v15, v16);
  }
  v19 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v20 = ~v19 & 0x80000000;
  if ( (v19 & 0x7FFFFFFF) != 0 )
  {
    v21[0] = 0;
    while ( 1 )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v20 )
        break;
      KeYieldProcessorEx(v21);
    }
  }
  else
  {
    result = v20 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  _InterlockedDecrement(a3);
  return result;
}
