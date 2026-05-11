/*
 * XREFs of USBDeviceGetOffloadCapability @ 0x1C00288A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     USBD_CreateHandle @ 0x1C000EBF8 (USBD_CreateHandle.c)
 *     USBD_CloseHandle @ 0x1C000F034 (USBD_CloseHandle.c)
 *     USBD_QueryUsbCapability @ 0x1C000F4C4 (USBD_QueryUsbCapability.c)
 */

__int64 __fastcall USBDeviceGetOffloadCapability(__int64 a1, int *a2, ULONG a3)
{
  int v3; // edi
  int v5; // eax
  const GUID *v6; // rdx
  ULONG v7; // r8d
  unsigned int v8; // ebx
  unsigned __int16 v9; // r9
  NTSTATUS v10; // eax
  int OutputBuffer; // [rsp+50h] [rbp+8h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp+10h] BYREF
  USBD_HANDLE USBDHandle; // [rsp+60h] [rbp+18h] BYREF

  USBDHandle = 0LL;
  v3 = 0;
  OutputBuffer = 0;
  ResultLength = 0;
  v5 = USBD_CreateHandle(*(PDEVICE_OBJECT *)(a1 + 24), *(PDEVICE_OBJECT *)(a1 + 40), a3, 0x38627845u, &USBDHandle);
  v8 = v5;
  if ( v5 < 0 )
  {
    v9 = 25;
LABEL_3:
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v6,
      9u,
      v9,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids,
      v5);
    goto LABEL_16;
  }
  v10 = USBD_QueryUsbCapability(USBDHandle, v6, v7, (PUCHAR)&OutputBuffer, &ResultLength);
  v8 = v10;
  if ( v10 >= 0 )
  {
    v5 = ResultLength;
    if ( ResultLength != 4 )
    {
      v8 = -1073741823;
      v9 = 27;
      goto LABEL_3;
    }
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v6,
      9u,
      0x1Cu,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids,
      OutputBuffer);
    if ( OutputBuffer )
    {
      if ( OutputBuffer == 1 )
      {
        v3 = 1;
      }
      else if ( OutputBuffer == 2 )
      {
        v3 = 2;
      }
    }
  }
  else
  {
    if ( v10 != -1073741637 && v10 != -1073741822 )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)v6,
        9u,
        0x1Au,
        (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids,
        v10);
    v8 = 0;
  }
LABEL_16:
  if ( USBDHandle )
    USBD_CloseHandle(USBDHandle);
  *a2 = v3;
  return v8;
}
