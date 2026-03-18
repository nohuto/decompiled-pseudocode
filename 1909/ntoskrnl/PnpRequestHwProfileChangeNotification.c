/*
 * XREFs of PnpRequestHwProfileChangeNotification @ 0x14085FAF4
 * Callers:
 *     PiProfileSendHardwareProfileCancel @ 0x14086C520 (PiProfileSendHardwareProfileCancel.c)
 *     PiProfileSendHardwareProfileCommit @ 0x14086C548 (PiProfileSendHardwareProfileCommit.c)
 *     PpProfileCommitTransitioningDock @ 0x14086C9F0 (PpProfileCommitTransitioningDock.c)
 *     PpProfileQueryHardwareProfileChange @ 0x14086CC40 (PpProfileQueryHardwareProfileChange.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     RtlCompareMemory @ 0x1401CCD70 (RtlCompareMemory.c)
 *     PnpNotifyHwProfileChange @ 0x14085F82C (PnpNotifyHwProfileChange.c)
 *     PnpSetHwProfileChangeEvent @ 0x14086D484 (PnpSetHwProfileChangeEvent.c)
 */

__int64 __fastcall PnpRequestHwProfileChangeNotification(GUID *Source1, int a2, _DWORD *a3, UNICODE_STRING *a4)
{
  __int64 result; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v10; // [rsp+70h] [rbp+8h] BYREF

  memset(&Event, 0, sizeof(Event));
  if ( Source1 != &GUID_HWPROFILE_QUERY_CHANGE
    && RtlCompareMemory(Source1, &GUID_HWPROFILE_QUERY_CHANGE, 0x10uLL) != 16
    && Source1 != &GUID_HWPROFILE_CHANGE_CANCELLED
    && RtlCompareMemory(Source1, &GUID_HWPROFILE_CHANGE_CANCELLED, 0x10uLL) != 16
    && Source1 != &GUID_HWPROFILE_CHANGE_COMPLETE
    && RtlCompareMemory(Source1, &GUID_HWPROFILE_CHANGE_COMPLETE, 0x10uLL) != 16 )
  {
    return 3221225488LL;
  }
  if ( Source1 != &GUID_HWPROFILE_QUERY_CHANGE && RtlCompareMemory(Source1, &GUID_HWPROFILE_QUERY_CHANGE, 0x10uLL) != 16 )
    return PnpSetHwProfileChangeEvent((_DWORD)Source1, 0, 0, 0, 0LL);
  if ( a2 != 1 )
    return PnpNotifyHwProfileChange(Source1, a3, a4);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  result = PnpSetHwProfileChangeEvent(
             (_DWORD)Source1,
             (unsigned int)&Event,
             (unsigned int)&v10,
             (_DWORD)a3,
             (__int64)a4);
  if ( (int)result >= 0 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return v10;
  }
  return result;
}
