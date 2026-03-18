/*
 * XREFs of ?EmitSleepStudyBlockerMetadataEvent@DripsBlockerTrackingHelper@@AEAAXEPEAGI_KPEAX@Z @ 0x1C0242E84
 * Callers:
 *     ?EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAXE@Z @ 0x1C02429F4 (-EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAXE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

void __fastcall DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
        DripsBlockerTrackingHelper *this,
        char a2,
        unsigned __int16 *a3,
        int a4,
        ULONGLONG Value,
        LPCGUID ActivityId)
{
  const GUID *v6; // rdi
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // [rsp+38h] [rbp-99h] BYREF
  int v14; // [rsp+3Ch] [rbp-95h] BYREF
  struct _UNICODE_STRING String; // [rsp+40h] [rbp-91h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-79h] BYREF
  int *v17; // [rsp+68h] [rbp-69h]
  __int64 v18; // [rsp+70h] [rbp-61h]
  const GUID *v19; // [rsp+78h] [rbp-59h]
  __int64 v20; // [rsp+80h] [rbp-51h]
  int *v21; // [rsp+88h] [rbp-49h]
  __int64 v22; // [rsp+90h] [rbp-41h]
  unsigned __int16 *v23; // [rsp+98h] [rbp-39h]
  int v24; // [rsp+A0h] [rbp-31h]
  int v25; // [rsp+A4h] [rbp-2Dh]
  int *v26; // [rsp+A8h] [rbp-29h]
  __int64 v27; // [rsp+B0h] [rbp-21h]
  wchar_t *Buffer; // [rsp+B8h] [rbp-19h]
  int v29; // [rsp+C0h] [rbp-11h]
  int v30; // [rsp+C4h] [rbp-Dh]
  _BYTE v31[48]; // [rsp+C8h] [rbp-9h] BYREF
  char v32; // [rsp+130h] [rbp+5Fh] BYREF
  int v33; // [rsp+140h] [rbp+6Fh] BYREF

  v33 = a4;
  v32 = a2;
  v6 = ActivityId;
  *(_QWORD *)&String.Length = 2752512LL;
  memset(v31, 0, 0x2AuLL);
  String.Buffer = (wchar_t *)v31;
  v8 = RtlInt64ToUnicodeString(Value, 0xAu, &String);
  v11 = v8;
  if ( v8 >= 0 )
  {
    UserData.Ptr = (ULONGLONG)&v32;
    v17 = &v13;
    v13 = 1;
    v21 = &v33;
    v14 = (String.Length >> 1) + 1;
    v24 = 2 * v33;
    v26 = &v14;
    Buffer = String.Buffer;
    v29 = 2 * v14;
    *(_QWORD *)&UserData.Size = 1LL;
    v25 = 0;
    v30 = 0;
    v18 = 4LL;
    v19 = v6;
    v20 = 16LL;
    v22 = 4LL;
    v23 = a3;
    v27 = 4LL;
    EtwWrite(SLEEPSTUDY_ETW_PROVIDER_Context, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA, v6, 7u, &UserData);
  }
  else
  {
    v12 = WdLogNewEntry5_WdWarning(v10, v9, 0LL);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdWarning(v12);
  }
}
