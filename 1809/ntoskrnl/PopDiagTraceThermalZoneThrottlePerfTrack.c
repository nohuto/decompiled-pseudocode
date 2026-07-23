/*
 * XREFs of PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1402E23B0
 * Callers:
 *     PopThermalWorker @ 0x140752150 (PopThermalWorker.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceThermalZoneThrottlePerfTrack(int a1, int a2, __int64 a3)
{
  _UNKNOWN **DeviceAttachmentBaseRefWithTag; // rax
  void *v5; // rbx
  __int64 v6; // rdx
  unsigned __int16 v7; // ax
  int v8; // ecx
  __int64 v9; // rax
  __int16 v11; // [rsp+48h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+7h] BYREF
  int *v13; // [rsp+68h] [rbp+17h]
  int v14; // [rsp+70h] [rbp+1Fh]
  int v15; // [rsp+74h] [rbp+23h]
  __int16 *v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+80h] [rbp+2Fh]
  int v18; // [rsp+84h] [rbp+33h]
  __int64 v19; // [rsp+88h] [rbp+37h]
  int v20; // [rsp+90h] [rbp+3Fh]
  int v21; // [rsp+94h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  int v23; // [rsp+B8h] [rbp+67h] BYREF
  int v24; // [rsp+C0h] [rbp+6Fh] BYREF

  DeviceAttachmentBaseRefWithTag = &retaddr;
  v24 = a2;
  v23 = a1;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(DeviceAttachmentBaseRefWithTag) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_PERFTRACK);
    if ( (_BYTE)DeviceAttachmentBaseRefWithTag )
    {
      DeviceAttachmentBaseRefWithTag = (_UNKNOWN **)IoGetDeviceAttachmentBaseRefWithTag(a3, 0x67446F50u);
      v5 = DeviceAttachmentBaseRefWithTag;
      if ( DeviceAttachmentBaseRefWithTag )
        v6 = *((_QWORD *)DeviceAttachmentBaseRefWithTag[39] + 5);
      else
        v6 = 0LL;
      if ( v6 )
      {
        v7 = *(_WORD *)(v6 + 280);
        UserData.Reserved = 0;
        v15 = 0;
        v18 = 0;
        v8 = v7 >> 1;
        UserData.Ptr = (ULONGLONG)&v24;
        v13 = &v23;
        v11 = v7 >> 1;
        v16 = &v11;
        UserData.Size = 4;
        v14 = 4;
        v17 = 2;
        v9 = *(_QWORD *)(v6 + 288);
        v21 = 0;
        v19 = v9;
        v20 = 2 * v8;
        LOBYTE(DeviceAttachmentBaseRefWithTag) = EtwWriteEx(
                                                   PopDiagHandle,
                                                   &POP_ETW_EVENT_THERMAL_PERFTRACK,
                                                   0LL,
                                                   0,
                                                   0LL,
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
