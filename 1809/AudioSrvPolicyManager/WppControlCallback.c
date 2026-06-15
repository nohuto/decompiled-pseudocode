/*
 * XREFs of WppControlCallback @ 0x1800081D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WppControlCallback(
        WMIDPREQUESTCODE RequestCode,
        _QWORD *RequestContext,
        ULONG *BufferSize,
        PVOID Buffer)
{
  int v5; // ecx
  TRACEHANDLE TraceLoggerHandle; // rdi
  ULONG TraceEnableFlags; // eax
  UCHAR TraceEnableLevel; // si

  *BufferSize = 0;
  v5 = RequestCode - 4;
  if ( v5 )
  {
    if ( v5 != 1 )
      return 87LL;
    TraceLoggerHandle = 0LL;
    TraceEnableFlags = 0;
    TraceEnableLevel = 0;
  }
  else
  {
    TraceLoggerHandle = GetTraceLoggerHandle(Buffer);
    TraceEnableLevel = GetTraceEnableLevel(TraceLoggerHandle);
    TraceEnableFlags = GetTraceEnableFlags(TraceLoggerHandle);
  }
  if ( (*((_BYTE *)RequestContext + 26) & 2) != 0 )
  {
    if ( RequestContext[2] )
      RequestContext = (_QWORD *)RequestContext[2];
  }
  RequestContext[2] = TraceLoggerHandle;
  *((_BYTE *)RequestContext + 25) = TraceEnableLevel;
  *((_DWORD *)RequestContext + 7) = TraceEnableFlags;
  return 0LL;
}
