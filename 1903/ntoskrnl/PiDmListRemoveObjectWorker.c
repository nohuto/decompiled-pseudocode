/*
 * XREFs of PiDmListRemoveObjectWorker @ 0x140863F04
 * Callers:
 *     PiDmListRemoveList @ 0x140863CCC (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140863E38 (PiDmListRemoveObject.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140001CA0 (RtlDeleteElementGenericTableAvl.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     PiDmObjectRelease @ 0x1405BED44 (PiDmObjectRelease.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x140723B34 (PiDmListUpdateAggregationCountWorker.c)
 */

char *__fastcall PiDmListRemoveObjectWorker(int a1, __int64 a2, unsigned int *a3, __int64 a4, char *a5)
{
  __int64 v7; // r9
  __int64 *v8; // rcx
  __int64 v9; // rdx
  char v10; // bl
  __int64 **v11; // rax
  struct _KTHREAD *CurrentThread; // rax
  char *result; // rax
  unsigned int *Buffer; // [rsp+40h] [rbp+18h] BYREF

  Buffer = a3;
  v7 = *((_QWORD *)&PiDmListDefs + 5 * a1 + 1);
  v8 = (__int64 *)(a4 + *((_QWORD *)&PiDmListDefs + 5 * a1 + 3));
  v9 = *v8;
  if ( *v8 )
  {
    v10 = 1;
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    PiDmListUpdateAggregationCountWorker((__int64)Buffer, a4, -1);
  }
  else
  {
    v10 = 0;
  }
  result = a5;
  if ( a5 )
    *a5 = v10;
  return result;
}
