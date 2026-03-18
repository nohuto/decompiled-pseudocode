/*
 * XREFs of MiUserPdeOrAbove @ 0x1400F962C
 * Callers:
 *     MiMakePageAvoidRead @ 0x1400348E0 (MiMakePageAvoidRead.c)
 *     MiPfnShareCountIsZero @ 0x1400382F0 (MiPfnShareCountIsZero.c)
 *     MiResolveTransitionFault @ 0x14003AC00 (MiResolveTransitionFault.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiCompletePrivateZeroFault @ 0x140047940 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     MiFillSystemPtes @ 0x14005C300 (MiFillSystemPtes.c)
 *     MiSetProtectionOnSection @ 0x140071E80 (MiSetProtectionOnSection.c)
 *     MmCheckCachedPageStates @ 0x1400B0290 (MmCheckCachedPageStates.c)
 *     MiCopyPage @ 0x1400B1C30 (MiCopyPage.c)
 *     MiRevertValidPte @ 0x1400B2340 (MiRevertValidPte.c)
 *     MiMapPagesToZero @ 0x1400F90C0 (MiMapPagesToZero.c)
 *     MiUnlinkStandbyBatch @ 0x140105CB0 (MiUnlinkStandbyBatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUserPdeOrAbove(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // r8
  unsigned int i; // r9d

  v1 = 0xFFFFF6FB40000000uLL;
  v2 = 0xFFFFF6FB5FFFFFF8uLL;
  for ( i = 1; i < 4; ++i )
  {
    if ( a1 <= v2 && a1 >= v1 )
      return 1LL;
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  return 0LL;
}
