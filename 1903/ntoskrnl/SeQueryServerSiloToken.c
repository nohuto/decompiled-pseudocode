/*
 * XREFs of SeQueryServerSiloToken @ 0x1406DDE80
 * Callers:
 *     SepCreateClientSecurityEx @ 0x1405DE000 (SepCreateClientSecurityEx.c)
 *     NtCreateUserProcess @ 0x140615E10 (NtCreateUserProcess.c)
 *     SepUpdateSiloInClientSecurity @ 0x1408E01B4 (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     PsGetSiloBySessionId @ 0x1405BBD6C (PsGetSiloBySessionId.c)
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
