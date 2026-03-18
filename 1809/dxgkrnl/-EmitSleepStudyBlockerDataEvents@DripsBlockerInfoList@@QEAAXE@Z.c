/*
 * XREFs of ?EmitSleepStudyBlockerDataEvents@DripsBlockerInfoList@@QEAAXE@Z @ 0x1C020EBE0
 * Callers:
 *     ?FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ @ 0x1C020F548 (-FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     McTemplateK0ujqzr2jx @ 0x1C003C08C (McTemplateK0ujqzr2jx.c)
 *     ?EmitSleepStudyBlockerTelemetry@DripsBlockerInfoList@@AEAAXEPEAU_DripsBlockerInfoTelemetryEntry@1@@Z @ 0x1C020EF54 (-EmitSleepStudyBlockerTelemetry@DripsBlockerInfoList@@AEAAXEPEAU_DripsBlockerInfoTelemetryEntry@.c)
 */

void __fastcall DripsBlockerInfoList::EmitSleepStudyBlockerDataEvents(DripsBlockerInfoList *this, unsigned __int8 a2)
{
  unsigned int v3; // r14d
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  DripsBlockerInfoList *v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ebx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rax
  wchar_t *v24; // r8
  unsigned __int8 v25; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+68h] [rbp-98h] BYREF
  int v28; // [rsp+6Ch] [rbp-94h] BYREF
  int v29; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING String; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v31[5]; // [rsp+88h] [rbp-78h] BYREF
  GUID ActivityId; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v33[2]; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-30h] BYREF
  int *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  GUID *p_ActivityId; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  int *v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]
  wchar_t *v41; // [rsp+110h] [rbp+10h]
  int v42; // [rsp+118h] [rbp+18h]
  int v43; // [rsp+11Ch] [rbp+1Ch]
  int *v44; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+128h] [rbp+28h]
  wchar_t *Buffer; // [rsp+130h] [rbp+30h]
  int v47; // [rsp+138h] [rbp+38h]
  int v48; // [rsp+13Ch] [rbp+3Ch]
  _BYTE v49[48]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v50[80]; // [rsp+170h] [rbp+70h] BYREF

  v25 = a2;
  v27 = 1;
  memset(v50, 0, 0x42uLL);
  memset(v49, 0, 0x2AuLL);
  *(_QWORD *)&String.Length = 2752512LL;
  v3 = 0;
  *(_QWORD *)&DestinationString.Length = 4325376LL;
  String.Buffer = (wchar_t *)v49;
  DestinationString.Buffer = (wchar_t *)v50;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  v33[0] = 0LL;
  v33[1] = 0LL;
  if ( *(_DWORD *)this )
  {
    while ( 1 )
    {
      memset(v31, 0, sizeof(v31));
      v4 = RtlAnsiStringToUnicodeString(&DestinationString, (PCANSI_STRING)(*((_QWORD *)this + 1) + 72LL * v3), 0);
      v8 = v4;
      if ( v4 >= 0 )
        break;
      v9 = WdLogNewEntry5_WdWarning(v6, v5, v7);
      *(_QWORD *)(v9 + 24) = v8;
      WdLogEvent5_WdWarning(v9);
LABEL_19:
      if ( ++v3 >= *(_DWORD *)this )
        return;
    }
    v10 = *((_QWORD *)this + 1);
    v33[0] = *(_QWORD *)(v10 + 72LL * v3 + 16);
    v11 = (DripsBlockerInfoList *)(v3 + *(_QWORD *)(v10 + 72LL * v3 + 16) + 1LL);
    *(_QWORD *)ActivityId.Data4 = v11;
    v12 = *(_QWORD *)(v10 + 72LL * v3 + 64);
    if ( v12 || *(_DWORD *)(v10 + 72LL * v3 + 36) )
    {
      if ( (Microsoft_Windows_SleepStudyEnableBits & 1) == 0 )
      {
LABEL_10:
        v13 = 0;
        v31[0] = &DestinationString;
        v14 = 0LL;
        do
        {
          if ( v13 != 1 )
          {
            v15 = *((_QWORD *)this + 1);
            v16 = v14 + 18LL * v3;
            v31[v14 + 1] = *(unsigned int *)(v15 + 4 * v16 + 24);
            v17 = RtlInt64ToUnicodeString(*(unsigned int *)(v15 + 4 * v16 + 24), 0xAu, &String);
            v21 = v17;
            if ( v17 >= 0 )
            {
              v23 = -1LL;
              v24 = off_1C0064C98[v14];
              do
                ++v23;
              while ( v24[v23] );
              UserData.Ptr = (ULONGLONG)&v25;
              v28 = v23 + 1;
              v35 = &v27;
              v29 = (String.Length >> 1) + 1;
              p_ActivityId = &ActivityId;
              v39 = &v28;
              v42 = 2 * (v23 + 1);
              v44 = &v29;
              Buffer = String.Buffer;
              v47 = 2 * v29;
              v41 = v24;
              *(_QWORD *)&UserData.Size = 1LL;
              v36 = 4LL;
              v38 = 16LL;
              v40 = 4LL;
              v43 = 0;
              v45 = 4LL;
              v48 = 0;
              EtwWrite(
                SLEEPSTUDY_ETW_PROVIDER_Context,
                &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA,
                &ActivityId,
                7u,
                &UserData);
            }
            else
            {
              v22 = WdLogNewEntry5_WdWarning(v19, v18, v20);
              *(_QWORD *)(v22 + 24) = v21;
              WdLogEvent5_WdWarning(v22);
            }
          }
          ++v13;
          ++v14;
        }
        while ( v13 < 4 );
        DripsBlockerInfoList::EmitSleepStudyBlockerTelemetry(
          v11,
          v25,
          (struct DripsBlockerInfoList::_DripsBlockerInfoTelemetryEntry *)v31);
        goto LABEL_19;
      }
      McTemplateK0ujqzr2jx(
        (struct _MCGEN_TRACE_CONTEXT *)&SLEEPSTUDY_ETW_PROVIDER_Context,
        v10,
        v12,
        v25,
        (__int64)v33,
        (DestinationString.Length >> 1) + 1,
        (__int64)DestinationString.Buffer,
        (__int64)&ActivityId,
        *(_QWORD *)(v10 + 72LL * v3 + 64));
    }
    if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
      McTemplateK0ujqzr2jx(
        (struct _MCGEN_TRACE_CONTEXT *)&SLEEPSTUDY_ETW_PROVIDER_Context,
        v10,
        v12,
        v25,
        (__int64)v33,
        (DestinationString.Length >> 1) + 1,
        (__int64)DestinationString.Buffer,
        (__int64)&ActivityId,
        *(_QWORD *)(*((_QWORD *)this + 1) + 72LL * v3 + 48));
    goto LABEL_10;
  }
}
