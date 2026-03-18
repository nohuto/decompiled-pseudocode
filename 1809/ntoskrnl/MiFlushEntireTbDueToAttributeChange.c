/*
 * XREFs of MiFlushEntireTbDueToAttributeChange @ 0x1400EF360
 * Callers:
 *     MiValidateInPage @ 0x14002EC10 (MiValidateInPage.c)
 *     MiChangePageAttributeBatch @ 0x1400823F0 (MiChangePageAttributeBatch.c)
 *     MiCopyPage @ 0x1400B1C30 (MiCopyPage.c)
 *     MiChangePageAttribute @ 0x1400EF900 (MiChangePageAttribute.c)
 *     MiCombiningInProgress @ 0x14013C3BC (MiCombiningInProgress.c)
 *     MiValidateSectionCreate @ 0x140652E30 (MiValidateSectionCreate.c)
 *     MiRemovePhysicalMemory @ 0x14084D56C (MiRemovePhysicalMemory.c)
 *     MiInitializeCacheFlushing @ 0x1409BC02C (MiInitializeCacheFlushing.c)
 * Callees:
 *     KeFlushTb @ 0x1400755B0 (KeFlushTb.c)
 *     VslpEnterIumSecureMode @ 0x140129C90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 */

__int64 __fastcall MiFlushEntireTbDueToAttributeChange(__int64 a1)
{
  _BYTE v2[112]; // [rsp+20h] [rbp-88h] BYREF

  ++dword_14043A090;
  if ( VslVsmEnabled )
  {
    LOBYTE(a1) = 3;
    VslpEnterIumSecureMode(a1, 0LL, 0LL, v2);
  }
  return KeFlushTb(3u, 2u);
}
