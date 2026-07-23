/*
 * XREFs of PopDeactiveThermalRequest @ 0x14086890C
 * Callers:
 *     PoDeleteThermalRequest @ 0x140868680 (PoDeleteThermalRequest.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     PopGetDope @ 0x14016BE7C (PopGetDope.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140186550 (PopThermalUpdateTelemetryClientCount.c)
 *     PopPropogateCoolingChange @ 0x14018DBE4 (PopPropogateCoolingChange.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1402E29BC (PopTraceThermalRequestPassiveHistogram.c)
 *     PopDiagTraceThermalRequest @ 0x1406DC3F8 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x1406DC478 (PopDiagTraceCoolingExtension.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x1406DE0B4 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopCleanCoolingExtension @ 0x14086875C (PopCleanCoolingExtension.c)
 */

void __fastcall PopDeactiveThermalRequest(__int64 a1)
{
  _QWORD *v1; // rbx
  char v3; // bp
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_QWORD **)(a1 + 32);
  v3 = 0;
  PopAcquireRwLockExclusive((ULONG_PTR)(v1 + 4));
  if ( *(_BYTE *)(a1 + 18) )
  {
    if ( v1[17] )
    {
      PopThermalUpdatePassiveTimeTracking(a1 + 40, *(_BYTE *)(a1 + 16));
      PopTraceThermalRequestPassiveHistogram(a1);
      PopThermalUpdateTelemetryClientCount(0);
    }
    PopDiagTraceThermalRequest(a1, &POP_ETW_EVENT_THERMAL_REQUEST_REMOVE);
    *(_BYTE *)(a1 + 18) = 0;
    PopPropogateCoolingChange((__int64)v1);
  }
  PopReleaseRwLock((ULONG_PTR)(v1 + 4));
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoolingExtensionLock);
  PopAcquireRwLockExclusive((ULONG_PTR)(v1 + 4));
  v4 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 )
    goto LABEL_20;
  v5 = *(_QWORD **)(a1 + 8);
  if ( *v5 != a1 )
    goto LABEL_20;
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  if ( (_QWORD *)v1[2] != v1 + 2 )
    goto LABEL_15;
  v6 = v1[6];
  if ( v6 )
  {
    *(_QWORD *)(PopGetDope(v6) + 64) = 0LL;
    if ( *((_BYTE *)v1 + 64) )
      PopDiagTraceCoolingExtension((__int64)v1, &POP_ETW_EVENT_COOLING_EXTENSION_REMOVE);
    v7 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) == v1 )
    {
      v8 = (_QWORD *)v1[1];
      if ( (_QWORD *)*v8 == v1 )
      {
        *v8 = v7;
        *(_QWORD *)(v7 + 8) = v8;
        *v1 = 0LL;
        goto LABEL_14;
      }
    }
LABEL_20:
    __fastfail(3u);
  }
LABEL_14:
  v3 = 1;
LABEL_15:
  PopReleaseRwLock((ULONG_PTR)(v1 + 4));
  PopReleaseRwLock((ULONG_PTR)&PopCoolingExtensionLock);
  if ( v3 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)(v1 + 4));
    if ( *((_BYTE *)v1 + 67) )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v1[9] = &Event;
      PopReleaseRwLock((ULONG_PTR)(v1 + 4));
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      PopAcquireRwLockExclusive((ULONG_PTR)(v1 + 4));
      v1[9] = 0LL;
    }
    PopReleaseRwLock((ULONG_PTR)(v1 + 4));
    PopCleanCoolingExtension(v1);
  }
}
