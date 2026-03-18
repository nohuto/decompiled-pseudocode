/*
 * XREFs of MiFlushEntireTbDueToAttributeChange @ 0x140098A00
 * Callers:
 *     MiCopyPage @ 0x14002C9C0 (MiCopyPage.c)
 *     MiValidateInPage @ 0x14008D440 (MiValidateInPage.c)
 *     MiChangePageAttributeBatch @ 0x140098620 (MiChangePageAttributeBatch.c)
 *     MiChangePageAttribute @ 0x1400DA6CC (MiChangePageAttribute.c)
 *     MiCombiningInProgress @ 0x140144254 (MiCombiningInProgress.c)
 *     MiChangePageAttributeContiguous @ 0x14017D844 (MiChangePageAttributeContiguous.c)
 *     MiValidateSectionCreate @ 0x1406423A4 (MiValidateSectionCreate.c)
 *     MiRemovePhysicalMemory @ 0x140888720 (MiRemovePhysicalMemory.c)
 *     MiInitializeCacheFlushing @ 0x1409F1F7C (MiInitializeCacheFlushing.c)
 * Callees:
 *     KeFlushTb @ 0x1400997B0 (KeFlushTb.c)
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1401CE3E0 (HvcallpExtendedFastHypercall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 MiFlushEntireTbDueToAttributeChange()
{
  __int64 v1; // rcx
  _BYTE v2[112]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v3[4]; // [rsp+A0h] [rbp-38h] BYREF

  ++dword_1404657B8;
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
