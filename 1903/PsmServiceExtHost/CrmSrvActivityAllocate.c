/*
 * XREFs of CrmSrvActivityAllocate @ 0x1800318D8
 * Callers:
 *     CrmRpcSrvActivityAllocate @ 0x180031800 (CrmRpcSrvActivityAllocate.c)
 * Callees:
 *     _TlgCreateSid @ 0x180017F20 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     CrmActivityPolicyTableEntryGet @ 0x180031828 (CrmActivityPolicyTableEntryGet.c)
 *     CrmActivityDereference @ 0x180032030 (CrmActivityDereference.c)
 *     CrmRegistrationCreateActivity @ 0x1800326EC (CrmRegistrationCreateActivity.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall CrmSrvActivityAllocate(__int64 *a1, __int64 a2, unsigned int a3, const WCHAR *a4, _QWORD *a5)
{
  __int64 v5; // r14
  __int64 v10; // r9
  int v11; // ebx
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  int v16; // eax
  int v17; // r9d
  int v18; // r9d
  __int64 v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v21; // [rsp+3Ch] [rbp-C4h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v23; // [rsp+50h] [rbp-B0h] BYREF
  UUID *v24; // [rsp+70h] [rbp-90h]
  int v25; // [rsp+78h] [rbp-88h]
  int v26; // [rsp+7Ch] [rbp-84h]
  int *v27; // [rsp+80h] [rbp-80h]
  int v28; // [rsp+88h] [rbp-78h]
  int v29; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v31; // [rsp+A0h] [rbp-60h]
  int v32; // [rsp+A8h] [rbp-58h]
  int v33; // [rsp+ACh] [rbp-54h]
  _QWORD *v34; // [rsp+B0h] [rbp-50h]
  int v35; // [rsp+B8h] [rbp-48h]
  int v36; // [rsp+BCh] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v38; // [rsp+D0h] [rbp-30h]
  int v39; // [rsp+D8h] [rbp-28h]
  int v40; // [rsp+DCh] [rbp-24h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v42; // [rsp+100h] [rbp+0h]
  int v43; // [rsp+108h] [rbp+8h]
  int v44; // [rsp+10Ch] [rbp+Ch]

  v19 = 0LL;
  v5 = -1LL;
  if ( dword_1800AB2F8 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 1uLL) )
  {
    v44 = 0;
    v42 = v10;
    v43 = 16;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009A879, 0LL, 0LL, 3u, &pData);
  }
  v11 = *(_DWORD *)(a2 + 24);
  if ( v11 >= 302 )
    goto LABEL_18;
  if ( a3 <= 0x2BC )
  {
    if ( (int)CrmActivityPolicyTableEntryGet(v11, a3, (__int64)v22) >= 0 && LODWORD(v22[0]) == v11 )
    {
      v12 = 0;
      goto LABEL_9;
    }
LABEL_18:
    v12 = -1073741811;
    goto LABEL_14;
  }
  v12 = -1073741811;
LABEL_9:
  if ( v12 >= 0 )
  {
    v13 = CrmRegistrationCreateActivity(a2, a3, &v19);
    v14 = v19;
    v12 = v13;
    if ( v13 >= 0 )
    {
      v5 = *(_QWORD *)(v19 + 48);
      v12 = 0;
      *a1 = v5;
      *a5 = *(_QWORD *)(v14 + 120);
    }
    if ( v14 )
      CrmActivityDereference();
  }
LABEL_14:
  if ( dword_1800AB2F8 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 1uLL) )
  {
    v16 = *(_DWORD *)(a2 + 24);
    v26 = 0;
    v29 = 0;
    v20 = v16;
    v24 = &Uuid;
    v27 = &v20;
    v21 = a3;
    v22[0] = v5;
    LODWORD(v19) = v12;
    v25 = 16;
    v28 = 4;
    TlgCreateSid(&pDesc, (const SID *)(a2 + 72));
    v33 = 0;
    v36 = 0;
    v31 = &v21;
    v32 = v17;
    v34 = v22;
    v35 = 8;
    TlgCreateWsz(&v37, a4);
    v40 = 0;
    v38 = &v19;
    v39 = v18;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009A332, 0LL, 0LL, 9u, &v23);
  }
  return (unsigned int)v12;
}
