/*
 * XREFs of EtwpRealtimeDisconnectConsumer @ 0x1406CC4B0
 * Callers:
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x1406CC014 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpCloseRealTimeConnectionObject @ 0x1406CC080 (EtwpCloseRealTimeConnectionObject.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     EtwpReleaseLoggerContext @ 0x1405C4F00 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C4F48 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpSynchronizeWithLogger @ 0x1406CC554 (EtwpSynchronizeWithLogger.c)
 */

__int64 __fastcall EtwpRealtimeDisconnectConsumer(__int64 a1)
{
  unsigned int *v2; // rax
  unsigned int *v3; // rsi
  ULONG_PTR v4; // rbx
  unsigned int v5; // ebx

  if ( (*(_BYTE *)(a1 + 90) & 5) != 0 )
  {
    return (unsigned int)-2147483611;
  }
  else
  {
    v2 = EtwpAcquireLoggerContextByLoggerId(*(_QWORD *)(a1 + 152), *(unsigned __int16 *)(a1 + 88), 1);
    v3 = v2;
    if ( v2 )
    {
      v4 = (ULONG_PTR)(v2 + 176);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v2 + 176), 0LL);
      *((_QWORD *)v3 + 46) = a1;
      ExReleasePushLockEx(v4, 0LL);
      v5 = EtwpSynchronizeWithLogger(v3, 16LL);
      EtwpSynchronizeWithLogger(v3, 4LL);
      EtwpReleaseLoggerContext(v3, 1);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v5;
}
