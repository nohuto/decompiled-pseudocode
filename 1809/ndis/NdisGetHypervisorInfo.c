/*
 * XREFs of NdisGetHypervisorInfo @ 0x1C001E590
 * Callers:
 *     ndisMSetHDSplitAttributes @ 0x1C00C9F08 (ndisMSetHDSplitAttributes.c)
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisGetHypervisorInfo(PNDIS_HYPERVISOR_INFO HypervisorInfo)
{
  NDIS_STATUS v1; // r9d

  v1 = 0;
  if ( HypervisorInfo->Header.Size < 0xCu )
    return -1073676266;
  *(_QWORD *)&HypervisorInfo->Header.Type = 0LL;
  *(_QWORD *)&HypervisorInfo->Flags = 0LL;
  _RAX = 1LL;
  __asm { cpuid }
  HypervisorInfo->Header = (NDIS_OBJECT_HEADER)786816;
  HypervisorInfo->PartitionType = NdisHypervisorPartitionTypeUnknown;
  if ( (int)_RCX < 0 )
  {
    HypervisorInfo->Flags = 1;
    _RAX = 1073741825LL;
    __asm { cpuid }
    if ( (_DWORD)_RAX == 824407624 )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      HypervisorInfo->PartitionType = 2 - ((__PAIR64__(_RBX, _RAX) & 0x100000000000LL) != 0);
    }
  }
  return v1;
}
