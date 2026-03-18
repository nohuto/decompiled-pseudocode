/*
 * XREFs of KseDsCallbackHookAddDevice @ 0x1402B73E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     KsepDsEventAddDevice @ 0x1402B7B70 (KsepDsEventAddDevice.c)
 *     IoGetDeviceProperty @ 0x1405BF670 (IoGetDeviceProperty.c)
 */

__int64 __fastcall KseDsCallbackHookAddDevice(__int64 a1, struct _DEVICE_OBJECT *a2)
{
  __int64 v4; // rax
  unsigned int v5; // edi
  NTSTATUS DeviceProperty; // eax
  const WCHAR *v7; // rdx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-438h] BYREF
  ULONG ResultLength[4]; // [rsp+50h] [rbp-428h] BYREF
  _BYTE PropertyBuffer[1024]; // [rsp+60h] [rbp-418h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v4 = (*(__int64 (**)(void))qword_140426B38)();
  v5 = (*(__int64 (__fastcall **)(__int64, struct _DEVICE_OBJECT *))(v4 + 24))(a1, a2);
  DeviceProperty = IoGetDeviceProperty(a2, DevicePropertyHardwareID, 0x400u, PropertyBuffer, ResultLength);
  v7 = (const WCHAR *)PropertyBuffer;
  if ( DeviceProperty < 0 )
    v7 = L"<error>";
  RtlInitUnicodeString(&DestinationString, v7);
  KsepDsEventAddDevice(
    *(_QWORD *)(a1 + 24),
    *(_DWORD *)(a1 + 32),
    a1,
    (_DWORD)a2,
    v5,
    *(_QWORD *)(a1 + 48) + 24LL,
    (__int64)&DestinationString);
  return v5;
}
