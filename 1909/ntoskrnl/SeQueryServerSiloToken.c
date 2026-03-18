/*
 * XREFs of SeQueryServerSiloToken @ 0x1406DF270
 * Callers:
 *     SepCreateClientSecurityEx @ 0x1405DE7A0 (SepCreateClientSecurityEx.c)
 *     NtCreateUserProcess @ 0x140617920 (NtCreateUserProcess.c)
 *     SepUpdateSiloInClientSecurity @ 0x1408DFAB4 (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     PsGetSiloBySessionId @ 0x1405BC14C (PsGetSiloBySessionId.c)
 */

__int64 __fastcall SeQueryServerSiloToken(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v5 = *(_DWORD *)(a1 + 120);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  return PsGetSiloBySessionId(v5, a2);
}
