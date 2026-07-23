/*
 * XREFs of PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x1402E2280
 * Callers:
 *     PopThermalWorker @ 0x140752150 (PopThermalWorker.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceThermalZoneThrottleDurationPerfTrack(int a1, __int64 a2)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v4; // rbx
  __int64 v5; // rdx
  unsigned __int16 v6; // ax
  int v7; // ecx
  __int64 v8; // rax
  __int16 v9; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int16 *v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+64h] [rbp-1Ch]
  __int64 v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+70h] [rbp-10h]
  int v16; // [rsp+74h] [rbp-Ch]
  int v17; // [rsp+90h] [rbp+10h] BYREF

  v17 = a1;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_DURATION_PERFTRACK) )
  {
    DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(a2, 0x67446F50u);
    v4 = DeviceAttachmentBaseRefWithTag;
    if ( DeviceAttachmentBaseRefWithTag )
      v5 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
    else
      v5 = 0LL;
    if ( v5 )
    {
      v6 = *(_WORD *)(v5 + 280);
      UserData.Reserved = 0;
      v13 = 0;
      v7 = v6 >> 1;
      UserData.Ptr = (ULONGLONG)&v17;
      v9 = v6 >> 1;
      v11 = &v9;
      UserData.Size = 4;
      v12 = 2;
      v8 = *(_QWORD *)(v5 + 288);
      v16 = 0;
      v14 = v8;
      v15 = 2 * v7;
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_THERMAL_DURATION_PERFTRACK, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
    if ( v4 )
      ObfDereferenceObjectWithTag(v4, 0x67446F50u);
  }
}
