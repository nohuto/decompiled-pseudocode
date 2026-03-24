/*
 * XREFs of SeQueryUserSidToken @ 0x1406102AC
 * Callers:
 *     ExpGetProcessInformation @ 0x1405E6B60 (ExpGetProcessInformation.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1406101D0 (ExpWnfQueryCurrentUserSID.c)
 *     AlpcpCheckConnectionSecurity @ 0x140613280 (AlpcpCheckConnectionSecurity.c)
 *     PspAssignProcessQuotaBlock @ 0x14065A134 (PspAssignProcessQuotaBlock.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14068EB8C (AlpcpPortQueryConnectedSidInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14069F4CC (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406A4C80 (EtwQueryProcessTelemetryInfo.c)
 *     AlpcpQuerySidToken @ 0x1406B577C (AlpcpQuerySidToken.c)
 *     PiDqOpenUserObjectRegKey @ 0x1406D9C80 (PiDqOpenUserObjectRegKey.c)
 *     CmpGetVirtualizationID @ 0x1407F3544 (CmpGetVirtualizationID.c)
 *     PiDqSameUserHive @ 0x14082B22C (PiDqSameUserHive.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140854E18 (MiFindProcessImageHotPatchRecord.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     RtlCopySid @ 0x140649190 (RtlCopySid.c)
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
