/*
 * XREFs of PopOrphanCoolingExtension @ 0x1408A35D8
 * Callers:
 *     PopCoolingExtensionPnpNotification @ 0x1408A32A0 (PopCoolingExtensionPnpNotification.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1401672B0 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x14016747C (PopTraceThermalRequestActiveActivity.c)
 *     PopGetDope @ 0x140176F90 (PopGetDope.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x14018C320 (PopThermalUpdateTelemetryClientCount.c)
 *     PopDiagTraceThermalRequest @ 0x14071FC1C (PopDiagTraceThermalRequest.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x1407292C0 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140748B58 (PopThermalUpdateActiveTimeTracking.c)
 */

void __fastcall PopOrphanCoolingExtension(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoolingExtensionLock);
  PopAcquireRwLockExclusive((ULONG_PTR)(a1 + 4));
  v3 = a1[6];
  if ( v3 )
  {
    v4 = a1[2];
    if ( (_QWORD *)v4 != a1 + 2 )
    {
      do
      {
        if ( *(_BYTE *)(v4 + 18) )
        {
          *(_BYTE *)(v4 + 18) = 0;
          if ( a1[17] )
          {
            PopThermalUpdatePassiveTimeTracking(v4 + 40, *(_BYTE *)(v4 + 16));
            PopTraceThermalRequestPassiveHistogram(v4);
            PopThermalUpdateTelemetryClientCount(0);
          }
          if ( a1[16] )
          {
            LOBYTE(v2) = *(_BYTE *)(v4 + 17) == 0;
            PopThermalUpdateActiveTimeTracking(v4 + 40, v2);
            PopTraceThermalRequestActiveActivity(v4);
          }
          PopDiagTraceThermalRequest(v4, &POP_ETW_EVENT_THERMAL_REQUEST_REMOVE);
        }
        v4 = *(_QWORD *)v4;
      }
      while ( (_QWORD *)v4 != a1 + 2 );
      v3 = a1[6];
    }
    *(_QWORD *)(PopGetDope(v3) + 64) = 0LL;
    v5 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v6 = (_QWORD *)a1[1], (_QWORD *)*v6 != a1) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    *a1 = 0LL;
    a1[6] = 0LL;
  }
  PopReleaseRwLock((ULONG_PTR)(a1 + 4));
  PopReleaseRwLock((ULONG_PTR)&PopCoolingExtensionLock);
}
