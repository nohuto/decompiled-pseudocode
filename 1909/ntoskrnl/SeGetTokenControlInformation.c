/*
 * XREFs of SeGetTokenControlInformation @ 0x1408DFF14
 * Callers:
 *     SepCreateClientSecurityEx @ 0x1405DE7A0 (SepCreateClientSecurityEx.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x140884A94 (AlpcpQueryTokenModifiedIdMessage.c)
 *     SepUpdateSiloInClientSecurity @ 0x1408DFAB4 (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 */

void __fastcall SeGetTokenControlInformation(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax

  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 16);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 56);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
}
