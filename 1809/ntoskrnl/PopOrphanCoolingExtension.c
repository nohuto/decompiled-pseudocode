/*
 * XREFs of PopOrphanCoolingExtension @ 0x140867870
 * Callers:
 *     PopCoolingExtensionPnpNotification @ 0x140867570 (PopCoolingExtensionPnpNotification.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopGetDope @ 0x14016BD5C (PopGetDope.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1401863F0 (PopThermalUpdateTelemetryClientCount.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1402E26CC (PopTraceThermalRequestPassiveHistogram.c)
 *     PopDiagTraceThermalRequest @ 0x1406DB178 (PopDiagTraceThermalRequest.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x1406DCE34 (PopThermalUpdatePassiveTimeTracking.c)
 */

void __fastcall PopOrphanCoolingExtension(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rcx
  _QWORD *v5; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoolingExtensionLock);
  PopAcquireRwLockExclusive((ULONG_PTR)(a1 + 4));
  v2 = a1[6];
  if ( v2 )
  {
    v3 = a1[2];
    if ( (_QWORD *)v3 != a1 + 2 )
    {
      do
      {
        if ( *(_BYTE *)(v3 + 18) )
        {
          *(_BYTE *)(v3 + 18) = 0;
          if ( a1[17] )
          {
            PopThermalUpdatePassiveTimeTracking(v3 + 40, *(_BYTE *)(v3 + 16));
            PopTraceThermalRequestPassiveHistogram(v3);
            PopThermalUpdateTelemetryClientCount(0);
          }
          PopDiagTraceThermalRequest(v3, &POP_ETW_EVENT_THERMAL_REQUEST_REMOVE);
        }
        v3 = *(_QWORD *)v3;
      }
      while ( (_QWORD *)v3 != a1 + 2 );
      v2 = a1[6];
    }
    *(_QWORD *)(PopGetDope(v2) + 64) = 0LL;
    v4 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v5 = (_QWORD *)a1[1], (_QWORD *)*v5 != a1) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    *a1 = 0LL;
    a1[6] = 0LL;
  }
  PopReleaseRwLock((ULONG_PTR)(a1 + 4));
  PopReleaseRwLock((ULONG_PTR)&PopCoolingExtensionLock);
}
