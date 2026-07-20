/*
 * XREFs of RtlStringCbPrintfW @ 0x140004FA0
 * Callers:
 *     SmpInvokeAutoChk @ 0x140001158 (SmpInvokeAutoChk.c)
 *     SmpParseCommandLine @ 0x140001900 (SmpParseCommandLine.c)
 *     SmpAllocateInitialCommandBuffer @ 0x140004EA4 (SmpAllocateInitialCommandBuffer.c)
 *     SmpCreateDynamicEnvironmentVariables @ 0x1400087B8 (SmpCreateDynamicEnvironmentVariables.c)
 *     SmpLoadDataFromRegistry @ 0x140009F38 (SmpLoadDataFromRegistry.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14000A9B4 (SmpCreateWorkingSetSwapPagingFile.c)
 *     SmpCleanupStalePageFiles @ 0x14000B3EC (SmpCleanupStalePageFiles.c)
 *     SmpSaveOldPageFiles @ 0x14000B98C (SmpSaveOldPageFiles.c)
 *     SmpGetCrashParameters @ 0x140013BD0 (SmpGetCrashParameters.c)
 *     SmpGetDumpDestination @ 0x140013C8C (SmpGetDumpDestination.c)
 *     SmpClearTemporaryFiles @ 0x140014DD0 (SmpClearTemporaryFiles.c)
 *     SmpShuffleMove @ 0x140015F90 (SmpShuffleMove.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS v5; // esi
  unsigned __int64 v6; // rbx
  int v7; // eax
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = cbDest >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 < 0 )
  {
    if ( v3 )
      *pszDest = 0;
  }
  else
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = _vsnwprintf_s(pszDest, v3, v3 - 1, pszFormat, va);
    if ( v7 < 0 )
      goto LABEL_9;
    if ( v7 == v6 )
    {
      pszDest[v6] = 0;
      return v5;
    }
    if ( v7 > v6 )
    {
LABEL_9:
      pszDest[v6] = 0;
      return -2147483643;
    }
  }
  return v5;
}
