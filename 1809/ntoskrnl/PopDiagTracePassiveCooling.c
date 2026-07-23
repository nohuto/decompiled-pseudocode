/*
 * XREFs of PopDiagTracePassiveCooling @ 0x14087466C
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

char __fastcall PopDiagTracePassiveCooling(__int64 a1, __int64 a2, char a3, int a4, unsigned int a5)
{
  _UNKNOWN **DeviceAttachmentBaseRefWithTag; // rax
  bool v9; // cc
  void *v10; // rbx
  __int64 v11; // rdx
  unsigned int v12; // kr00_4
  unsigned int v13; // kr04_4
  const EVENT_DESCRIPTOR *v14; // rdx
  int v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v18; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-C4h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-A0h]
  __int64 v24; // [rsp+70h] [rbp-98h]
  LARGE_INTEGER *p_LocalTime; // [rsp+78h] [rbp-90h]
  __int64 v26; // [rsp+80h] [rbp-88h]
  int *v27; // [rsp+88h] [rbp-80h]
  __int64 v28; // [rsp+90h] [rbp-78h]
  unsigned int *v29; // [rsp+98h] [rbp-70h]
  __int64 v30; // [rsp+A0h] [rbp-68h]
  unsigned int *v31; // [rsp+A8h] [rbp-60h]
  __int64 v32; // [rsp+B0h] [rbp-58h]
  __int64 v33; // [rsp+B8h] [rbp-50h]
  __int64 v34; // [rsp+C0h] [rbp-48h]
  __int64 v35; // [rsp+C8h] [rbp-40h]
  __int64 v36; // [rsp+D0h] [rbp-38h]
  __int64 v37; // [rsp+D8h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-28h]
  int *v39; // [rsp+E8h] [rbp-20h]
  __int64 v40; // [rsp+F0h] [rbp-18h]
  __int64 v41; // [rsp+F8h] [rbp-10h]
  __int64 v42; // [rsp+100h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+130h] [rbp+28h] BYREF
  int v44; // [rsp+150h] [rbp+48h] BYREF

  DeviceAttachmentBaseRefWithTag = &retaddr;
  v44 = a4;
  LOWORD(v16) = 0;
  if ( PopDiagHandleRegistered )
  {
    if ( a5
      || (LOBYTE(DeviceAttachmentBaseRefWithTag) = EtwEventEnabled(
                                                     PopDiagHandle,
                                                     &POP_ETW_EVENT_PASSIVE_COOLING_DIAGNOSTIC),
          (_BYTE)DeviceAttachmentBaseRefWithTag) )
    {
      v9 = a5 <= 1;
      if ( a5 == 1 )
      {
        LOBYTE(DeviceAttachmentBaseRefWithTag) = EtwEventEnabled(
                                                   PopDiagHandle,
                                                   &POP_ETW_EVENT_PASSIVE_COOLING_OPERATIONAL);
        if ( !(_BYTE)DeviceAttachmentBaseRefWithTag )
          return (char)DeviceAttachmentBaseRefWithTag;
        v9 = a5 <= 1;
      }
      if ( v9 )
      {
        DeviceAttachmentBaseRefWithTag = (_UNKNOWN **)IoGetDeviceAttachmentBaseRefWithTag(a2, 0x67446F50u);
        v10 = DeviceAttachmentBaseRefWithTag;
        if ( DeviceAttachmentBaseRefWithTag )
          v11 = *((_QWORD *)DeviceAttachmentBaseRefWithTag[39] + 5);
        else
          v11 = 0LL;
        if ( v11 )
        {
          LOWORD(v17) = *(_WORD *)(v11 + 280) >> 1;
          UserData.Ptr = (ULONGLONG)&v17;
          *(_QWORD *)&UserData.Size = 2LL;
          v23 = *(_QWORD *)(v11 + 288);
          v24 = 2 * (unsigned int)(unsigned __int16)v17;
          SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
          ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
          v26 = 8LL;
          p_LocalTime = &LocalTime;
          v29 = &v18;
          v28 = 2LL;
          v30 = 4LL;
          v32 = 4LL;
          LOWORD(v16) = a3 != 0;
          v27 = &v16;
          v12 = *(_DWORD *)(a1 + 20);
          v34 = 4LL;
          v18 = v12 / 0xA;
          v13 = *(_DWORD *)(a1 + 16);
          v36 = 4LL;
          v31 = &v19;
          v33 = a1 + 4;
          v35 = a1 + 8;
          v37 = a1 + 12;
          v39 = &v44;
          v41 = a1 + 80;
          v19 = v13 / 0xA;
          v14 = &POP_ETW_EVENT_PASSIVE_COOLING_DIAGNOSTIC;
          v38 = 4LL;
          v40 = 4LL;
          v42 = 4LL;
          if ( a5 )
            v14 = &POP_ETW_EVENT_PASSIVE_COOLING_OPERATIONAL;
          LOBYTE(DeviceAttachmentBaseRefWithTag) = EtwWrite(PopDiagHandle, v14, 0LL, 0xBu, &UserData);
        }
        if ( v10 )
          LOBYTE(DeviceAttachmentBaseRefWithTag) = ObfDereferenceObjectWithTag(v10, 0x67446F50u);
      }
    }
  }
  return (char)DeviceAttachmentBaseRefWithTag;
}
