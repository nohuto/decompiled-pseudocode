/*
 * XREFs of ObDereferenceDeviceMap @ 0x140671E58
 * Callers:
 *     PspProcessDelete @ 0x140670B40 (PspProcessDelete.c)
 *     PspAssignPrimaryToken @ 0x140780184 (PspAssignPrimaryToken.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140006520 (PsGetProcessServerSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     PsGetServerSiloGlobals @ 0x14008D470 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceDeviceMap @ 0x1405D11F0 (ObfDereferenceDeviceMap.c)
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
