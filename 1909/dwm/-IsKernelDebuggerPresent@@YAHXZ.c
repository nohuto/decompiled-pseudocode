/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x140009058
 * Callers:
 *     ?SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z @ 0x140001590 (-SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequestWow64@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z @ 0x140002A60 (-SendComplexSyncRequestWow64@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?SendComplexAsyncRequestNative@CPortClient@@AEAAJKPEBXF@Z @ 0x140006150 (-SendComplexAsyncRequestNative@CPortClient@@AEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z @ 0x140006470 (-SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1400090E0 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl

  v0 = word_1400102A4;
  if ( !(_BYTE)word_1400102A4 )
    return 0LL;
  v1 = HIBYTE(word_1400102A4);
  if ( HIBYTE(word_1400102A4) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_1400102A4, 2u, 0LL) < 0 )
    {
      word_1400102A4 = 257;
      return 0LL;
    }
    v1 = HIBYTE(word_1400102A4);
    v0 = word_1400102A4;
  }
  return v0 && !v1;
}
