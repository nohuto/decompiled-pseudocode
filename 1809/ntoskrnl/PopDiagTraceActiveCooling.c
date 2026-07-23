/*
 * XREFs of PopDiagTraceActiveCooling @ 0x1407528D0
 * Callers:
 *     PopThermalWorker @ 0x140752150 (PopThermalWorker.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     ExSystemTimeToLocalTime @ 0x14013B0A0 (ExSystemTimeToLocalTime.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceActiveCooling(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  bool v8; // cc
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v10; // rbx
  __int64 v11; // rdx
  unsigned __int16 v12; // ax
  int v13; // ecx
  __int64 v14; // rax
  char *v15; // r9
  __int64 v16; // r10
  __int64 v17; // r11
  unsigned int *v18; // r8
  unsigned int v19; // kr00_4
  unsigned int v20; // kr04_4
  const EVENT_DESCRIPTOR *v21; // rdx
  __int16 v22; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v23; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v24; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h]
  int v29; // [rsp+68h] [rbp-98h]
  int v30; // [rsp+6Ch] [rbp-94h]
  LARGE_INTEGER *p_LocalTime; // [rsp+70h] [rbp-90h]
  int v32; // [rsp+78h] [rbp-88h]
  int v33; // [rsp+7Ch] [rbp-84h]
  __int16 *v34; // [rsp+80h] [rbp-80h]
  int v35; // [rsp+88h] [rbp-78h]
  int v36; // [rsp+8Ch] [rbp-74h]
  char v37; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int *v38; // [rsp+130h] [rbp+30h]
  int v39; // [rsp+138h] [rbp+38h]
  int v40; // [rsp+13Ch] [rbp+3Ch]
  _DWORD v41[10]; // [rsp+140h] [rbp+40h] BYREF

  if ( PopDiagHandleRegistered && (a4 || EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ACTIVE_COOLING_DIAGNOSTIC)) )
  {
    v8 = a4 <= 1;
    if ( a4 == 1 )
    {
      if ( !EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ACTIVE_COOLING_OPERATIONAL) )
        return;
      v8 = 1;
    }
    if ( v8 )
    {
      DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(a2, 0x67446F50u);
      v10 = DeviceAttachmentBaseRefWithTag;
      if ( DeviceAttachmentBaseRefWithTag )
        v11 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
      else
        v11 = 0LL;
      if ( v11 )
      {
        v12 = *(_WORD *)(v11 + 280);
        UserData.Reserved = 0;
        v13 = v12 >> 1;
        v22 = v12 >> 1;
        UserData.Ptr = (ULONGLONG)&v22;
        UserData.Size = 2;
        v14 = *(_QWORD *)(v11 + 288);
        v30 = 0;
        v28 = v14;
        v29 = 2 * v13;
        SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
        ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
        v33 = 0;
        p_LocalTime = &LocalTime;
        v15 = &v37;
        v32 = 8;
        v35 = 2;
        v36 = 0;
        v16 = 0LL;
        v23 = a3 != 0;
        v34 = &v23;
        v17 = 10LL;
        do
        {
          *(_DWORD *)v15 = 0;
          v18 = &v41[v16];
          *((_DWORD *)v15 - 1) = 4;
          *(_QWORD *)(v15 - 12) = v18;
          v19 = *(_DWORD *)(a1 + 4 * v16 + 36);
          v16 = (unsigned int)(v16 + 1);
          v15 += 16;
          *v18 = v19 / 0xA;
          --v17;
        }
        while ( v17 );
        v40 = 0;
        v20 = *(_DWORD *)(a1 + 16);
        v39 = 4;
        v38 = &v24;
        v24 = v20 / 0xA;
        v21 = &POP_ETW_EVENT_ACTIVE_COOLING_DIAGNOSTIC;
        if ( a4 )
          v21 = &POP_ETW_EVENT_ACTIVE_COOLING_OPERATIONAL;
        EtwWrite(PopDiagHandle, v21, 0LL, 0xFu, &UserData);
      }
      if ( v10 )
        ObfDereferenceObjectWithTag(v10, 0x67446F50u);
    }
  }
}
