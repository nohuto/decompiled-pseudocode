/*
 * XREFs of PopDiagTraceFxDeviceAccounting @ 0x1402E0B3C
 * Callers:
 *     PopFxStopDeviceAccounting @ 0x1402D9F4C (PopFxStopDeviceAccounting.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PopDiagQueryDevicePropertyString @ 0x140871708 (PopDiagQueryDevicePropertyString.c)
 */

void PopDiagTraceFxDeviceAccounting(__int64 a1, __int64 a2, unsigned __int16 *a3, ...)
{
  REGHANDLE v5; // rbx
  struct _DEVICE_OBJECT *v6; // rbx
  bool v7; // di
  int DevicePropertyString; // eax
  wchar_t *Buffer; // r15
  bool v10; // bl
  wchar_t *v11; // r14
  int v12; // ecx
  char v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING v18; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  va_list v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  char *v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  _DWORD *v27; // [rsp+E0h] [rbp-20h]
  __int64 v28; // [rsp+E8h] [rbp-18h]
  __int64 v29; // [rsp+F0h] [rbp-10h]
  _DWORD v30[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 *v31; // [rsp+100h] [rbp+0h]
  __int64 v32; // [rsp+108h] [rbp+8h]
  __int64 v33; // [rsp+110h] [rbp+10h]
  __int64 v34; // [rsp+118h] [rbp+18h]
  __int64 v35; // [rsp+120h] [rbp+20h]
  __int64 v36; // [rsp+128h] [rbp+28h]
  __int64 *v37; // [rsp+130h] [rbp+30h]
  __int64 v38; // [rsp+138h] [rbp+38h]
  _DWORD *v39; // [rsp+140h] [rbp+40h]
  __int64 v40; // [rsp+148h] [rbp+48h]
  wchar_t *v41; // [rsp+150h] [rbp+50h]
  _DWORD v42[2]; // [rsp+158h] [rbp+58h] BYREF
  _DWORD *v43; // [rsp+160h] [rbp+60h]
  __int64 v44; // [rsp+168h] [rbp+68h]
  wchar_t *v45; // [rsp+170h] [rbp+70h]
  _DWORD v46[2]; // [rsp+178h] [rbp+78h] BYREF
  _DWORD *v47; // [rsp+180h] [rbp+80h]
  __int64 v48; // [rsp+188h] [rbp+88h]
  __int64 v49; // [rsp+190h] [rbp+90h]
  _DWORD v50[2]; // [rsp+198h] [rbp+98h] BYREF
  va_list va; // [rsp+208h] [rbp+108h] BYREF

  va_start(va, a3);
  v14 = a1;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)&pwsz);
  RtlInitUnicodeString(&v18, (PCWSTR)&pwsz);
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_ACCOUNTING) )
    {
      v21 = 8LL;
      UserData.Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
      *(_QWORD *)&UserData.Size = 1LL;
      v20 = &v14;
      v23 = 8LL;
      va_copy(v22, va);
      EtwWriteEx(v5, &POP_ETW_EVENT_DEVICE_ACCOUNTING, 0LL, 0, 0LL, 0LL, 3u, &UserData);
      if ( *(_DWORD *)(a2 + 12) < 5u )
      {
        v6 = *(struct _DEVICE_OBJECT **)(v14 + 32);
        v7 = (int)PopDiagQueryDevicePropertyString(v6, DevicePropertyClassName) >= 0;
        DevicePropertyString = PopDiagQueryDevicePropertyString(v6, DevicePropertyClassGuid);
        Buffer = DestinationString.Buffer;
        v10 = DevicePropertyString >= 0;
        v11 = v18.Buffer;
        if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
        {
          v13 = PopWnfCsEnterScenarioId;
          v15 = *(_QWORD *)(a2 + 32);
          v16 = *(_QWORD *)(a2 + 40);
          v25 = &v13;
          v26 = 1LL;
          v12 = *(unsigned __int16 *)(v14 + 40);
          v29 = *(_QWORD *)(v14 + 48);
          v31 = &v15;
          v33 = a2 + 48;
          v35 = a2 + 88;
          v37 = &v16;
          v39 = v42;
          v42[0] = DestinationString.Length;
          v43 = v46;
          v46[0] = v18.Length;
          v47 = v50;
          v49 = *((_QWORD *)a3 + 1);
          v50[0] = *a3;
          v27 = v30;
          v28 = 2LL;
          v30[0] = v12;
          v30[1] = 0;
          v32 = 8LL;
          v34 = 40LL;
          v36 = 40LL;
          v38 = 8LL;
          v40 = 2LL;
          v41 = Buffer;
          v42[1] = 0;
          v44 = 2LL;
          v45 = v11;
          v46[1] = 0;
          v48 = 2LL;
          v50[1] = 0;
          TlgWrite(&pCallbackContext, &unk_14037175A, 0LL, 0LL, 0xFu, &pData);
        }
        if ( v7 )
          ExFreePoolWithTag(Buffer, 0x67696450u);
        if ( v10 )
          ExFreePoolWithTag(v11, 0x67696450u);
      }
    }
  }
}
