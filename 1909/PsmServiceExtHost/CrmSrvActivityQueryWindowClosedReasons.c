/*
 * XREFs of CrmSrvActivityQueryWindowClosedReasons @ 0x18003ABCC
 * Callers:
 *     CrmRpcSrvActivityQueryWindowClosedReasons @ 0x18003ABB0 (CrmRpcSrvActivityQueryWindowClosedReasons.c)
 * Callees:
 *     _TlgCreateSid @ 0x180017F20 (_TlgCreateSid.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     CrmActivityDereference @ 0x180032030 (CrmActivityDereference.c)
 *     CrmRegistrationFindActivity @ 0x18003231C (CrmRegistrationFindActivity.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall CrmSrvActivityQueryWindowClosedReasons(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // r14
  __int64 *Activity; // rbx
  SIZE_T v10; // r8
  PVOID ProcessHeap; // rcx
  _DWORD *Heap; // rdi
  unsigned int i; // r8d
  __int64 v14; // r9
  unsigned int v15; // edi
  __int64 v17; // r9
  int v18; // eax
  int v19; // r10d
  __int64 v20; // r8
  int v21; // r9d
  __int16 v22; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+34h] [rbp-CCh]
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v28; // [rsp+60h] [rbp-A0h] BYREF
  UUID *v29; // [rsp+80h] [rbp-80h]
  int v30; // [rsp+88h] [rbp-78h]
  int v31; // [rsp+8Ch] [rbp-74h]
  int *v32; // [rsp+90h] [rbp-70h]
  int v33; // [rsp+98h] [rbp-68h]
  int v34; // [rsp+9Ch] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-60h] BYREF
  int *v36; // [rsp+B0h] [rbp-50h]
  int v37; // [rsp+B8h] [rbp-48h]
  int v38; // [rsp+BCh] [rbp-44h]
  __int64 *v39; // [rsp+C0h] [rbp-40h]
  int v40; // [rsp+C8h] [rbp-38h]
  int v41; // [rsp+CCh] [rbp-34h]
  unsigned int *v42; // [rsp+D0h] [rbp-30h]
  int v43; // [rsp+D8h] [rbp-28h]
  int v44; // [rsp+DCh] [rbp-24h]
  __int16 *v45; // [rsp+E0h] [rbp-20h]
  int v46; // [rsp+E8h] [rbp-18h]
  int v47; // [rsp+ECh] [rbp-14h]
  __int64 v48; // [rsp+F0h] [rbp-10h]
  int v49; // [rsp+F8h] [rbp-8h]
  int v50; // [rsp+FCh] [rbp-4h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF
  __int64 v52; // [rsp+120h] [rbp+20h]
  int v53; // [rsp+128h] [rbp+28h]
  int v54; // [rsp+12Ch] [rbp+2Ch]

  v4 = 0LL;
  v23 = 701;
  if ( dword_1800AB2F8 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 1uLL) )
  {
    v54 = 0;
    v52 = v17;
    v53 = 16;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009A3AF, 0LL, 0LL, 3u, &pData);
  }
  RtlAcquireSRWLockShared(a2);
  Activity = CrmRegistrationFindActivity(a2, a1);
  if ( Activity )
  {
    RtlReleaseSRWLockShared(a2);
    v10 = 4LL * *((unsigned int *)Activity + 22);
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    v23 = *((_DWORD *)Activity + 14);
    Heap = RtlAllocateHeap(ProcessHeap, 0, v10);
    if ( Heap )
    {
      RtlAcquireSRWLockShared(Activity + 9);
      for ( i = 0; i < *((_DWORD *)Activity + 24); ++i )
      {
        v14 = Activity[13] + 56LL * i;
        if ( !*(_DWORD *)(v14 + 48) )
        {
          Heap[v4] = *(_DWORD *)(v14 + 32);
          v4 = (unsigned int)(v4 + 1);
        }
      }
      RtlReleaseSRWLockShared(Activity + 9);
      *a3 = Heap;
      v15 = 0;
      *a4 = v4;
    }
    else
    {
      v15 = -1073741801;
    }
  }
  else
  {
    v15 = -1073741811;
    RtlReleaseSRWLockShared(a2);
  }
  if ( Activity )
    CrmActivityDereference(Activity);
  if ( dword_1800AB2F8 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 1uLL) )
  {
    v18 = *(_DWORD *)(a2 + 24);
    v31 = 0;
    v34 = 0;
    v24 = v18;
    v25 = v23;
    v29 = &Uuid;
    v32 = &v24;
    v27 = a1;
    v26 = v15;
    v22 = v4;
    v30 = 16;
    v33 = 4;
    TlgCreateSid(&pDesc, (const SID *)(a2 + 72));
    v38 = 0;
    v41 = 0;
    v44 = 0;
    v47 = 0;
    v39 = &v27;
    v50 = 0;
    v42 = &v26;
    v45 = &v22;
    v36 = &v25;
    v37 = v19;
    v40 = 8;
    v43 = v19;
    v46 = 2;
    v48 = v20;
    v49 = 4 * v21;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009A573, 0LL, 0LL, 0xAu, &v28);
  }
  return v15;
}
