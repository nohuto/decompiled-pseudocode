/*
 * XREFs of ExInitSystem @ 0x1409D4FF0
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x1409B4EDC (InitBootProcessor.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     ExpInitSystemPhase1 @ 0x1409B0434 (ExpInitSystemPhase1.c)
 *     ExpInitSystemPhase0 @ 0x1409D51A0 (ExpInitSystemPhase0.c)
 *     ExpStringCheck @ 0x1409D5318 (ExpStringCheck.c)
 */

char ExInitSystem()
{
  if ( (_DWORD)InitializationPhase )
  {
    if ( (_DWORD)InitializationPhase != 1 )
      KeBugCheckEx(0x33u, 3uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
    return ExpInitSystemPhase1();
  }
  else
  {
    ExpStringCheck(
      L"\\Registry\\Machine\\System\\Setup",
      L"SetupType",
      L"SystemPrefix",
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions",
      L"ProductType",
      L"LanmanNT",
      L"ServerNT",
      L"WinNT",
      L"ProductSuite",
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites",
      L"ConcurrentLimit",
      L"Small Business",
      L"Enterprise",
      L"CommunicationServer",
      L"BackOffice",
      L"Small Business(Restricted)",
      L"Terminal Server",
      L"EmbeddedNT",
      L"DataCenter",
      L"Personal",
      L"Blade",
      L"Embedded(Restricted)",
      L"Security Appliance",
      L"Storage Server",
      L"Compute Server",
      L"WH Server",
      L"SystemSetupInProgress",
      L"PhoneNT",
      L"Kernel-ProductType");
    return ExpInitSystemPhase0();
  }
}
