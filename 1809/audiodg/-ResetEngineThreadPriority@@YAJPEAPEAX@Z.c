/*
 * XREFs of ?ResetEngineThreadPriority@@YAJPEAPEAX@Z @ 0x1400445AC
 * Callers:
 *     OnThreadDetach @ 0x140037D40 (OnThreadDetach.c)
 *     ?SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@PEAPEAX@Z @ 0x1400445FC (-SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@PEAPEAX@Z.c)
 *     ?EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ @ 0x140060EC4 (-EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResetEngineThreadPriority(void **a1)
{
  unsigned int v1; // ebx
  signed int LastError; // eax

  v1 = 0;
  if ( *a1 )
  {
    if ( AvRevertMmThreadCharacteristics(*a1) )
    {
      *a1 = 0LL;
    }
    else
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        return (unsigned __int16)LastError | 0x80070000;
      else
        return (unsigned int)LastError;
    }
  }
  return v1;
}
