/*
 * XREFs of ACPIEcUnmaskInterrupt @ 0x1C0051ABC
 * Callers:
 *     ACPIEcGpioDpcRoutine @ 0x1C0051790 (ACPIEcGpioDpcRoutine.c)
 *     ACPIEcServiceDevice @ 0x1C0052624 (ACPIEcServiceDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     ACPIVectorEnable @ 0x1C005EBD0 (ACPIVectorEnable.c)
 */

__int64 __fastcall ACPIEcUnmaskInterrupt(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 805) )
    return HalPrivateDispatchTable[61](*(unsigned int *)(a1 + 900), 2LL);
  else
    return ACPIVectorEnable(0LL, *(_QWORD *)(a1 + 72));
}
