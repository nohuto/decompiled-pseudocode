/*
 * XREFs of MiMakeProtectionMask @ 0x1400744A0
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     MiCommitExistingVad @ 0x140071470 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140071E80 (MiSetProtectionOnSection.c)
 *     MmSetAddressRangeModifiedEx @ 0x140086780 (MmSetAddressRangeModifiedEx.c)
 *     MiCommitPoolMemory @ 0x140099590 (MiCommitPoolMemory.c)
 *     MmMapIoSpaceEx @ 0x1400E5D40 (MmMapIoSpaceEx.c)
 *     MmAllocateContiguousNodeMemory @ 0x1400E6460 (MmAllocateContiguousNodeMemory.c)
 *     MmSetPageProtection @ 0x140133560 (MmSetPageProtection.c)
 *     MmProtectMdlSystemAddress @ 0x1402A9B70 (MmProtectMdlSystemAddress.c)
 *     MmMapMdl @ 0x1402AD760 (MmMapMdl.c)
 *     MmAllocateSecureKernelPages @ 0x1402C2D4C (MmAllocateSecureKernelPages.c)
 *     MiInitializeCreateSectionPacket @ 0x1405DDDB0 (MiInitializeCreateSectionPacket.c)
 *     MiValidateAllocationType @ 0x1405ED550 (MiValidateAllocationType.c)
 *     MiAllocateVirtualMemory @ 0x1405ED650 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1405EDD70 (NtProtectVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1405EDFD0 (MmProtectVirtualMemory.c)
 *     MiMapViewOfSection @ 0x1405EFB10 (MiMapViewOfSection.c)
 *     MiMapViewOfSectionCommon @ 0x140677210 (MiMapViewOfSectionCommon.c)
 *     MiCopyPagesIntoEnclave @ 0x1408594AC (MiCopyPagesIntoEnclave.c)
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
