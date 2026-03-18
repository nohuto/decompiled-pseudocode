/*
 * XREFs of PiDmListAddObjectWorker @ 0x140723A50
 * Callers:
 *     PiDmListAddList @ 0x14071BCE0 (PiDmListAddList.c)
 *     PiDmListAddObject @ 0x140723984 (PiDmListAddObject.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x140723B34 (PiDmListUpdateAggregationCountWorker.c)
 */

char *__fastcall PiDmListAddObjectWorker(int a1, struct _ERESOURCE *a2, __int64 a3, __int64 a4, char *a5)
{
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char v12; // si
  _QWORD *v13; // rax
  char *result; // rax

  v8 = 5LL * a1;
  v9 = (_QWORD *)(a4 + *((_QWORD *)&PiDmListDefs + v8 + 3));
  v10 = a3 + *((_QWORD *)&PiDmListDefs + v8 + 1);
  if ( *v9 )
  {
    v12 = 1;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v12 = 0;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(a2, 1u);
    ++*(_DWORD *)(a3 + 12);
    ExReleaseResourceLite(a2);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v13 = *(_QWORD **)(v10 + 8);
    if ( *v13 != v10 )
      __fastfail(3u);
    *v9 = v10;
    v9[1] = v13;
    *v13 = v9;
    *(_QWORD *)(v10 + 8) = v9;
    ++*(_DWORD *)(v10 + 16);
    PiDmListUpdateAggregationCountWorker(a3, a4, 1LL);
  }
  result = a5;
  if ( a5 )
    *a5 = v12;
  return result;
}
