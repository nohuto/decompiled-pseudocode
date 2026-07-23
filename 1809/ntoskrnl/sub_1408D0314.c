/*
 * XREFs of sub_1408D0314 @ 0x1408D0314
 * Callers:
 *     ExpTimeRefreshWork @ 0x14056F0E0 (ExpTimeRefreshWork.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x1405A1888 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExUpdateLicenseDataInternal @ 0x1405A1AD0 (ExUpdateLicenseDataInternal.c)
 *     ExInitLicenseData @ 0x1409C53A0 (ExInitLicenseData.c)
 * Callees:
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 */

NTSTATUS __fastcall sub_1408D0314(PCEVENT_DESCRIPTOR EventDescriptor)
{
  NTSTATUS result; // eax

  if ( EtwKernelProvRegHandle )
    return EtwWrite(EtwKernelProvRegHandle, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
