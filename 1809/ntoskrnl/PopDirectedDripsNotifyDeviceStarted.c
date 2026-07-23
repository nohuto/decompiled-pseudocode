/*
 * XREFs of PopDirectedDripsNotifyDeviceStarted @ 0x1406EE370
 * Callers:
 *     PipProcessStartPhase3 @ 0x1406EBDB8 (PipProcessStartPhase3.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PoDirectedDripsSetDeviceFlags @ 0x1402D6C00 (PoDirectedDripsSetDeviceFlags.c)
 *     IoGetDevicePropertyData @ 0x140587930 (IoGetDevicePropertyData.c)
 *     RtlPrefixUnicodeString @ 0x1405C8460 (RtlPrefixUnicodeString.c)
 *     PopDirectedDripsNotifyUsbDeviceStarted @ 0x14087DF50 (PopDirectedDripsNotifyUsbDeviceStarted.c)
 */

int __fastcall PopDirectedDripsNotifyDeviceStarted(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ett
  struct _DEVICE_OBJECT *v4; // rsi
  __int64 v5; // rbx
  char *v6; // r8
  unsigned int i; // edx
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // edx
  ULONG Type; // [rsp+40h] [rbp-40h] BYREF
  ULONG RequiredSize; // [rsp+44h] [rbp-3Ch] BYREF
  UNICODE_STRING String1; // [rsp+48h] [rbp-38h] BYREF
  __int64 Data; // [rsp+58h] [rbp-28h] BYREF
  __int64 v16; // [rsp+60h] [rbp-20h]
  __int64 v17; // [rsp+68h] [rbp-18h] BYREF
  wchar_t v18; // [rsp+70h] [rbp-10h]

  v18 = aUsb_0[4];
  String1.Buffer = (wchar_t *)&v17;
  v17 = *(_QWORD *)L"USB\\";
  *(_DWORD *)&String1.Length = 655368;
  _m_prefetchw(&PopDirectedDripsState);
  LODWORD(v2) = PopDirectedDripsState;
  do
  {
    v3 = v2;
    LODWORD(v2) = _InterlockedCompareExchange(&PopDirectedDripsState, v2, v2);
  }
  while ( v3 != (_DWORD)v2 );
  if ( (v2 & 1) != 0 )
  {
    v4 = *(struct _DEVICE_OBJECT **)(a1 + 32);
    LODWORD(v2) = IoGetDevicePropertyData(v4, &DEVPKEY_Device_ClassGuid, 0, 0, 0x10u, &Data, &RequiredSize, &Type);
    if ( (int)v2 >= 0 && Type == 13 && RequiredSize == 16 )
    {
      v5 = Data;
      v6 = (char *)&PopDeviceClassExclusionList;
      for ( i = 0; i < 2; ++i )
      {
        v8 = Data - **(_QWORD **)v6;
        if ( Data == **(_QWORD **)v6 )
          v8 = v16 - *(_QWORD *)(*(_QWORD *)v6 + 8LL);
        if ( !v8 )
        {
          v10 = 14;
          goto LABEL_23;
        }
        v6 += 8;
      }
      if ( RtlPrefixUnicodeString(&String1, (PCUNICODE_STRING)(a1 + 40), 0) )
        goto LABEL_21;
      v2 = v5 - *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1;
      if ( v5 == *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 )
        v2 = v16 - *(_QWORD *)GUID_DEVICE_CLASS_USB_CONTROLLER.Data4;
      if ( !v2 )
      {
LABEL_21:
        LODWORD(v2) = PopDirectedDripsNotifyUsbDeviceStarted(a1);
        return v2;
      }
      v9 = v5 - *(_QWORD *)&GUID_DEVICE_CLASS_VOLUME.Data1;
      if ( !v9 )
        v9 = v16 - *(_QWORD *)GUID_DEVICE_CLASS_VOLUME.Data4;
      if ( !v9 )
      {
        v10 = 1;
LABEL_23:
        LODWORD(v2) = PoDirectedDripsSetDeviceFlags((__int64)v4, v10);
      }
    }
  }
  return v2;
}
