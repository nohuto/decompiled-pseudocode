/*
 * XREFs of SeGetTokenControlInformation @ 0x1408A1D1C
 * Callers:
 *     SepCreateClientSecurityEx @ 0x140631EC0 (SepCreateClientSecurityEx.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x140849E84 (AlpcpQueryTokenModifiedIdMessage.c)
 *     SepUpdateSiloInClientSecurity @ 0x1408A18F4 (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
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
