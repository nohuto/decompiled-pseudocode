/*
 * XREFs of MiGetSessionIdForVa @ 0x1400070B4
 * Callers:
 *     MiIssueHardFault @ 0x140007100 (MiIssueHardFault.c)
 *     MiResolveMappedFileFault @ 0x1400A5990 (MiResolveMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x1400A6A0C (MiCopyDataPageToImagePage.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 */

__int64 __fastcall MiGetSessionIdForVa(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1 < 0xFFFF800000000000uLL || (unsigned int)MiGetSystemRegionType(a1, a2, a3, a4) == 1 )
    return MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  else
    return 0xFFFFFFFFLL;
}
