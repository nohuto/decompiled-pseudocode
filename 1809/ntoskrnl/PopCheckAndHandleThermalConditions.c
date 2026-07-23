/*
 * XREFs of PopCheckAndHandleThermalConditions @ 0x14018C034
 * Callers:
 *     PopThermalWorker @ 0x140752150 (PopThermalWorker.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PopThermalStandbyEndTracking @ 0x1401428B4 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x1402DC5C8 (PopThermalStandbyNotify.c)
 *     PopThermalWriteShutdownToRegistry @ 0x1402DC6E4 (PopThermalWriteShutdownToRegistry.c)
 *     PopDiagTraceThermalStateChange @ 0x1402E2160 (PopDiagTraceThermalStateChange.c)
 *     PopTraceCr3Mitigated @ 0x1402E2624 (PopTraceCr3Mitigated.c)
 *     PopTraceCr3Tripped @ 0x1402E26BC (PopTraceCr3Tripped.c)
 *     PopTraceZoneCr3Mitigated @ 0x1402E2CF4 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1402E2E20 (PopTraceZoneCr3Tripped.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopIsHibernateSupported @ 0x1405B1850 (PopIsHibernateSupported.c)
 *     PopExecutePowerAction @ 0x1406DF390 (PopExecutePowerAction.c)
 *     PopCriticalShutdown @ 0x14086D250 (PopCriticalShutdown.c)
 *     PopUpdateOverThrottledCount @ 0x14086DA40 (PopUpdateOverThrottledCount.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x140875B78 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x140875C74 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalShutdown @ 0x14087DAE4 (PopSqmThermalCriticalShutdown.c)
 *     PopSqmThermalHibernate @ 0x14087DB04 (PopSqmThermalHibernate.c)
 */

unsigned __int8 __fastcall PopCheckAndHandleThermalConditions(__int64 a1)
{
  __int64 v1; // rsi
  char v3; // di
  char v4; // bp
  char v5; // dl
  unsigned __int8 result; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  char v16; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  char v20; // bl
  unsigned __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  int v22; // [rsp+38h] [rbp-30h]
  _QWORD v23[4]; // [rsp+40h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v3 = 0;
  v4 = 0;
  if ( *(_BYTE *)(a1 + 210) && !*(_BYTE *)(a1 + 71) )
  {
    v3 = 1;
    PopSqmThermalCriticalShutdown();
    PopDiagTraceZoneCriticalTripPointExceeded(a1 + 112, v1);
    *(_BYTE *)(a1 + 71) = 1;
  }
  if ( *(_BYTE *)(a1 + 209) )
  {
    v4 = 1;
    PopDiagTraceZoneS4TripPointExceeded(a1 + 112, v1);
    PopSqmThermalHibernate(a1);
  }
  else if ( !v3 )
  {
    goto LABEL_4;
  }
  PopAcquirePolicyLock(a1);
  if ( v4 )
  {
    if ( (unsigned __int8)PopIsHibernateSupported(&PopCapabilities) )
    {
      PopThermalHibernateInitiated = 1;
      PopThermalStandbyEndTracking(2LL, v7, v8);
      v22 = 0;
      v21 = 0xC000000400000003uLL;
      v23[1] = 0LL;
      v23[2] = 0LL;
      v23[0] = 0x8000000001LL;
      PopExecutePowerAction((unsigned int)v23, 0, (unsigned int)&v21, 5, 1);
    }
    else
    {
      v3 = 1;
    }
  }
  if ( v3 )
  {
    DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(v1, 0x6D546F50u);
    v10 = DeviceAttachmentBaseRefWithTag;
    if ( DeviceAttachmentBaseRefWithTag )
      v11 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
    else
      v11 = 0LL;
    v12 = a1 + 128;
    if ( *(_BYTE *)(a1 + 228) )
      v12 = 0LL;
    PopThermalWriteShutdownToRegistry((v11 + 280) & -(__int64)(v11 != 0), v12, -v11);
    if ( v10 )
      ObfDereferenceObjectWithTag(v10, 0x6D546F50u);
    if ( !PopThermalCriticalShutdownInitiated )
    {
      PopThermalStandbyEndTracking(3LL, v13, v14);
      PopThermalCriticalShutdownInitiated = 1;
      if ( PopThermalCriticalShutdownEnabled )
        PopCriticalShutdown();
    }
  }
  PopReleasePolicyLock();
LABEL_4:
  v5 = *(_BYTE *)(a1 + 224) != 0;
  if ( *(_BYTE *)(a1 + 73) != v5 )
  {
    *(_BYTE *)(a1 + 73) = v5;
    PopUpdateOverThrottledCount(a1);
  }
  result = *(_BYTE *)(a1 + 211);
  if ( *(_BYTE *)(a1 + 72) != result )
  {
    PopDiagTraceThermalStateChange(*(_QWORD *)(a1 + 48), result, &POP_ETW_EVENT_THERMAL_ZONE_THERMAL_STANDBY_UPDATE);
    PopAcquirePolicyLock(v15);
    v16 = *(_BYTE *)(a1 + 211);
    *(_BYTE *)(a1 + 72) = v16;
    if ( v16 )
    {
      if ( ++dword_140418204 == 1 )
      {
        byte_14041820C = 1;
        ++dword_140418208;
        PopTraceCr3Tripped();
      }
      PopTraceZoneCr3Tripped((unsigned int)dword_140418208, a1);
    }
    else
    {
      PopTraceZoneCr3Mitigated((unsigned int)dword_140418208, a1);
      --dword_140418204;
    }
    if ( dword_140418204 )
    {
      v20 = 1;
    }
    else
    {
      v20 = 0;
      PopThermalStandbyEndTracking(0LL, v17, v19);
      PopTraceCr3Mitigated((unsigned int)dword_140418208);
      if ( HIBYTE(PopSystemThermalInfo) )
      {
        PopThermalStandbyNotify(0LL);
        HIBYTE(PopSystemThermalInfo) = 0;
        return PopReleasePolicyLock();
      }
    }
    if ( !v4 && v20 && (_BYTE)PopSystemThermalInfo && !HIBYTE(PopSystemThermalInfo) )
    {
      LOBYTE(v18) = 1;
      PopThermalStandbyNotify(v18);
      PopSystemThermalInfo = 256;
    }
    return PopReleasePolicyLock();
  }
  return result;
}
