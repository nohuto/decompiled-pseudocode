/*
 * XREFs of PopInitializePowerButtonHold @ 0x1409B4CBC
 * Callers:
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1400F2A84 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     PopOpenKey @ 0x140178C54 (PopOpenKey.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopInitializeWorkItem @ 0x14072AA34 (PopInitializeWorkItem.c)
 *     PopPowerButtonBugcheckConfigure @ 0x14072AAF0 (PopPowerButtonBugcheckConfigure.c)
 */

void __fastcall PopInitializePowerButtonHold(int a1)
{
  HANDLE KeyHandle; // [rsp+48h] [rbp+10h] BYREF

  if ( a1 )
  {
    if ( a1 == 1 && (int)PopOpenKey(&KeyHandle, L"Control\\Power", 0x11u) >= 0 )
    {
      *(_QWORD *)PopPowerButtonBugcheckWatchWorkItem = 0LL;
      qword_1404110F0 = (__int64)PopPowerButtonBugcheckWatchCallback;
      qword_1404110F8 = (__int64)KeyHandle;
      PopPowerButtonBugcheckConfigure(KeyHandle);
    }
  }
  else
  {
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (__int64)&Feature_PdttSupport__private_propertyCache,
      16157197LL,
      (__int64)&Feature_PdttSupport_logged_traits,
      0,
      3);
    PopAcpiPdttSupportEnabled = 0;
    PopPowerButtonBugcheckConfig = 0;
    PopPowerButtonBugcheckLock = 0LL;
    memset(&PopPowerButtonHold, 0, 0xD0uLL);
    memset(&PopPowerButtonTriageBlock, 0, 0x70uLL);
    dword_140411250 = 0;
    dword_140411254 = 0;
    PopPowerButtonHold = 0LL;
    qword_140411260 = (__int64)&PopBlackBoxEntries;
    LODWORD(PopPowerButtonTriageBlock) = 2;
    dword_140411268 = 15;
    PopInitializeWorkItem((__int64)&unk_1404111B0, (__int64)PopPowerButtonWorkCallback, 0LL);
  }
}
