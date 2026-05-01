/*
 * XREFs of CrmSrvActivityStart @ 0x180031A58
 * Callers:
 *     CrmRpcSrvActivityStart @ 0x180031A10 (CrmRpcSrvActivityStart.c)
 * Callees:
 *     _TlgCreateSid @ 0x180017F20 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     CempStringDuplicate @ 0x180031CA0 (CempStringDuplicate.c)
 *     CrmActivityDereference @ 0x180032030 (CrmActivityDereference.c)
 *     CrmRegistrationFindActivity @ 0x18003231C (CrmRegistrationFindActivity.c)
 *     CrmActivityOutstandingStartCountIncrement @ 0x18003235C (CrmActivityOutstandingStartCountIncrement.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

__int64 __fastcall CrmSrvActivityStart(__int64 a1, __int64 a2, const WCHAR *a3, const WCHAR *a4, int a5)
{
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // r9
  __int64 Activity; // rbx
  int v13; // eax
  unsigned int i; // edx
  __int64 v15; // r8
  void *v16; // r8
  void *v17; // r8
  __int64 v18; // rax
  LPCWSTR v19; // rcx
  unsigned int v20; // edi
  int v22; // r9d
  __int16 v23; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+34h] [rbp-CCh]
  int v25; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+3Ch] [rbp-C4h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v28; // [rsp+44h] [rbp-BCh] BYREF
  LPCWSTR v29; // [rsp+48h] [rbp-B8h]
  __int64 v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  __int64 v32; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  __int64 v34; // [rsp+70h] [rbp-90h] BYREF
  LPCWSTR pwsz; // [rsp+78h] [rbp-88h]
  __int64 v36; // [rsp+80h] [rbp-80h] BYREF
  __int64 v37; // [rsp+88h] [rbp-78h] BYREF
  __int64 v38; // [rsp+90h] [rbp-70h] BYREF
  __int64 v39; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR v40; // [rsp+A0h] [rbp-60h] BYREF
  UUID *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  int *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  int *v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  __int64 *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+120h] [rbp+20h] BYREF
  int *v52; // [rsp+130h] [rbp+30h]
  __int64 v53; // [rsp+138h] [rbp+38h]
  __int16 *v54; // [rsp+140h] [rbp+40h]
  __int64 v55; // [rsp+148h] [rbp+48h]
  _DWORD *v56; // [rsp+150h] [rbp+50h]
  int v57; // [rsp+158h] [rbp+58h]
  int v58; // [rsp+15Ch] [rbp+5Ch]
  __int64 *v59; // [rsp+160h] [rbp+60h]
  __int64 v60; // [rsp+168h] [rbp+68h]
  __int64 *v61; // [rsp+170h] [rbp+70h]
  __int64 v62; // [rsp+178h] [rbp+78h]
  __int64 *v63; // [rsp+180h] [rbp+80h]
  __int64 v64; // [rsp+188h] [rbp+88h]
  __int64 *v65; // [rsp+190h] [rbp+90h]
  __int64 v66; // [rsp+198h] [rbp+98h]
  unsigned int *v67; // [rsp+1A0h] [rbp+A0h]
  __int64 v68; // [rsp+1A8h] [rbp+A8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v70; // [rsp+1D0h] [rbp+D0h]
  int v71; // [rsp+1D8h] [rbp+D8h]
  int v72; // [rsp+1DCh] [rbp+DCh]
  _DWORD v73[36]; // [rsp+1E0h] [rbp+E0h] BYREF

  pwsz = a3;
  v31 = a1;
  v29 = a4;
  v8 = -1LL;
  v24 = 701;
  v9 = -1LL;
  v10 = 0LL;
  memset_0(v73, 0, 0x84uLL);
  v32 = MEMORY[0x7FFE0008];
  RtlQueryUnbiasedInterruptTime(&v33);
  if ( dword_1800AB2F8 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 1uLL) )
  {
    v72 = 0;
    v70 = v11;
    v71 = 16;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009A9EB, 0LL, 0LL, 3u, &pData);
  }
  RtlAcquireSRWLockShared(a2);
  Activity = CrmRegistrationFindActivity(a2, a1);
  if ( Activity )
  {
    RtlReleaseSRWLockShared(a2);
    RtlAcquireSRWLockExclusive(Activity + 72);
    *(_DWORD *)(Activity + 80) = GetCurrentThreadId();
    v24 = *(_DWORD *)(Activity + 56);
    CrmActivityOutstandingStartCountIncrement(Activity);
    v13 = *(_DWORD *)(Activity + 160);
    if ( v13 == 3 || v13 < a5 )
      *(_DWORD *)(Activity + 160) = a5;
    for ( i = 0; i < *(_DWORD *)(Activity + 96); ++i )
    {
      v15 = *(_QWORD *)(Activity + 104) + 56LL * i;
      if ( !*(_DWORD *)(v15 + 48) )
      {
        v73[v10] = *(_DWORD *)(v15 + 32);
        v10 = (unsigned int)(v10 + 1);
      }
    }
    v16 = *(void **)(Activity + 200);
    v8 = *(_QWORD *)(Activity + 144);
    v30 = *(_QWORD *)(Activity + 152);
    if ( v16 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
    v17 = *(void **)(Activity + 208);
    if ( v17 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
    v18 = CempStringDuplicate(a3);
    v19 = v29;
    *(_QWORD *)(Activity + 200) = v18;
    *(_QWORD *)(Activity + 208) = CempStringDuplicate(v19);
    v20 = 0;
    *(_DWORD *)(Activity + 80) = 0;
    RtlReleaseSRWLockExclusive(Activity + 72);
    v9 = v30;
  }
  else
  {
    v20 = -1073741811;
    RtlReleaseSRWLockShared(a2);
  }
  if ( Activity )
    CrmActivityDereference(Activity);
  if ( dword_1800AB2F8 > 5u && (qword_1800AB308 & 1) != 0 && (qword_1800AB310 & 1) == qword_1800AB310 )
  {
    v25 = *(_DWORD *)(a2 + 24);
    v26 = v24;
    v34 = v31;
    v36 = v32;
    v37 = v33;
    v41 = &Uuid;
    v43 = &v25;
    v27 = a5;
    v23 = v10;
    v38 = v9;
    v39 = v8;
    v28 = v20;
    v42 = 16LL;
    v44 = 4LL;
    TlgCreateSid(&pDesc, (const SID *)(a2 + 72));
    v46 = &v26;
    v47 = 4LL;
    v48 = &v34;
    v49 = 8LL;
    TlgCreateWsz(&v50, pwsz);
    TlgCreateWsz(&v51, v29);
    v54 = &v23;
    v52 = &v27;
    v56 = v73;
    v59 = &v36;
    v61 = &v37;
    v63 = &v38;
    v65 = &v39;
    v67 = &v28;
    v53 = 4LL;
    v55 = 2LL;
    v57 = 4 * v22;
    v58 = 0;
    v60 = 8LL;
    v62 = 8LL;
    v64 = 8LL;
    v66 = 8LL;
    v68 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009A6D9, 0LL, 0LL, 0x11u, &v40);
  }
  return v20;
}
