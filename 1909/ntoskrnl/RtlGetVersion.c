/*
 * XREFs of RtlGetVersion @ 0x1406D9C70
 * Callers:
 *     RtlVerifyVersionInfo @ 0x14017DF60 (RtlVerifyVersionInfo.c)
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1401BAA4C (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     _SysCtxOpenMachine @ 0x140755E58 (_SysCtxOpenMachine.c)
 *     SdbpMatchOsVersion @ 0x140775920 (SdbpMatchOsVersion.c)
 *     Win7RtlGetVersion @ 0x140884240 (Win7RtlGetVersion.c)
 *     Win81RtlGetVersion @ 0x140884320 (Win81RtlGetVersion.c)
 *     Win8RtlGetVersion @ 0x140884400 (Win8RtlGetVersion.c)
 *     EtwpTraceSystemInitialization @ 0x140A16090 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     RtlGetNtProductType @ 0x14012E9E0 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x1406D9D40 (RtlGetSuiteMask.c)
 */

NTSTATUS __stdcall RtlGetVersion(PRTL_OSVERSIONINFOW lpVersionInformation)
{
  int v2; // eax
  __int16 v3; // ax
  bool v4; // zf
  __int16 SuiteMask; // ax
  _NT_PRODUCT_TYPE ProductType; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)&lpVersionInformation->dwMajorVersion = 10LL;
  v2 = KernelVersionBump - 1;
  lpVersionInformation->dwPlatformId = 2;
  lpVersionInformation->dwBuildNumber = 18363 - (v2 != 0);
  if ( ((lpVersionInformation->dwOSVersionInfoSize - 284) & 0xFFFFFFF7) == 0 )
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
