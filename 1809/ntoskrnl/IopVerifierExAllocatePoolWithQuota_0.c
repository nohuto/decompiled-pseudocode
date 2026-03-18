/*
 * XREFs of IopVerifierExAllocatePoolWithQuota_0 @ 0x140101D18
 * Callers:
 *     NtWriteFile @ 0x140638C40 (NtWriteFile.c)
 *     NtReadFile @ 0x14063A140 (NtReadFile.c)
 *     IopTrackLink @ 0x14068BD48 (IopTrackLink.c)
 *     NtWriteFileGather @ 0x1406CC880 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406CD3B0 (NtReadFileScatter.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14081AC5C (IopSetEaOrQuotaInformationFile.c)
 *     IopValidateJunctionTarget @ 0x14081B6DC (IopValidateJunctionTarget.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400B7650 (ExAllocatePoolWithQuotaTag.c)
 *     ExAllocatePoolWithTagPriority @ 0x1400FD810 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x140128E70 (RtlRaiseStatus.c)
 */

PVOID __fastcall IopVerifierExAllocatePoolWithQuota_0(POOL_TYPE a1, SIZE_T a2)
{
  PVOID result; // rax

  if ( !ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithQuotaTag(a1, a2, 0x20206F49u);
  result = ExAllocatePoolWithTagPriority(a1, a2, 0x20206F49u, (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
