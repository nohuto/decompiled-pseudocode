/*
 * XREFs of FreeObjOwner @ 0x1C0062D20
 * Callers:
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x1C006214C (AMLIRemoveNativeObjectsFromNamespace.c)
 *     FreeObjOwnerWorker @ 0x1C0062EA0 (FreeObjOwnerWorker.c)
 *     ParseUnload @ 0x1C0069850 (ParseUnload.c)
 *     AMLIInitialize @ 0x1C00B8B2C (AMLIInitialize.c)
 * Callees:
 *     HeapFree @ 0x1C0001FAC (HeapFree.c)
 */

__int64 __fastcall FreeObjOwner(__int64 a1, struct _EX_RUNDOWN_REF *a2)
{
  KIRQL v3; // al
  unsigned __int64 Count; // rbx
  bool v5; // al
  NTSTATUS v6; // ebx
  struct _KTIMER Timer; // [rsp+40h] [rbp-88h] BYREF
  struct _KDPC Dpc; // [rsp+80h] [rbp-48h] BYREF
  void *ThreadHandle; // [rsp+E0h] [rbp+18h] BYREF

  if ( (gdwfAMLI & 4) == 0 )
    goto LABEL_7;
  if ( a1 )
  {
    v3 = ExAcquireSpinLockShared(&ACPINamespaceLock);
    Count = a2[3].Count;
    ExReleaseSpinLockShared(&ACPINamespaceLock, v3);
    v5 = Count != 0;
  }
  else
  {
    v5 = 0;
  }
  if ( !v5 )
  {
    KeInitializeTimer(&Timer);
    KeInitializeDpc(&Dpc, FreeObjOwnerTimeout, a2);
    KeSetTimer(&Timer, (LARGE_INTEGER)-600000000LL, &Dpc);
    ExWaitForRundownProtectionRelease(a2 + 4);
    KeCancelTimer(&Timer);
LABEL_7:
    HeapFree(a2);
    return 0;
  }
  v6 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, FreeObjOwnerWorker, a2);
  if ( v6 >= 0 )
  {
    v6 = 32772;
    NtClose(ThreadHandle);
  }
  return (unsigned int)v6;
}
