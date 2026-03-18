/*
 * XREFs of ExAllocatePoolWithTagPriority @ 0x1400377B0
 * Callers:
 *     IopVerifierExAllocatePoolWithQuota @ 0x140037620 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopVerifierExAllocatePool @ 0x140088160 (IopVerifierExAllocatePool.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x1400883A4 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400884F4 (IopVerifierExAllocatePool_0.c)
 *     IopVerifierExAllocatePool_1 @ 0x1400BF668 (IopVerifierExAllocatePool_1.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x1400EEE18 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x140153A98 (IopVerifierExAllocatePoolWithQuota_2.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x1402996E0 (IopVerifierExAllocatePoolWithQuota_3.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x14029AD18 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     IopVerifierExAllocatePool_2 @ 0x14029AE38 (IopVerifierExAllocatePool_2.c)
 *     IopVerifierExAllocatePoolWithQuota_5 @ 0x14029AE80 (IopVerifierExAllocatePoolWithQuota_5.c)
 *     IopVerifierExAllocatePool_3 @ 0x14029B758 (IopVerifierExAllocatePool_3.c)
 *     IopVerifierExAllocatePool_4 @ 0x14029BFF4 (IopVerifierExAllocatePool_4.c)
 *     NtRemoveIoCompletionEx @ 0x140602AA0 (NtRemoveIoCompletionEx.c)
 *     IopQueryNameInternal @ 0x140629D54 (IopQueryNameInternal.c)
 *     IopAllocateMiniCompletionPacket @ 0x14068E21C (IopAllocateMiniCompletionPacket.c)
 *     NtQueryQuotaInformationFile @ 0x1408587D0 (NtQueryQuotaInformationFile.c)
 *     IoVerifierCheckForSettingsChange @ 0x1409628A4 (IoVerifierCheckForSettingsChange.c)
 *     VfInitVerifierComponents @ 0x140964C00 (VfInitVerifierComponents.c)
 *     VeAllocatePoolWithTagPriority @ 0x140971F50 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x140972730 (VerifierExAllocatePoolWithTagPriority.c)
 *     ViGrowPoolAllocation @ 0x140972AA4 (ViGrowPoolAllocation.c)
 *     VfPendingCheckForChanges @ 0x140972D08 (VfPendingCheckForChanges.c)
 *     VfKeCheckForChanges @ 0x14097911C (VfKeCheckForChanges.c)
 *     VfPoolInitPhase0 @ 0x14097D4B8 (VfPoolInitPhase0.c)
 *     VerifierPortExAllocatePoolWithTagPriority @ 0x140981ED0 (VerifierPortExAllocatePoolWithTagPriority.c)
 *     IopApplySystemPartitionProt @ 0x140A3A4B4 (IopApplySystemPartitionProt.c)
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x140037850 (ExpAllocatePoolWithTagFromNode.c)
 *     MmResourcesAvailable @ 0x14003A2E0 (MmResourcesAvailable.c)
 */

PVOID __stdcall ExAllocatePoolWithTagPriority(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        EX_POOL_PRIORITY Priority)
{
  char v4; // bl
  __int64 v8; // r9

  v4 = Priority;
  if ( Priority != HighPoolPriority
    && (PoolType & 2) == 0
    && !(unsigned int)MmResourcesAvailable(PoolType, NumberOfBytes, (unsigned int)Priority)
    && NumberOfBytes > 0xFE0 )
  {
    return 0LL;
  }
  v8 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  LODWORD(v8) = v8 | 0x80000000;
  return (PVOID)ExpAllocatePoolWithTagFromNode((unsigned int)PoolType, NumberOfBytes, Tag, v8, (v4 & 8) != 0);
}
