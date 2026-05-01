/*
 * XREFs of CrmSrvRegister @ 0x1800080F8
 * Callers:
 *     CrmRpcSrvRegister @ 0x180008070 (CrmRpcSrvRegister.c)
 * Callees:
 *     CrmRegistrationStart @ 0x18000820C (CrmRegistrationStart.c)
 *     CrmRegistrationInitialize @ 0x1800083B4 (CrmRegistrationInitialize.c)
 *     _TlgCreateSid @ 0x180017F20 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     CrmRegistrationCleanup @ 0x18003CCEC (CrmRegistrationCleanup.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall CrmSrvRegister(_QWORD *a1, int a2, const WCHAR *a3, const SID *a4)
{
  PVOID Heap; // rax
  void *v9; // rbx
  int v10; // edi
  int v12; // r9d
  int v13; // [rsp+30h] [rbp-99h] BYREF
  int v14; // [rsp+34h] [rbp-95h] BYREF
  EVENT_DATA_DESCRIPTOR v15; // [rsp+40h] [rbp-89h] BYREF
  UUID *v16; // [rsp+60h] [rbp-69h]
  int v17; // [rsp+68h] [rbp-61h]
  int v18; // [rsp+6Ch] [rbp-5Dh]
  int *v19; // [rsp+70h] [rbp-59h]
  int v20; // [rsp+78h] [rbp-51h]
  int v21; // [rsp+7Ch] [rbp-4Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+90h] [rbp-39h] BYREF
  int *v24; // [rsp+A0h] [rbp-29h]
  int v25; // [rsp+A8h] [rbp-21h]
  int v26; // [rsp+ACh] [rbp-1Dh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-19h] BYREF
  UUID *v28; // [rsp+D0h] [rbp+7h]
  int v29; // [rsp+D8h] [rbp+Fh]
  int v30; // [rsp+DCh] [rbp+13h]

  if ( dword_1800AB2F8 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 1uLL) )
  {
    v30 = 0;
    v28 = &Uuid;
    v29 = 16;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009A8A7, 0LL, 0LL, 3u, &pData);
  }
  if ( a2 >= 302 )
  {
    v10 = -1073741811;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x90uLL);
    v9 = Heap;
    if ( Heap )
    {
      CrmRegistrationInitialize(Heap);
      v10 = CrmRegistrationStart(v9, a4, (unsigned int)a2);
      if ( v10 >= 0 )
      {
        *a1 = v9;
        v9 = 0LL;
        v10 = 0;
      }
      if ( v9 )
      {
        CrmRegistrationCleanup(v9, 1LL);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
      }
    }
    else
    {
      v10 = -1073741801;
    }
  }
  if ( dword_1800AB2F8 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 1uLL) )
  {
    v18 = 0;
    v21 = 0;
    v19 = &v13;
    v20 = 4;
    v13 = a2;
    v14 = v10;
    v16 = &Uuid;
    v17 = 16;
    TlgCreateSid(&pDesc, a4);
    TlgCreateWsz(&v23, a3);
    v26 = 0;
    v24 = &v14;
    v25 = v12;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009A3ED, 0LL, 0LL, 7u, &v15);
  }
  return (unsigned int)v10;
}
