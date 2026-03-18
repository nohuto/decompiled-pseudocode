/*
 * XREFs of SeQueryUserSidToken @ 0x1406102AC
 * Callers:
 *     ExpGetProcessInformation @ 0x1405E6B60 (ExpGetProcessInformation.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1406101D0 (ExpWnfQueryCurrentUserSID.c)
 *     AlpcpCheckConnectionSecurity @ 0x140613280 (AlpcpCheckConnectionSecurity.c)
 *     PspAssignProcessQuotaBlock @ 0x14065A154 (PspAssignProcessQuotaBlock.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14068EBAC (AlpcpPortQueryConnectedSidInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14069F4EC (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406A4CA0 (EtwQueryProcessTelemetryInfo.c)
 *     AlpcpQuerySidToken @ 0x1406B579C (AlpcpQuerySidToken.c)
 *     PiDqOpenUserObjectRegKey @ 0x1406D9CA0 (PiDqOpenUserObjectRegKey.c)
 *     CmpGetVirtualizationID @ 0x1407F3564 (CmpGetVirtualizationID.c)
 *     PiDqSameUserHive @ 0x14082B24C (PiDqSameUserHive.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140854E38 (MiFindProcessImageHotPatchRecord.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     RtlCopySid @ 0x1406491B0 (RtlCopySid.c)
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
