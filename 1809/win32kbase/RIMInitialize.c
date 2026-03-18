/*
 * XREFs of RIMInitialize @ 0x1C0006BE0
 * Callers:
 *     DriverEntry @ 0x1C021CE90 (DriverEntry.c)
 * Callees:
 *     RIMReadTTMRegistrySettings @ 0x1C0006D14 (RIMReadTTMRegistrySettings.c)
 *     rimInitAllHidParseDelayLoads @ 0x1C0006FC4 (rimInitAllHidParseDelayLoads.c)
 *     rimLoadImage @ 0x1C00071D8 (rimLoadImage.c)
 *     ?vInitRIMPnpThreadDelayBugCheckConfig@@YAXXZ @ 0x1C0007448 (-vInitRIMPnpThreadDelayBugCheckConfig@@YAXXZ.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 RIMInitialize()
{
  __int64 result; // rax

  vInitRIMPnpThreadDelayBugCheckConfig();
  KeQueryPerformanceCounter(&gliQpcFreq);
  gDeadzoneLock = 0LL;
  qword_1C01D0C28 = 0LL;
  gObListLock = 0LL;
  qword_1C01D0F90 = 0LL;
  gWatchDogQPCLock = 0LL;
  qword_1C01D0C18 = 0LL;
  gTLCInfoLock = 0LL;
  qword_1C01D0BF8 = 0LL;
  gObRimList.Blink = &gObRimList;
  gObRimList.Flink = &gObRimList;
  qword_1C01D0BD8 = (__int64)&gObRimDevList;
  gObRimDevList = (__int64)&gObRimDevList;
  gObRimInputObserverList.Blink = &gObRimInputObserverList;
  gObRimInputObserverList.Flink = &gObRimInputObserverList;
  RawInputManagerObject::bTouchInputAllowed = 1;
  qword_1C01D0C48 = (__int64)&qword_1C01D0C40;
  qword_1C01D0C40 = (__int64)&qword_1C01D0C40;
  qword_1C01D0C58 = (__int64)&qword_1C01D0C50;
  qword_1C01D0C50 = (__int64)&qword_1C01D0C50;
  qword_1C01D0C38 = (__int64)&RawInputManagerObject::gHidRequestTable;
  RawInputManagerObject::gHidRequestTable = &RawInputManagerObject::gHidRequestTable;
  ghModHidParse = (void *)rimLoadImage();
  if ( ghModHidParse )
    rimInitAllHidParseDelayLoads();
  gInputObserverLock = 0LL;
  qword_1C01D0C08 = 0LL;
  RIMReadTTMRegistrySettings();
  result = 0LL;
  gbRIMInitialized = 1;
  return result;
}
