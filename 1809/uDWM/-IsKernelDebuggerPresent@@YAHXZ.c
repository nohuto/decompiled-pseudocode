/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x1800B14F0
 * Callers:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180049A60 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180089AA0 (-CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1800B1560 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_1800D41D8;
  if ( !(_BYTE)word_1800D41D8 )
    return 0;
  v1 = HIBYTE(word_1800D41D8);
  v2 = 1;
  if ( HIBYTE(word_1800D41D8) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_1800D41D8, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_1800D41D8);
      v0 = word_1800D41D8;
    }
    else
    {
      v0 = 1;
      word_1800D41D8 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
