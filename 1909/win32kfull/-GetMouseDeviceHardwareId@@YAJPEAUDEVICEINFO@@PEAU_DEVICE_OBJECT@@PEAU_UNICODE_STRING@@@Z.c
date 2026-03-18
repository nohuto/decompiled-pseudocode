/*
 * XREFs of ?GetMouseDeviceHardwareId@@YAJPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1C0165850
 * Callers:
 *     IsMouseDeviceOnIgnoreList @ 0x1C0105970 (IsMouseDeviceOnIgnoreList.c)
 *     ?CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0165688 (-CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z @ 0x1C0165900 (-IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z.c)
 * Callees:
 *     GetPointerDeviceId @ 0x1C0105BF8 (GetPointerDeviceId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GetMouseDeviceHardwareId(
        struct DEVICEINFO *a1,
        struct _DEVICE_OBJECT *a2,
        struct _UNICODE_STRING *a3)
{
  int PointerDeviceId; // ebx
  __int64 v7; // rax

  PointerDeviceId = 0;
  if ( *((_BYTE *)a1 + 48) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( *((_QWORD *)a1 + 113) )
    goto LABEL_7;
  v7 = Win32AllocPool(a3->MaximumLength, 1684630869LL);
  *((_QWORD *)a1 + 113) = v7;
  if ( v7 )
  {
    *((_WORD *)a1 + 449) = a3->MaximumLength;
    PointerDeviceId = GetPointerDeviceId(a2, (PUNICODE_STRING)a1 + 56);
    if ( PointerDeviceId < 0 )
      return (unsigned int)PointerDeviceId;
LABEL_7:
    RtlCopyUnicodeString(a3, (PCUNICODE_STRING)a1 + 56);
    return (unsigned int)PointerDeviceId;
  }
  return (unsigned int)-1073741801;
}
