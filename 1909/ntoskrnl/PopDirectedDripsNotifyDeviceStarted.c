/*
 * XREFs of PopDirectedDripsNotifyDeviceStarted @ 0x14071CFD4
 * Callers:
 *     PopDirectedDripsInitializeStartedDevices @ 0x1405B1B00 (PopDirectedDripsInitializeStartedDevices.c)
 *     PipProcessStartPhase3 @ 0x140700C08 (PipProcessStartPhase3.c)
 * Callees:
 *     PoDirectedDripsSetDeviceFlags @ 0x14015B430 (PoDirectedDripsSetDeviceFlags.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     IoGetDevicePropertyData @ 0x140626F10 (IoGetDevicePropertyData.c)
 *     RtlPrefixUnicodeString @ 0x140666440 (RtlPrefixUnicodeString.c)
 *     PopDirectedDripsNotifyUsbDeviceStarted @ 0x1408B918C (PopDirectedDripsNotifyUsbDeviceStarted.c)
 */

__int64 __fastcall PopDirectedDripsNotifyDeviceStarted(__int64 a1)
{
  struct _DEVICE_OBJECT *v1; // rdi
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  __int64 v6; // rbx
  char *v7; // r8
  unsigned int i; // edx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // edx
  ULONG Type; // [rsp+40h] [rbp-40h] BYREF
  ULONG RequiredSize; // [rsp+44h] [rbp-3Ch] BYREF
  UNICODE_STRING String1; // [rsp+48h] [rbp-38h] BYREF
  __int64 Data; // [rsp+58h] [rbp-28h] BYREF
  __int64 v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+68h] [rbp-18h] BYREF
  wchar_t v19; // [rsp+70h] [rbp-10h]

  v1 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  Data = 0LL;
  v17 = 0LL;
  v19 = aUsb[4];
  String1.Buffer = (wchar_t *)&v18;
  v18 = *(_QWORD *)L"USB\\";
  *(_QWORD *)&String1.Length = 655368LL;
  _m_prefetchw(PopDirectedDripsState);
  v3 = PopDirectedDripsState[0];
  do
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange(PopDirectedDripsState, v3, v3);
  }
  while ( v4 != v3 );
  if ( (v3 & 1) != 0
    && IoGetDevicePropertyData(v1, &DEVPKEY_Device_ClassGuid, 0, 0, 0x10u, &Data, &RequiredSize, &Type) >= 0
    && Type == 13
    && RequiredSize == 16 )
  {
    v6 = Data;
    v7 = (char *)&PopDeviceClassExclusionList;
    for ( i = 0; i < 2; ++i )
    {
      v9 = Data - **(_QWORD **)v7;
      if ( Data == **(_QWORD **)v7 )
        v9 = v17 - *(_QWORD *)(*(_QWORD *)v7 + 8LL);
      if ( !v9 )
      {
        v12 = 14;
        goto LABEL_23;
      }
      v7 += 8;
    }
    if ( RtlPrefixUnicodeString(&String1, (PCUNICODE_STRING)(a1 + 40), 0) )
      goto LABEL_21;
    v10 = v6 - *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1;
    if ( v6 == *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 )
      v10 = v17 - *(_QWORD *)GUID_DEVICE_CLASS_USB_CONTROLLER.Data4;
    if ( !v10 )
    {
LABEL_21:
      PopDirectedDripsNotifyUsbDeviceStarted(a1);
      return PoDirectedDripsSetDeviceFlags((__int64)v1, 32);
    }
    v11 = v6 - *(_QWORD *)&GUID_DEVICE_CLASS_VOLUME.Data1;
    if ( !v11 )
      v11 = v17 - *(_QWORD *)GUID_DEVICE_CLASS_VOLUME.Data4;
    if ( !v11 )
    {
      v12 = 1;
LABEL_23:
      PoDirectedDripsSetDeviceFlags((__int64)v1, v12);
    }
  }
  return PoDirectedDripsSetDeviceFlags((__int64)v1, 32);
}
