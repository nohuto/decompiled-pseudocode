/*
 * XREFs of PopCheckAndHandleThermalConditions @ 0x140195F40
 * Callers:
 *     PopThermalWorker @ 0x140778A10 (PopThermalWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400EBF7C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopThermalStandbyEndTracking @ 0x140167DB8 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x1402F7FCC (PopThermalStandbyNotify.c)
 *     PopThermalWriteShutdownToRegistry @ 0x1402F8128 (PopThermalWriteShutdownToRegistry.c)
 *     PopDiagTraceThermalStandbyState @ 0x1402FEE40 (PopDiagTraceThermalStandbyState.c)
 *     PopTraceCr3Mitigated @ 0x1402FF324 (PopTraceCr3Mitigated.c)
 *     PopTraceCr3Tripped @ 0x1402FF3BC (PopTraceCr3Tripped.c)
 *     PopTraceZoneCr3Mitigated @ 0x1402FF828 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1402FF954 (PopTraceZoneCr3Tripped.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopIsHibernateSupported @ 0x1406A2078 (PopIsHibernateSupported.c)
 *     PopExecutePowerAction @ 0x140725658 (PopExecutePowerAction.c)
 *     PopCriticalShutdown @ 0x1408A890C (PopCriticalShutdown.c)
 *     PopUpdateOverThrottledCount @ 0x1408A917C (PopUpdateOverThrottledCount.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1408B167C (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x1408B1778 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalShutdown @ 0x1408BA2A4 (PopSqmThermalCriticalShutdown.c)
 *     PopSqmThermalHibernate @ 0x1408BA2C4 (PopSqmThermalHibernate.c)
 */

unsigned __int8 __fastcall PopCheckAndHandleThermalConditions(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  char v4; // di
  char v5; // bp
  char v6; // dl
  unsigned __int8 result; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  char v22; // bl
  _DWORD v23[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v24; // [rsp+40h] [rbp-28h] BYREF
  __int128 v25; // [rsp+48h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 48);
  v24 = 0LL;
  v25 = 0uLL;
  v4 = 0;
  v5 = 0;
  if ( *(_BYTE *)(a1 + 210) && !*(_BYTE *)(a1 + 71) )
  {
    v4 = 1;
    PopSqmThermalCriticalShutdown();
    PopDiagTraceZoneCriticalTripPointExceeded(a1 + 112, v2);
    *(_BYTE *)(a1 + 71) = 1;
  }
  if ( *(_BYTE *)(a1 + 209) )
  {
    v5 = 1;
    PopDiagTraceZoneS4TripPointExceeded(a1 + 112, v2);
    PopSqmThermalHibernate(a1);
  }
  else if ( !v4 )
  {
    goto LABEL_4;
  }
  PopAcquirePolicyLock(a1, a2);
  if ( v5 )
  {
    if ( (unsigned __int8)PopIsHibernateSupported(&PopCapabilities) )
    {
      PopThermalHibernateInitiated = 1;
      PopThermalStandbyEndTracking(2LL, v8, v10);
      v23[2] = 0;
      v23[0] = 3;
      v23[1] = -1073741820;
      v24 = 0x8000000001LL;
      v25 = 0LL;
      PopExecutePowerAction((unsigned int)&v24, 0, (unsigned int)v23, 5, 1);
    }
    else
    {
      v4 = 1;
    }
  }
  if ( v4 )
  {
    DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(v2, 0x6D546F50u);
    v12 = DeviceAttachmentBaseRefWithTag;
    if ( DeviceAttachmentBaseRefWithTag )
      v13 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
    else
      v13 = 0LL;
    v14 = a1 + 128;
    if ( *(_BYTE *)(a1 + 228) )
      v14 = 0LL;
    PopThermalWriteShutdownToRegistry((v13 + 280) & -(__int64)(v13 != 0), v14, -v13);
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x6D546F50u);
    if ( !PopThermalCriticalShutdownInitiated )
    {
      PopThermalStandbyEndTracking(3LL, v8, v15);
      PopThermalCriticalShutdownInitiated = 1;
      if ( PopThermalCriticalShutdownEnabled )
        PopCriticalShutdown();
    }
  }
  PopReleasePolicyLock(v9, v8);
LABEL_4:
  v6 = *(_BYTE *)(a1 + 224) != 0;
  if ( *(_BYTE *)(a1 + 73) != v6 )
  {
    *(_BYTE *)(a1 + 73) = v6;
    PopUpdateOverThrottledCount(a1);
  }
  result = *(_BYTE *)(a1 + 211);
  if ( *(_BYTE *)(a1 + 72) != result )
  {
    PopDiagTraceThermalStandbyState(*(_QWORD *)(a1 + 48), result);
    PopAcquirePolicyLock(v17, v16);
    v18 = *(_BYTE *)(a1 + 211);
    *(_BYTE *)(a1 + 72) = v18;
    if ( v18 )
    {
      if ( ++dword_140442A44 == 1 )
      {
        byte_140442A4C = 1;
        ++dword_140442A48;
        PopTraceCr3Tripped();
      }
      PopTraceZoneCr3Tripped((unsigned int)dword_140442A48, a1);
    }
    else
    {
      PopTraceZoneCr3Mitigated((unsigned int)dword_140442A48, a1);
      --dword_140442A44;
    }
    if ( dword_140442A44 )
    {
      v22 = 1;
    }
    else
    {
      v22 = 0;
      PopThermalStandbyEndTracking(0LL, v19, v21);
      PopTraceCr3Mitigated((unsigned int)dword_140442A48);
      if ( HIBYTE(PopSystemThermalInfo) )
      {
        PopThermalStandbyNotify(0LL);
        HIBYTE(PopSystemThermalInfo) = 0;
        return PopReleasePolicyLock(v20, v19);
      }
    }
    if ( !v5 && v22 && (_BYTE)PopSystemThermalInfo && !HIBYTE(PopSystemThermalInfo) )
    {
      LOBYTE(v20) = 1;
      PopThermalStandbyNotify(v20);
      PopSystemThermalInfo = 256;
    }
    return PopReleasePolicyLock(v20, v19);
  }
  return result;
}
