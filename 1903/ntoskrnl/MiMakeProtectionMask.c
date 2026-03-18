/*
 * XREFs of MiMakeProtectionMask @ 0x140050400
 * Callers:
 *     MiInitializePoolCommitPacket @ 0x140022864 (MiInitializePoolCommitPacket.c)
 *     MiSetProtectionOnSection @ 0x14004E5E0 (MiSetProtectionOnSection.c)
 *     MmSetAddressRangeModifiedEx @ 0x14005E4D0 (MmSetAddressRangeModifiedEx.c)
 *     MmAllocateContiguousNodeMemory @ 0x140117B90 (MmAllocateContiguousNodeMemory.c)
 *     MmMapIoSpaceEx @ 0x140118AB0 (MmMapIoSpaceEx.c)
 *     MmProtectPool @ 0x140124AE4 (MmProtectPool.c)
 *     MmSetPageProtection @ 0x14012E5D0 (MmSetPageProtection.c)
 *     MmProtectMdlSystemAddress @ 0x1402C15B0 (MmProtectMdlSystemAddress.c)
 *     MmMapMdl @ 0x1402C5460 (MmMapMdl.c)
 *     MmAllocateSecureKernelPages @ 0x1402DD0C0 (MmAllocateSecureKernelPages.c)
 *     MiInitializeCreateSectionPacket @ 0x1405D71D0 (MiInitializeCreateSectionPacket.c)
 *     MiAllocateVirtualMemory @ 0x140603140 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x140603900 (NtProtectVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1406040D0 (MmProtectVirtualMemory.c)
 *     MiMapViewOfSectionCommon @ 0x140608400 (MiMapViewOfSectionCommon.c)
 *     MiMapViewOfSection @ 0x140608D80 (MiMapViewOfSection.c)
 *     MiValidateAllocationType @ 0x140678070 (MiValidateAllocationType.c)
 *     MiCopyPagesIntoEnclave @ 0x140893384 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408943C0 (MiLoadDataIntoVsmEnclave.c)
 *     MmUpdateSlabRangeProtection @ 0x140A3D058 (MmUpdateSlabRangeProtection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeProtectionMask(unsigned int a1)
{
  char v1; // dl
  __int64 result; // rax

  if ( a1 >= 0x800 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 0xF) != 0 )
  {
    if ( (a1 & 0xF0) != 0 )
      return 0xFFFFFFFFLL;
    v1 = MmUserProtectionToMask1[a1 & 0xF];
  }
  else
  {
    if ( !((unsigned __int8)a1 >> 4) )
      return 0xFFFFFFFFLL;
    v1 = MmUserProtectionToMask2[(unsigned __int8)a1 >> 4];
  }
  result = (unsigned int)v1;
  if ( (_DWORD)result == -1 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 0x700) == 0 )
    return result;
  if ( (a1 & 0x100) != 0 )
  {
    if ( (_DWORD)result != 24 && (a1 & 0x600) == 0 )
    {
      result = (unsigned int)result | 0x10;
      goto LABEL_14;
    }
    return 0xFFFFFFFFLL;
  }
LABEL_14:
  if ( (a1 & 0x200) != 0 )
  {
    if ( (_DWORD)result != 24 && (a1 & 0x400) == 0 )
      return (unsigned int)result | 8;
    return 0xFFFFFFFFLL;
  }
  if ( (a1 & 0x400) != 0 )
  {
    if ( (_DWORD)result != 24 && (result & 2) == 0 )
      return (unsigned int)result | 0x18;
    return 0xFFFFFFFFLL;
  }
  return result;
}
