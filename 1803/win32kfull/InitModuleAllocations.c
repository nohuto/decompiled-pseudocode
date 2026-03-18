/*
 * XREFs of InitModuleAllocations @ 0x1C01114C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitLogQMsg@@YAXXZ @ 0x1C0111560 (-InitLogQMsg@@YAXXZ.c)
 *     InitQMiPTrace @ 0x1C01ABCA8 (InitQMiPTrace.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitModuleAllocations()
{
  __int64 result; // rax

  InitLogQMsg();
  FastGetProfileDword(0LL, 2LL, L"USERPostMortemLogging", (unsigned int)gdwPostMortemLogging, &gdwPostMortemLogging);
  if ( (gdwPostMortemLogging & 1) != 0 )
    InitQMiPTrace();
  if ( (gdwPostMortemLogging & 2) != 0 )
  {
    gdwAtomicCheckLogSize = 12;
    gpAtomickCheckStacks = Win32AllocPoolZInit(768LL, 1297118037LL);
  }
  if ( (gdwPostMortemLogging & 4) != 0 )
  {
    gpLinkWindowLog = (struct LINKWINDOW_LOG *)Win32AllocPoolZInit(8704LL, 1297118037LL);
    guiLinkWindowLogSize = 64;
  }
  FastGetProfileDword(0LL, 2LL, L"USERExtraInstrumentations", gdwExtraInstrumentations, gdwExtraInstrumentations);
  result = gdwExtraInstrumentations;
  if ( (gdwExtraInstrumentations & 4) != 0 )
  {
    result = gfRecordPnpNotification;
    gfRecordPnpNotification = 1;
  }
  return result;
}
