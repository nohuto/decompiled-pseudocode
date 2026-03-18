/*
 * XREFs of PopRundownThermalRequests @ 0x14071D6F8
 * Callers:
 *     PopDiagTraceControlCallback @ 0x14069D910 (PopDiagTraceControlCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceThermalRequest @ 0x14071DD8C (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x14071DE0C (PopDiagTraceCoolingExtension.c)
 */

void PopRundownThermalRequests()
{
  __int64 i; // rbx
  __int64 *j; // rdi

  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoolingExtensionLock);
  for ( i = PopCoolingExtensionList; (__int64 *)i != &PopCoolingExtensionList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 64) )
    {
      PopAcquireRwLockExclusive(i + 32);
      PopDiagTraceCoolingExtension(i, &POP_ETW_EVENT_COOLING_EXTENSION_RUNDOWN);
      for ( j = *(__int64 **)(i + 16); j != (__int64 *)(i + 16); j = (__int64 *)*j )
      {
        if ( *((_BYTE *)j + 18) )
          PopDiagTraceThermalRequest(j, &POP_ETW_EVENT_THERMAL_REQUEST_RUNDOWN);
      }
      PopReleaseRwLock(i + 32);
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopCoolingExtensionLock);
}
