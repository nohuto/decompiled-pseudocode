/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x1400061C4
 * Callers:
 *     ?SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z @ 0x1400014A0 (-SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequestWow64@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z @ 0x140002850 (-SendComplexSyncRequestWow64@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?SendComplexAsyncRequestNative@CPortClient@@AEAAJKPEBXF@Z @ 0x140005780 (-SendComplexAsyncRequestNative@CPortClient@@AEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z @ 0x140005AA0 (-SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x140006230 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl

  v0 = word_14000B164;
  if ( !(_BYTE)word_14000B164 )
    return 0LL;
  v1 = HIBYTE(word_14000B164);
  if ( HIBYTE(word_14000B164) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_14000B164, 2u, 0LL) < 0 )
    {
      word_14000B164 = 257;
      return 0LL;
    }
    v1 = HIBYTE(word_14000B164);
    v0 = word_14000B164;
  }
  return v0 && !v1;
}
