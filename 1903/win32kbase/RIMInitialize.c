/*
 * XREFs of RIMInitialize @ 0x1C005C220
 * Callers:
 *     DriverEntry @ 0x1C0266500 (DriverEntry.c)
 * Callees:
 *     RIMReadTTMRegistrySettings @ 0x1C005C344 (RIMReadTTMRegistrySettings.c)
 *     rimInitAllHidParseDelayLoads @ 0x1C005C704 (rimInitAllHidParseDelayLoads.c)
 *     rimLoadImage @ 0x1C005C910 (rimLoadImage.c)
 *     ?vInitRIMPnpThreadDelayBugCheckConfig@@YAXXZ @ 0x1C005CBA4 (-vInitRIMPnpThreadDelayBugCheckConfig@@YAXXZ.c)
 */

__int64 RIMInitialize()
{
  __int64 result; // rax

  vInitRIMPnpThreadDelayBugCheckConfig();
  KeQueryPerformanceCounter(&gliQpcFreq);
  gDeadzoneLock = 0LL;
  qword_1C02182D8 = 0LL;
  gObListLock = 0LL;
  qword_1C0218788 = 0LL;
  gWatchDogQPCLock = 0LL;
  qword_1C02182A8 = 0LL;
  gTLCInfoLock = 0LL;
  qword_1C02182B8 = 0LL;
  gObRimList.Blink = &gObRimList;
  gObRimList.Flink = &gObRimList;
  qword_1C0218778 = (__int64)&gObRimDevList;
  gObRimDevList = (__int64)&gObRimDevList;
  gObRimInputObserverList.Blink = &gObRimInputObserverList;
  gObRimInputObserverList.Flink = &gObRimInputObserverList;
  qword_1C0218798 = (__int64)&RawInputManagerObject::gHidRequestTable;
  RawInputManagerObject::gHidRequestTable = &RawInputManagerObject::gHidRequestTable;
  qword_1C02187A8 = (__int64)&qword_1C02187A0;
  qword_1C02187A0 = (__int64)&qword_1C02187A0;
  qword_1C02187B8 = (__int64)&qword_1C02187B0;
  qword_1C02187B0 = (__int64)&qword_1C02187B0;
  RawInputManagerObject::bTouchInputAllowed = 1;
  ghModHidParse = (void *)rimLoadImage();
  if ( ghModHidParse )
    rimInitAllHidParseDelayLoads();
  gInputObserverLock = 0LL;
  qword_1C02182C8 = 0LL;
  RIMReadTTMRegistrySettings();
  result = 0LL;
  gbRIMInitialized = 1;
  return result;
}
