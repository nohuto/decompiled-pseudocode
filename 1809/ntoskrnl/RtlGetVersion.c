/*
 * XREFs of RtlGetVersion @ 0x1406B4750
 * Callers:
 *     RtlVerifyVersionInfo @ 0x140174640 (RtlVerifyVersionInfo.c)
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1401AF1E8 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     SdbpMatchOsVersion @ 0x14072314C (SdbpMatchOsVersion.c)
 *     _SysCtxOpenMachine @ 0x14073BA88 (_SysCtxOpenMachine.c)
 *     Win7RtlGetVersion @ 0x140849660 (Win7RtlGetVersion.c)
 *     Win81RtlGetVersion @ 0x140849740 (Win81RtlGetVersion.c)
 *     Win8RtlGetVersion @ 0x140849820 (Win8RtlGetVersion.c)
 *     EtwpTraceSystemInitialization @ 0x1409D1A58 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     RtlGetNtProductType @ 0x14012AC20 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x1406B4810 (RtlGetSuiteMask.c)
 */

NTSTATUS __stdcall RtlGetVersion(PRTL_OSVERSIONINFOW lpVersionInformation)
{
  DWORD v1; // eax
  __int16 v3; // ax
  bool v4; // zf
  __int16 SuiteMask; // ax
  enum _NT_PRODUCT_TYPE ProductType; // [rsp+30h] [rbp+8h] BYREF

  v1 = lpVersionInformation->dwOSVersionInfoSize - 284;
  *(_QWORD *)&lpVersionInformation->dwMajorVersion = 10LL;
  lpVersionInformation->dwBuildNumber = 17763;
  lpVersionInformation->dwPlatformId = 2;
  if ( (v1 & 0xFFFFFFF7) == 0 )
  {
    LOWORD(lpVersionInformation[1].dwOSVersionInfoSize) = BYTE1(CmNtCSDVersion);
    v3 = (unsigned __int8)CmNtCSDVersion;
    LOWORD(lpVersionInformation[1].dwMajorVersion) = 0;
    v4 = (_DWORD)InitializationPhase == 0;
    HIWORD(lpVersionInformation[1].dwOSVersionInfoSize) = v3;
    BYTE2(lpVersionInformation[1].dwMajorVersion) = 0;
    if ( !v4 )
    {
      if ( RtlGetNtProductType(&ProductType) )
        BYTE2(lpVersionInformation[1].dwMajorVersion) = ProductType;
      SuiteMask = RtlGetSuiteMask();
      v4 = lpVersionInformation->dwOSVersionInfoSize == 292;
      LOWORD(lpVersionInformation[1].dwMajorVersion) = SuiteMask;
      if ( v4 )
        lpVersionInformation[1].dwMinorVersion = RtlGetSuiteMask() & 0x1FFFF;
    }
    HIBYTE(lpVersionInformation[1].dwMajorVersion) = 0;
  }
  return 0;
}
