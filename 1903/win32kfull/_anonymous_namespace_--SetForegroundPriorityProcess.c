/*
 * XREFs of _anonymous_namespace_::SetForegroundPriorityProcess @ 0x1C0016BBC
 * Callers:
 *     _anonymous_namespace_::RequestPriorityUpdate @ 0x1C0016A38 (_anonymous_namespace_--RequestPriorityUpdate.c)
 *     ?UpdateProcessPriorityForSpinning@PriorityBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0016ABC (-UpdateProcessPriorityForSpinning@PriorityBoost@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::SetProcessPriorityByClass @ 0x1C0016CC8 (_anonymous_namespace_--SetProcessPriorityByClass.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall anonymous_namespace_::SetForegroundPriorityProcess(
        struct _KPROCESS **a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  struct _KPROCESS *v5; // rbp
  char v7; // si
  __int64 v8; // rdx
  __int64 v9; // r8
  int ActiveConsoleId; // eax
  HANDLE ProcessId; // rax
  char ProcessPriorityClass; // al
  __int64 v13; // rdx

  result = *(unsigned int *)(a2 + 480);
  v4 = a3;
  v5 = *a1;
  if ( (result & 0xC) == 0 && (result & 1) == 0 && ((result & 0x40000) == 0 || a3 == 1) )
  {
    v7 = 0;
    if ( (*((_DWORD *)a1 + 3) & 0x400000) != 0 )
    {
      v4 = 0;
      ProcessPriorityClass = PsGetProcessPriorityClass(*a1);
      LOBYTE(v13) = 1;
      v7 = ProcessPriorityClass;
      result = PsSetProcessPriorityClass(v5, v13);
    }
    if ( v4 )
    {
      if ( v4 - 1 > 1 )
        return result;
    }
    else if ( gppiScreenSaver && (struct _KPROCESS **)gppiScreenSaver != a1 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(gppiScreenSaver);
    }
    anonymous_namespace_::SetProcessPriorityByClass(a1, v4);
    if ( v7 )
    {
      LOBYTE(v8) = v7;
      PsSetProcessPriorityClass(v5, v8);
    }
    if ( v4 )
    {
      ActiveConsoleId = RtlGetActiveConsoleId();
      v9 = *(_QWORD *)&gSessionId;
      if ( ActiveConsoleId == gSessionId )
      {
        ProcessId = PsGetProcessId(v5);
        RtlSetConsoleSessionForegroundProcessId(ProcessId);
      }
    }
    LOBYTE(v9) = v4 - 1 <= 1;
    return GreDxgkSetProcessStatus(a1, 1LL, v9);
  }
  return result;
}
