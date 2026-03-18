/*
 * XREFs of FreeScancodeMap @ 0x1C012F750
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

__int64 FreeScancodeMap()
{
  __int64 result; // rax

  if ( gpScancodeMap )
  {
    result = Win32FreePool(gpScancodeMap);
    gpScancodeMap = 0LL;
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    result = Win32FreePool(*(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
    LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) = 0;
  }
  return result;
}
