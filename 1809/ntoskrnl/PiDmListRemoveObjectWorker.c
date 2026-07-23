/*
 * XREFs of PiDmListRemoveObjectWorker @ 0x14082A9A8
 * Callers:
 *     PiDmListRemoveList @ 0x14082A77C (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x14082A8DC (PiDmListRemoveObject.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140006CA0 (RtlDeleteElementGenericTableAvl.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PiDmObjectRelease @ 0x140599D30 (PiDmObjectRelease.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x140703CD8 (PiDmListUpdateAggregationCountWorker.c)
 */

bool *__fastcall PiDmListRemoveObjectWorker(int a1, __int64 a2, unsigned int *a3, __int64 a4, bool *a5)
{
  __int64 v7; // r9
  __int64 *v8; // rcx
  __int64 v9; // rdx
  bool v10; // di
  __int64 **v11; // rax
  struct _KTHREAD *CurrentThread; // rax
  bool *result; // rax
  unsigned int *Buffer; // [rsp+40h] [rbp+18h] BYREF

  Buffer = a3;
  v7 = *((_QWORD *)&PiDmListDefs + 5 * a1 + 1);
  v8 = (__int64 *)(a4 + *((_QWORD *)&PiDmListDefs + 5 * a1 + 3));
  v9 = *v8;
  v10 = *v8 != 0;
  if ( *v8 )
  {
    if ( *(__int64 **)(v9 + 8) != v8 || (v11 = (__int64 **)v8[1], *v11 != v8) )
      __fastfail(3u);
    *v11 = (__int64 *)v9;
    *(_QWORD *)(v9 + 8) = v11;
    --*(unsigned int *)((char *)a3 + v7 + 16);
    *v8 = 0LL;
    v8[1] = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)a2, 1u);
    if ( !--Buffer[3] )
    {
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a2 + 104), &Buffer);
      PiDmObjectRelease(Buffer);
    }
    ExReleaseResourceLite((PERESOURCE)a2);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    PiDmListUpdateAggregationCountWorker((__int64)Buffer, a4, -1);
  }
  result = a5;
  if ( a5 )
    *a5 = v10;
  return result;
}
