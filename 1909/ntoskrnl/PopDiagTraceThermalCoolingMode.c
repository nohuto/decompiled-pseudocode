/*
 * XREFs of PopDiagTraceThermalCoolingMode @ 0x14077C6D8
 * Callers:
 *     PopThermalWorker @ 0x14077BFF0 (PopThermalWorker.c)
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400889DC (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceThermalCoolingMode(__int64 a1, __int16 a2)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  const WCHAR *v8; // rdx
  unsigned __int16 v10; // [rsp+38h] [rbp-19h] BYREF
  __int16 v11; // [rsp+3Ch] [rbp-15h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+7h] BYREF
  __int64 v14; // [rsp+68h] [rbp+17h]
  int v15; // [rsp+70h] [rbp+1Fh]
  int v16; // [rsp+74h] [rbp+23h]
  __int16 *v17; // [rsp+78h] [rbp+27h]
  __int64 v18; // [rsp+80h] [rbp+2Fh]
  wchar_t *Buffer; // [rsp+88h] [rbp+37h]
  int v20; // [rsp+90h] [rbp+3Fh]
  int v21; // [rsp+94h] [rbp+43h]

  LOBYTE(DeviceAttachmentBaseRefWithTag) = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(DeviceAttachmentBaseRefWithTag) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COOLING_MODE);
    if ( (_BYTE)DeviceAttachmentBaseRefWithTag )
    {
      DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(a1, 0x67446F50u);
      v5 = DeviceAttachmentBaseRefWithTag;
      if ( DeviceAttachmentBaseRefWithTag )
        v6 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
      else
        v6 = 0LL;
      if ( v6 )
      {
        v10 = *(_WORD *)(v6 + 280) >> 1;
        UserData.Ptr = (ULONGLONG)&v10;
        *(_QWORD *)&UserData.Size = 2LL;
        v7 = *(_QWORD *)(v6 + 288);
        v8 = L"active";
        v15 = 2 * v10;
        v14 = v7;
        v16 = 0;
        if ( a2 )
          v8 = L"passive";
        RtlInitUnicodeString(&DestinationString, v8);
        v11 = DestinationString.Length >> 1;
        v17 = &v11;
        Buffer = DestinationString.Buffer;
        v20 = 2 * (DestinationString.Length >> 1);
        v18 = 2LL;
        v21 = 0;
        LOBYTE(DeviceAttachmentBaseRefWithTag) = EtwWrite(
                                                   PopDiagHandle,
                                                   &POP_ETW_EVENT_COOLING_MODE,
                                                   0LL,
                                                   4u,
                                                   &UserData);
      }
      if ( v5 )
        LOBYTE(DeviceAttachmentBaseRefWithTag) = ObfDereferenceObjectWithTag(v5, 0x67446F50u);
    }
  }
  return (char)DeviceAttachmentBaseRefWithTag;
}
