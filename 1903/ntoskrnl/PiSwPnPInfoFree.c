/*
 * XREFs of PiSwPnPInfoFree @ 0x140780AC0
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x14071EF0C (PiSwIrpStartCreateWorker.c)
 *     PiSwProcessRemove @ 0x14078083C (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x140780A24 (PiSwDeviceFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x14087089C (PiSwQueuedCreateInfoFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwPnPInfoFree(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x57706E50u);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x57706E50u);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v4 = *(void **)(a1 + 16);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x57706E50u);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  v5 = *(void **)(a1 + 24);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x57706E50u);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  v6 = *(void **)(a1 + 32);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x57706E50u);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
}
