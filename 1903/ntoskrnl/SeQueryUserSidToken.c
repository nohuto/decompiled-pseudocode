/*
 * XREFs of SeQueryUserSidToken @ 0x1406431CC
 * Callers:
 *     ExpGetProcessInformation @ 0x1405F8B60 (ExpGetProcessInformation.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14063E8E8 (EtwQueryProcessTelemetryInfo.c)
 *     AlpcpQuerySidToken @ 0x1406402B8 (AlpcpQuerySidToken.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1406430F0 (ExpWnfQueryCurrentUserSID.c)
 *     AlpcpCheckConnectionSecurity @ 0x140645340 (AlpcpCheckConnectionSecurity.c)
 *     PspAssignProcessQuotaBlock @ 0x140667248 (PspAssignProcessQuotaBlock.c)
 *     PiDqOpenUserObjectRegKey @ 0x140667C28 (PiDqOpenUserObjectRegKey.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14069331C (PopEtGetProcessSidAndPackageIdentity.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406B1744 (AlpcpPortQueryConnectedSidInfo.c)
 *     CmpGetVirtualizationID @ 0x1406F5290 (CmpGetVirtualizationID.c)
 *     PiDqSameUserHive @ 0x140865A04 (PiDqSameUserHive.c)
 *     MiFindProcessImageHotPatchRecord @ 0x14088E284 (MiFindProcessImageHotPatchRecord.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     RtlCopySid @ 0x140644850 (RtlCopySid.c)
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
