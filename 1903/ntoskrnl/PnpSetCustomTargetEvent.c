/*
 * XREFs of PnpSetCustomTargetEvent @ 0x140669C00
 * Callers:
 *     IoReportTargetDeviceChangeAsynchronous @ 0x14009AE00 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IoReportTargetDeviceChange @ 0x14072BCC0 (IoReportTargetDeviceChange.c)
 *     PnpReportTargetDeviceChangeAsyncWorker @ 0x1408603A0 (PnpReportTargetDeviceChangeAsyncWorker.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     PnpCreateDeviceEventEntry @ 0x140669A50 (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x140669AA0 (PnpInsertEventInQueue.c)
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
  _DWORD *DeviceEventEntry; // rbx
  const void *v12; // rdx
  char *v13; // rcx

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
  *((_QWORD *)DeviceEventEntry + 4) = a4;
  *((_QWORD *)DeviceEventEntry + 5) = a5;
  *((_QWORD *)DeviceEventEntry + 3) = a2;
  DeviceEventEntry[36] = 0;
  DeviceEventEntry[32] = 3;
  *((GUID *)DeviceEventEntry + 7) = GUID_PNP_CUSTOM_NOTIFICATION;
  *((_QWORD *)DeviceEventEntry + 17) = a3;
  DeviceEventEntry[37] = v10;
  *((_QWORD *)DeviceEventEntry + 19) = Object;
  v12 = *(const void **)(v9 + 48);
  if ( v12 )
    memmove(DeviceEventEntry + 42, v12, *(unsigned __int16 *)(v9 + 40));
  v13 = (char *)DeviceEventEntry + v10 + 112 - (unsigned __int64)Src[1];
  *((_QWORD *)DeviceEventEntry + 20) = v13;
  memmove(v13, Src, Src[1]);
  return PnpInsertEventInQueue((__int64)DeviceEventEntry);
}
