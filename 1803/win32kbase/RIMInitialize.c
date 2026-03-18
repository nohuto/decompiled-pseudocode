/*
 * XREFs of RIMInitialize @ 0x1C00DE060
 * Callers:
 *     DriverEntry @ 0x1C01F1490 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?vInitRIMPnpThreadDelayBugCheckConfig@@YAXXZ @ 0x1C00DD9F4 (-vInitRIMPnpThreadDelayBugCheckConfig@@YAXXZ.c)
 *     rimInitAllHidParseDelayLoads @ 0x1C00F0FC0 (rimInitAllHidParseDelayLoads.c)
 *     rimLoadImage @ 0x1C00F112C (rimLoadImage.c)
 *     RIMReadTTMRegistrySettings @ 0x1C00F69A0 (RIMReadTTMRegistrySettings.c)
 */

__int64 RIMInitialize()
{
  gbRIMInitialized = 1;
  vInitRIMPnpThreadDelayBugCheckConfig();
  KeQueryPerformanceCounter(&gliQpcFreq);
  gDeadzoneLock = 0LL;
  qword_1C01A5F00 = 0LL;
  gObListLock = 0LL;
  qword_1C01A1640 = 0LL;
  gWatchDogQPCLock = 0LL;
  qword_1C01A1620 = 0LL;
  gTLCInfoLock = 0LL;
  qword_1C01A5EF0 = 0LL;
  gObRimList.Blink = &gObRimList;
  gObRimList.Flink = &gObRimList;
  qword_1C01A5EE0 = (__int64)&gObRimDevList;
  gObRimDevList = (__int64)&gObRimDevList;
  gObRimInputObserverList.Blink = &gObRimInputObserverList;
  gObRimInputObserverList.Flink = &gObRimInputObserverList;
  RawInputManagerObject::bTouchInputAllowed = 1;
  qword_1C01A5F20 = (__int64)&qword_1C01A5F18;
  qword_1C01A5F18 = (__int64)&qword_1C01A5F18;
  qword_1C01A5F30 = (__int64)&qword_1C01A5F28;
  qword_1C01A5F28 = (__int64)&qword_1C01A5F28;
  qword_1C01A5F10 = (__int64)&RawInputManagerObject::gHidRequestTable;
  RawInputManagerObject::gHidRequestTable = &RawInputManagerObject::gHidRequestTable;
  ghModHidParse = (void *)rimLoadImage();
  if ( ghModHidParse )
    rimInitAllHidParseDelayLoads();
  gInputObserverLock = 0LL;
  qword_1C01A1630 = 0LL;
  RIMReadTTMRegistrySettings();
  return 0LL;
}
