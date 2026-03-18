/*
 * XREFs of RIMInitialize @ 0x1C005DEA0
 * Callers:
 *     DriverEntry @ 0x1C0263740 (DriverEntry.c)
 * Callees:
 *     RIMReadTTMRegistrySettings @ 0x1C005DFC4 (RIMReadTTMRegistrySettings.c)
 *     rimInitAllHidParseDelayLoads @ 0x1C005E384 (rimInitAllHidParseDelayLoads.c)
 *     rimLoadImage @ 0x1C005E590 (rimLoadImage.c)
 *     ?vInitRIMPnpThreadDelayBugCheckConfig@@YAXXZ @ 0x1C005E824 (-vInitRIMPnpThreadDelayBugCheckConfig@@YAXXZ.c)
 */

__int64 RIMInitialize()
{
  __int64 result; // rax

  vInitRIMPnpThreadDelayBugCheckConfig();
  KeQueryPerformanceCounter(&gliQpcFreq);
  gDeadzoneLock = 0LL;
  qword_1C02152D8 = 0LL;
  gObListLock = 0LL;
  qword_1C0215788 = 0LL;
  gWatchDogQPCLock = 0LL;
  qword_1C02152A8 = 0LL;
  gTLCInfoLock = 0LL;
  qword_1C02152B8 = 0LL;
  gObRimList.Blink = &gObRimList;
  gObRimList.Flink = &gObRimList;
  qword_1C0215778 = (__int64)&gObRimDevList;
  gObRimDevList = (__int64)&gObRimDevList;
  gObRimInputObserverList.Blink = &gObRimInputObserverList;
  gObRimInputObserverList.Flink = &gObRimInputObserverList;
  qword_1C0215798 = (__int64)&RawInputManagerObject::gHidRequestTable;
  RawInputManagerObject::gHidRequestTable = &RawInputManagerObject::gHidRequestTable;
  qword_1C02157A8 = (__int64)&qword_1C02157A0;
  qword_1C02157A0 = (__int64)&qword_1C02157A0;
  qword_1C02157B8 = (__int64)&qword_1C02157B0;
  qword_1C02157B0 = (__int64)&qword_1C02157B0;
  RawInputManagerObject::bTouchInputAllowed = 1;
  ghModHidParse = (void *)rimLoadImage();
  if ( ghModHidParse )
    rimInitAllHidParseDelayLoads();
  gInputObserverLock = 0LL;
  qword_1C02152C8 = 0LL;
  RIMReadTTMRegistrySettings();
  result = 0LL;
  gbRIMInitialized = 1;
  return result;
}
