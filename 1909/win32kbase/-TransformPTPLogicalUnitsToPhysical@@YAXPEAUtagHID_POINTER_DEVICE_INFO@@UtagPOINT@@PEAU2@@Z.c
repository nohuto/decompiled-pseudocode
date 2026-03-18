/*
 * XREFs of ?TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C01431A8
 * Callers:
 *     RIMApplyPTPTranslation @ 0x1C01437EC (RIMApplyPTPTranslation.c)
 * Callees:
 *     RIMConvertPointCoordinates @ 0x1C0143A40 (RIMConvertPointCoordinates.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall TransformPTPLogicalUnitsToPhysical(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2,
        struct tagPOINT *a3)
{
  LONG x; // ebx

  x = a2.x;
  if ( *((_DWORD *)a1 + 6) != 7 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))MicrosoftTelemetryAssertTriggeredNoArgsKM)(a1, a2, a3);
  if ( !(unsigned int)RIMConvertPointCoordinates(x) )
  {
    a3->x = 0;
    a3->y = 0;
  }
}
