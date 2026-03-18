/*
 * XREFs of SeQueryUserSidToken @ 0x140656D1C
 * Callers:
 *     ExpGetProcessInformation @ 0x1405F9BB0 (ExpGetProcessInformation.c)
 *     AlpcpQuerySidToken @ 0x140653E08 (AlpcpQuerySidToken.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140656C40 (ExpWnfQueryCurrentUserSID.c)
 *     AlpcpCheckConnectionSecurity @ 0x140658E90 (AlpcpCheckConnectionSecurity.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14068688C (PopEtGetProcessSidAndPackageIdentity.c)
 *     PspAssignProcessQuotaBlock @ 0x140694668 (PspAssignProcessQuotaBlock.c)
 *     PiDqOpenUserObjectRegKey @ 0x140695048 (PiDqOpenUserObjectRegKey.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406B46E4 (AlpcpPortQueryConnectedSidInfo.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406C9A78 (EtwQueryProcessTelemetryInfo.c)
 *     CmpGetVirtualizationID @ 0x1406F7000 (CmpGetVirtualizationID.c)
 *     PiDqSameUserHive @ 0x140865104 (PiDqSameUserHive.c)
 *     MiFindProcessImageHotPatchRecord @ 0x14088DAA4 (MiFindProcessImageHotPatchRecord.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     RtlCopySid @ 0x1406583A0 (RtlCopySid.c)
 */

__int64 __fastcall SeQueryUserSidToken(__int64 a1, void *a2, ULONG a3, ULONG *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebp
  unsigned __int8 *v10; // r8
  ULONG v11; // edi

  CurrentThread = KeGetCurrentThread();
  v9 = -1073741789;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v10 = **(unsigned __int8 ***)(a1 + 152);
  v11 = 4 * v10[1] + 8;
  if ( a3 >= v11 )
  {
    RtlCopySid(v11, a2, v10);
    v9 = 0;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  if ( a4 )
    *a4 = v11;
  return v9;
}
