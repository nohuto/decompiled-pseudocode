/*
 * XREFs of MiFlushEntireTbDueToAttributeChange @ 0x1400B8B90
 * Callers:
 *     MiCopyPage @ 0x14002C5D0 (MiCopyPage.c)
 *     MiValidateInPage @ 0x140098340 (MiValidateInPage.c)
 *     MiChangePageAttributeBatch @ 0x1400B87B0 (MiChangePageAttributeBatch.c)
 *     MiChangePageAttribute @ 0x1400F218C (MiChangePageAttribute.c)
 *     MiCombiningInProgress @ 0x140143D14 (MiCombiningInProgress.c)
 *     MiChangePageAttributeContiguous @ 0x14017D154 (MiChangePageAttributeContiguous.c)
 *     MiValidateSectionCreate @ 0x14065BE44 (MiValidateSectionCreate.c)
 *     MiRemovePhysicalMemory @ 0x140888F00 (MiRemovePhysicalMemory.c)
 *     MiInitializeCacheFlushing @ 0x1409F206C (MiInitializeCacheFlushing.c)
 * Callees:
 *     KeFlushTb @ 0x1400B9940 (KeFlushTb.c)
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1401CD860 (HvcallpExtendedFastHypercall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 MiFlushEntireTbDueToAttributeChange()
{
  __int64 v1; // rcx
  _BYTE v2[112]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v3[4]; // [rsp+A0h] [rbp-38h] BYREF

  ++dword_140465AB8;
  if ( VslVsmEnabled )
  {
    if ( (HvlEnlightenments & 0x4000000) != 0 )
    {
      v3[0] = 0LL;
      v3[2] = 0LL;
      v3[1] = 531LL;
      HvcallpExtendedFastHypercall(65538LL, v3, 24LL);
    }
    else
    {
      memset(v2, 0, 0x68uLL);
      LOBYTE(v1) = 3;
      VslpEnterIumSecureMode(v1, 0LL, 0LL, v2);
    }
  }
  return KeFlushTb(3LL, 2LL);
}
