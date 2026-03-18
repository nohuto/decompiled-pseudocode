/*
 * XREFs of PnpSetCustomTargetEvent @ 0x14058FCD4
 * Callers:
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140006400 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IoReportTargetDeviceChange @ 0x1406FF660 (IoReportTargetDeviceChange.c)
 *     PnpReportTargetDeviceChangeAsyncWorker @ 0x140825F70 (PnpReportTargetDeviceChangeAsyncWorker.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1400ACDD0 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     PnpInsertEventInQueue @ 0x14058FED8 (PnpInsertEventInQueue.c)
 *     PnpCreateDeviceEventEntry @ 0x1406C6920 (PnpCreateDeviceEventEntry.c)
 */

__int64 __fastcall PnpSetCustomTargetEvent(
        _QWORD *Object,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 *Src)
{
  __int64 v9; // rdi
  unsigned int v10; // ebp
  __int64 DeviceEventEntry; // rbx
  const void *v12; // rdx
  void *v13; // rcx

  if ( a2 )
    *a3 = 259;
  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  if ( Object )
    v9 = *(_QWORD *)(Object[39] + 40LL);
  else
    v9 = 0LL;
  v10 = Src[1] + ((*(unsigned __int16 *)(v9 + 40) + 89) & 0xFFFFFFF8);
  DeviceEventEntry = PnpCreateDeviceEventEntry(v10 + 112);
  if ( !DeviceEventEntry )
    return 3221225626LL;
  ObfReferenceObjectWithTag(Object, 0x56706E50u);
  *(_QWORD *)(DeviceEventEntry + 32) = a4;
  *(_QWORD *)(DeviceEventEntry + 40) = a5;
  *(_QWORD *)(DeviceEventEntry + 24) = a2;
  *(_DWORD *)(DeviceEventEntry + 144) = 0;
  *(_DWORD *)(DeviceEventEntry + 128) = 3;
  *(GUID *)(DeviceEventEntry + 112) = GUID_PNP_CUSTOM_NOTIFICATION;
  *(_QWORD *)(DeviceEventEntry + 136) = a3;
  *(_DWORD *)(DeviceEventEntry + 148) = v10;
  *(_QWORD *)(DeviceEventEntry + 152) = Object;
  v12 = *(const void **)(v9 + 48);
  if ( v12 )
    memmove((void *)(DeviceEventEntry + 168), v12, *(unsigned __int16 *)(v9 + 40));
  v13 = (void *)(DeviceEventEntry + v10 + 112 - (unsigned __int64)Src[1]);
  *(_QWORD *)(DeviceEventEntry + 160) = v13;
  memmove(v13, Src, Src[1]);
  return PnpInsertEventInQueue(DeviceEventEntry);
}
