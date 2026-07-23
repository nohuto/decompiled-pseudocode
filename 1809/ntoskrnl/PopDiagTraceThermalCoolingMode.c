/*
 * XREFs of PopDiagTraceThermalCoolingMode @ 0x14075293C
 * Callers:
 *     PopThermalWorker @ 0x140752150 (PopThermalWorker.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceThermalCoolingMode(__int64 a1, __int16 a2)
{
  _UNKNOWN **DeviceAttachmentBaseRefWithTag; // rax
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
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF

  DeviceAttachmentBaseRefWithTag = &retaddr;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(DeviceAttachmentBaseRefWithTag) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COOLING_MODE);
    if ( (_BYTE)DeviceAttachmentBaseRefWithTag )
    {
      DeviceAttachmentBaseRefWithTag = (_UNKNOWN **)IoGetDeviceAttachmentBaseRefWithTag(a1, 0x67446F50u);
      v5 = DeviceAttachmentBaseRefWithTag;
      if ( DeviceAttachmentBaseRefWithTag )
        v6 = *((_QWORD *)DeviceAttachmentBaseRefWithTag[39] + 5);
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
