/*
 * XREFs of ndisMiniportQueryDeviceProperty @ 0x1C0106CE4
 * Callers:
 *     ndisCreateAdapterInstanceName @ 0x1C0106AA4 (ndisCreateAdapterInstanceName.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0013C08 (WPP_RECORDER_SF_qqd.c)
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C002CDC8 (WdmlibRtlInitUnicodeStringEx.c)
 *     ??$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@K_K@Z @ 0x1C0106E0C (--$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICO.c)
 */

__int64 __fastcall ndisMiniportQueryDeviceProperty(__int64 a1, int DeviceProperty, PUNICODE_STRING *a3)
{
  DEVICE_REGISTRY_PROPERTY v4; // edi
  char v5; // si
  _DEVICE_OBJECT *v6; // rbp
  int v7; // edx
  unsigned int v8; // ebx
  int v9; // edx
  PUNICODE_STRING v10; // rbx
  NTSTATUS inited; // edi
  PUNICODE_STRING v12; // rax
  unsigned __int16 v14; // r9
  ULONG BufferLength; // [rsp+78h] [rbp+10h] BYREF
  PUNICODE_STRING DestinationString; // [rsp+80h] [rbp+18h] BYREF

  *a3 = 0LL;
  v4 = DeviceProperty;
  v5 = a1;
  if ( DeviceProperty && (DeviceProperty <= 4 || DeviceProperty > 11 && DeviceProperty != 15 && DeviceProperty != 22) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(DeviceProperty) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        DeviceProperty,
        13,
        15,
        &WPP_a3868331fe073391203672ef2b551460_Traceguids,
        a1);
    }
    return 3221225485LL;
  }
  v6 = *(_DEVICE_OBJECT **)(a1 + 3832);
  BufferLength = 0;
  v8 = IoGetDeviceProperty(v6, (DEVICE_REGISTRY_PROPERTY)DeviceProperty, 0, 0LL, &BufferLength);
  if ( (int)(v8 + 0x80000000) >= 0 && v8 != -1073741789 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x10u,
        &WPP_a3868331fe073391203672ef2b551460_Traceguids,
        v5,
        (char)v6,
        v8);
    return v8;
  }
  if ( (unsigned __int64)BufferLength + 16 >= BufferLength )
  {
    MakeSizedPoolPtr<_UNICODE_STRING>(&DestinationString);
    v10 = DestinationString;
    if ( !DestinationString )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          13,
          18,
          &WPP_a3868331fe073391203672ef2b551460_Traceguids,
          v5,
          (char)v6);
      }
      inited = -1073741670;
      goto LABEL_10;
    }
    inited = IoGetDeviceProperty(v6, v4, BufferLength, &DestinationString[1], &BufferLength);
    if ( inited < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_10;
      v14 = 19;
    }
    else
    {
      inited = WdmlibRtlInitUnicodeStringEx(v10, (PCWSTR)&v10[1]);
      if ( inited >= 0 )
      {
        v12 = v10;
        v10 = 0LL;
        inited = 0;
        *a3 = v12;
LABEL_10:
        if ( v10 )
          ExFreePoolWithTag(v10, 0);
        return (unsigned int)inited;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_10;
      v14 = 20;
    }
    WPP_RECORDER_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xDu,
      v14,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      v5,
      (char)v6,
      inited);
    goto LABEL_10;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      13,
      17,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      v5,
      (char)v6);
  }
  return 3221225621LL;
}
