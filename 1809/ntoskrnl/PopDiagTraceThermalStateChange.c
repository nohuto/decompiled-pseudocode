/*
 * XREFs of PopDiagTraceThermalStateChange @ 0x1402E2160
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x14018C034 (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalOverthrottleState @ 0x1402E2128 (PopDiagTraceThermalOverthrottleState.c)
 *     PopDiagTraceThermalStandbyState @ 0x1402E2144 (PopDiagTraceThermalStandbyState.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceThermalStateChange(__int64 a1, int a2, const EVENT_DESCRIPTOR *a3)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v6; // rbx
  __int64 v7; // rdx
  unsigned __int16 v8; // ax
  int v9; // ecx
  __int64 v10; // rax
  __int16 v11; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 v13; // [rsp+58h] [rbp-28h]
  int v14; // [rsp+60h] [rbp-20h]
  int v15; // [rsp+64h] [rbp-1Ch]
  int *v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+70h] [rbp-10h]
  int v18; // [rsp+74h] [rbp-Ch]
  int v19; // [rsp+A8h] [rbp+28h] BYREF

  v19 = a2;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, a3) )
  {
    DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(a1, 0x67446F50u);
    v6 = DeviceAttachmentBaseRefWithTag;
    if ( DeviceAttachmentBaseRefWithTag )
      v7 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
    else
      v7 = 0LL;
    if ( v7 )
    {
      v8 = *(_WORD *)(v7 + 280);
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v11;
      v11 = v8 >> 1;
      v9 = 2 * (v8 >> 1);
      UserData.Size = 2;
      v10 = *(_QWORD *)(v7 + 288);
      v15 = 0;
      v18 = 0;
      v13 = v10;
      v16 = &v19;
      v14 = v9;
      v17 = 4;
      EtwWriteEx(PopDiagHandle, a3, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
    if ( v6 )
      ObfDereferenceObjectWithTag(v6, 0x67446F50u);
  }
}
