/*
 * XREFs of WppControlCallback @ 0x180112270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WppControlCallback(int a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v4; // rbx
  int v5; // ecx
  __int64 TraceLoggerHandle; // rdi
  int TraceEnableFlags; // eax
  char TraceEnableLevel; // si

  *a3 = 0;
  v4 = a2;
  v5 = a1 - 4;
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
    TraceLoggerHandle = EtwGetTraceLoggerHandle(a4, a2, a3);
    TraceEnableLevel = EtwGetTraceEnableLevel(TraceLoggerHandle);
    TraceEnableFlags = EtwGetTraceEnableFlags(TraceLoggerHandle);
  }
  if ( (*(_BYTE *)(v4 + 26) & 2) != 0 )
  {
    if ( *(_QWORD *)(v4 + 16) )
      v4 = *(_QWORD *)(v4 + 16);
  }
  *(_QWORD *)(v4 + 16) = TraceLoggerHandle;
  *(_BYTE *)(v4 + 25) = TraceEnableLevel;
  *(_DWORD *)(v4 + 28) = TraceEnableFlags;
  return 0LL;
}
