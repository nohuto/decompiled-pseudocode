/*
 * XREFs of PopDiagTraceFxComponentAccounting @ 0x140873844
 * Callers:
 *     PopFxStopDeviceAccounting @ 0x1402D9F4C (PopFxStopDeviceAccounting.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PopDiagQueryDevicePropertyString @ 0x140871708 (PopDiagQueryDevicePropertyString.c)
 */

void __fastcall PopDiagTraceFxComponentAccounting(__int64 a1, int a2, __int64 a3, unsigned __int16 *a4, char a5)
{
  REGHANDLE v7; // rbx
  struct _DEVICE_OBJECT *v8; // rbx
  bool v9; // di
  int DevicePropertyString; // eax
  wchar_t *Buffer; // r15
  bool v12; // bl
  wchar_t *v13; // r14
  int v14; // ecx
  char v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v21; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-78h]
  int *v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  char *v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  char *v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  _DWORD *v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  __int64 v34; // [rsp+F0h] [rbp-10h]
  _DWORD v35[2]; // [rsp+F8h] [rbp-8h] BYREF
  int *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  __int64 *v38; // [rsp+110h] [rbp+10h]
  __int64 v39; // [rsp+118h] [rbp+18h]
  __int64 v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]
  __int64 v42; // [rsp+130h] [rbp+30h]
  __int64 v43; // [rsp+138h] [rbp+38h]
  __int64 *v44; // [rsp+140h] [rbp+40h]
  __int64 v45; // [rsp+148h] [rbp+48h]
  _DWORD *v46; // [rsp+150h] [rbp+50h]
  __int64 v47; // [rsp+158h] [rbp+58h]
  wchar_t *v48; // [rsp+160h] [rbp+60h]
  _DWORD v49[2]; // [rsp+168h] [rbp+68h] BYREF
  _DWORD *v50; // [rsp+170h] [rbp+70h]
  __int64 v51; // [rsp+178h] [rbp+78h]
  wchar_t *v52; // [rsp+180h] [rbp+80h]
  _DWORD v53[2]; // [rsp+188h] [rbp+88h] BYREF
  _DWORD *v54; // [rsp+190h] [rbp+90h]
  __int64 v55; // [rsp+198h] [rbp+98h]
  __int64 v56; // [rsp+1A0h] [rbp+A0h]
  _DWORD v57[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  int v58; // [rsp+208h] [rbp+108h] BYREF

  v58 = a2;
  v17 = a1;
  RtlInitUnicodeString(&DestinationString, &word_140767740);
  RtlInitUnicodeString(&v21, &word_140767740);
  if ( PopDiagHandleRegistered )
  {
    v7 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_ACCOUNTING) )
    {
      v24 = 8LL;
      v26 = 4LL;
      UserData.Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
      *(_QWORD *)&UserData.Size = 1LL;
      v23 = &v17;
      v28 = 8LL;
      v25 = &v58;
      v27 = &a5;
      EtwWrite(v7, &POP_ETW_EVENT_COMPONENT_ACCOUNTING, 0LL, 4u, &UserData);
      if ( *(_DWORD *)(a3 + 12) != -1 )
      {
        v8 = *(struct _DEVICE_OBJECT **)(v17 + 32);
        v9 = (int)PopDiagQueryDevicePropertyString(v8, DevicePropertyClassName, (__int64)&DestinationString) >= 0;
        DevicePropertyString = PopDiagQueryDevicePropertyString(v8, DevicePropertyClassGuid, (__int64)&v21);
        Buffer = DestinationString.Buffer;
        v12 = DevicePropertyString >= 0;
        v13 = v21.Buffer;
        if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
        {
          v15 = PopWnfCsEnterScenarioId;
          v16 = v58;
          v18 = *(_QWORD *)(a3 + 32);
          v19 = *(_QWORD *)(a3 + 40);
          v30 = &v15;
          v31 = 1LL;
          v14 = *(unsigned __int16 *)(v17 + 40);
          v34 = *(_QWORD *)(v17 + 48);
          v36 = &v16;
          v38 = &v18;
          v40 = a3 + 48;
          v42 = a3 + 88;
          v44 = &v19;
          v46 = v49;
          v49[0] = DestinationString.Length;
          v50 = v53;
          v53[0] = v21.Length;
          v54 = v57;
          v56 = *((_QWORD *)a4 + 1);
          v57[0] = *a4;
          v32 = v35;
          v33 = 2LL;
          v35[0] = v14;
          v35[1] = 0;
          v37 = 4LL;
          v39 = 8LL;
          v41 = 40LL;
          v43 = 40LL;
          v45 = 8LL;
          v47 = 2LL;
          v48 = Buffer;
          v49[1] = 0;
          v51 = 2LL;
          v52 = v13;
          v53[1] = 0;
          v55 = 2LL;
          v57[1] = 0;
          TlgWrite(&pCallbackContext, &unk_140371826, 0LL, 0LL, 0x10u, &pData);
        }
        if ( v9 )
          ExFreePoolWithTag(Buffer, 0x67696450u);
        if ( v12 )
          ExFreePoolWithTag(v13, 0x67696450u);
      }
    }
  }
}
