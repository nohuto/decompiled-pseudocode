/*
 * XREFs of ObDereferenceDeviceMap @ 0x140652C88
 * Callers:
 *     PspProcessDelete @ 0x140651970 (PspProcessDelete.c)
 *     PspAssignPrimaryToken @ 0x14074AF20 (PspAssignPrimaryToken.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x1400065B0 (PsGetProcessServerSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     PsGetServerSiloGlobals @ 0x1400C9B10 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceDeviceMap @ 0x1405D16F0 (ObfDereferenceDeviceMap.c)
 */

void __fastcall ObDereferenceDeviceMap(__int64 a1)
{
  __int64 ProcessServerSilo; // rax
  void *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rdx
  ULONG_PTR v5; // rbx
  void *v6; // rsi

  ProcessServerSilo = PsGetProcessServerSilo(a1);
  ServerSiloGlobals = PsGetServerSiloGlobals(ProcessServerSilo);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (ULONG_PTR)ServerSiloGlobals + 120;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)ServerSiloGlobals + 120, 0LL);
  v6 = *(void **)(a1 + 1072);
  *(_QWORD *)(a1 + 1072) = 0LL;
  ExReleasePushLockEx(v5, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v6 )
    ObfDereferenceDeviceMap(v6);
}
