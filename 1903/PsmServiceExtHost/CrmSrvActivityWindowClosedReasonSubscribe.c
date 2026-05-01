/*
 * XREFs of CrmSrvActivityWindowClosedReasonSubscribe @ 0x18003EE0C
 * Callers:
 *     CrmRpcSrvActivityWindowClosedReasonSubscribe @ 0x18003EDF0 (CrmRpcSrvActivityWindowClosedReasonSubscribe.c)
 * Callees:
 *     _TlgCreateSid @ 0x180017F20 (_TlgCreateSid.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     RmpWnfCreateStateNameForClient @ 0x180031190 (RmpWnfCreateStateNameForClient.c)
 *     CrmActivityDereference @ 0x180032030 (CrmActivityDereference.c)
 *     CrmRegistrationFindActivity @ 0x18003231C (CrmRegistrationFindActivity.c)
 *     CrmRegistrationNotifyWindowClosedReasonChange @ 0x18003C5C4 (CrmRegistrationNotifyWindowClosedReasonChange.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall CrmSrvActivityWindowClosedReasonSubscribe(__int64 a1, __int64 a2, struct _WNF_STATE_NAME *a3)
{
  int v6; // r12d
  struct _WNF_STATE_NAME *Activity; // rax
  volatile signed __int64 *v8; // rdi
  struct _WNF_STATE_NAME *v9; // r14
  int StateNameForClient; // ebx
  int v12; // eax
  int v13; // r8d
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v18; // [rsp+50h] [rbp-B0h] BYREF
  UUID *v19; // [rsp+70h] [rbp-90h]
  int v20; // [rsp+78h] [rbp-88h]
  int v21; // [rsp+7Ch] [rbp-84h]
  int *v22; // [rsp+80h] [rbp-80h]
  int v23; // [rsp+88h] [rbp-78h]
  int v24; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  int *v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A8h] [rbp-58h]
  int v28; // [rsp+ACh] [rbp-54h]
  __int64 *v29; // [rsp+B0h] [rbp-50h]
  int v30; // [rsp+B8h] [rbp-48h]
  int v31; // [rsp+BCh] [rbp-44h]
  int *v32; // [rsp+C0h] [rbp-40h]
  int v33; // [rsp+C8h] [rbp-38h]
  int v34; // [rsp+CCh] [rbp-34h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  UUID *v36; // [rsp+F0h] [rbp-10h]
  int v37; // [rsp+F8h] [rbp-8h]
  int v38; // [rsp+FCh] [rbp-4h]

  v6 = 701;
  if ( dword_1800AB2F8 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 1uLL) )
  {
    v38 = 0;
    v36 = &Uuid;
    v37 = 16;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009A9AA, 0LL, 0LL, 3u, &pData);
  }
  RtlAcquireSRWLockExclusive(a2);
  *(_DWORD *)(a2 + 8) = GetCurrentThreadId();
  Activity = (struct _WNF_STATE_NAME *)CrmRegistrationFindActivity(a2, a1);
  v8 = (volatile signed __int64 *)Activity;
  if ( Activity )
  {
    v6 = Activity[7].Data[0];
    v9 = Activity + 16;
    if ( Activity[16].Data[0] || Activity[16].Data[1] )
    {
      StateNameForClient = -1073741811;
    }
    else
    {
      StateNameForClient = RmpWnfCreateStateNameForClient((PSID)(a2 + 72), 0, 0, Activity + 16);
      if ( StateNameForClient >= 0 )
      {
        CrmRegistrationNotifyWindowClosedReasonChange(a2, (__int64)v8);
        *a3 = *v9;
      }
    }
  }
  else
  {
    StateNameForClient = -1073741811;
  }
  *(_DWORD *)(a2 + 8) = 0;
  RtlReleaseSRWLockExclusive(a2);
  if ( v8 )
    CrmActivityDereference(v8);
  if ( dword_1800AB2F8 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 1uLL) )
  {
    v12 = *(_DWORD *)(a2 + 24);
    v21 = 0;
    v24 = 0;
    v14 = v12;
    v22 = &v14;
    v15 = v6;
    v17 = a1;
    v16 = StateNameForClient;
    v19 = &Uuid;
    v20 = 16;
    v23 = 4;
    TlgCreateSid(&pDesc, (const SID *)(a2 + 72));
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v29 = &v17;
    v32 = &v16;
    v26 = &v15;
    v27 = v13;
    v30 = v13 + 4;
    v33 = v13;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009A8D0, 0LL, 0LL, v13 + 4, &v18);
  }
  return (unsigned int)StateNameForClient;
}
