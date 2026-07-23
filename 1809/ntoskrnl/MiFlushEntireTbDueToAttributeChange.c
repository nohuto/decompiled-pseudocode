/*
 * XREFs of MiFlushEntireTbDueToAttributeChange @ 0x1400EF400
 * Callers:
 *     MiValidateInPage @ 0x14002EC10 (MiValidateInPage.c)
 *     MiChangePageAttributeBatch @ 0x1400823E0 (MiChangePageAttributeBatch.c)
 *     MiCopyPage @ 0x1400B1B90 (MiCopyPage.c)
 *     MiChangePageAttribute @ 0x1400EF9A0 (MiChangePageAttribute.c)
 *     MiCombiningInProgress @ 0x14013C4DC (MiCombiningInProgress.c)
 *     MiValidateSectionCreate @ 0x140653FD0 (MiValidateSectionCreate.c)
 *     MiRemovePhysicalMemory @ 0x14084E7AC (MiRemovePhysicalMemory.c)
 *     MiInitializeCacheFlushing @ 0x1409BD02C (MiInitializeCacheFlushing.c)
 * Callees:
 *     KeFlushTb @ 0x1400755A0 (KeFlushTb.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall MiFlushEntireTbDueToAttributeChange(__int64 a1)
{
  _BYTE v2[112]; // [rsp+20h] [rbp-88h] BYREF

  ++dword_14043B150;
  if ( VslVsmEnabled )
  {
    LOBYTE(a1) = 3;
    VslpEnterIumSecureMode(a1, 0LL, 0LL, v2);
  }
  return KeFlushTb(3u, 2u);
}
