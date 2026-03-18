/*
 * XREFs of sub_14090C104 @ 0x14090C104
 * Callers:
 *     ExpTimeRefreshWork @ 0x14059D9D0 (ExpTimeRefreshWork.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x1406A2320 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExUpdateLicenseDataInternal @ 0x1406A2590 (ExUpdateLicenseDataInternal.c)
 *     ExInitLicenseData @ 0x140A0E14C (ExInitLicenseData.c)
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 */

NTSTATUS __fastcall sub_14090C104(PCEVENT_DESCRIPTOR EventDescriptor)
{
  NTSTATUS result; // eax

  if ( EtwKernelProvRegHandle )
    return EtwWrite(EtwKernelProvRegHandle, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
