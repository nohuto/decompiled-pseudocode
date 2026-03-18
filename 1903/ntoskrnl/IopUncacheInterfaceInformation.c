/*
 * XREFs of IopUncacheInterfaceInformation @ 0x14071829C
 * Callers:
 *     IopDestroyDeviceNode @ 0x1406A24D0 (IopDestroyDeviceNode.c)
 *     PipProcessStartPhase1 @ 0x140717F78 (PipProcessStartPhase1.c)
 *     IopRemoveDevice @ 0x1407308C4 (IopRemoveDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x1401091E0 (KeReleaseSemaphore.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall IopUncacheInterfaceInformation(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  _QWORD *v8; // rbx
  _QWORD *v9; // r14
  __int64 v10; // rbp
  void *v11; // r14
  __int64 v12; // rbp
  void *v13; // r12

  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  }
  if ( a1 )
    v5 = *(_QWORD **)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = v5 + 61;
  v7 = (_QWORD *)v5[61];
  while ( v7 != v6 )
  {
    v10 = v7[3];
    v11 = v7;
    if ( v10 )
    {
      (*(void (__fastcall **)(_QWORD))(v10 + 24))(*(_QWORD *)(v10 + 8));
      ExFreePoolWithTag((PVOID)v10, 0);
    }
    v7 = (_QWORD *)*v7;
    ExFreePoolWithTag(v11, 0);
  }
  v8 = v5 + 63;
  v9 = (_QWORD *)v5[63];
  while ( v9 != v8 )
  {
    v12 = v9[3];
    v13 = v9;
    if ( v12 )
    {
      (*(void (__fastcall **)(_QWORD))(v12 + 24))(*(_QWORD *)(v12 + 8));
      ExFreePoolWithTag((PVOID)v12, 0);
    }
    v9 = (_QWORD *)*v9;
    ExFreePoolWithTag(v13, 0);
  }
  v5[62] = v5 + 61;
  *v6 = v6;
  v5[64] = v5 + 63;
  *v8 = v8;
  v5[65] = 0LL;
  if ( a2 )
  {
    KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
}
