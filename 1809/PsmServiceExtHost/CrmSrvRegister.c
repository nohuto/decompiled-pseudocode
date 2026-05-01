/*
 * XREFs of CrmSrvRegister @ 0x18003B978
 * Callers:
 *     CrmRpcSrvRegister @ 0x18003B8F0 (CrmRpcSrvRegister.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     CrmLogSrvRegisterStop @ 0x18003BA84 (CrmLogSrvRegisterStop.c)
 *     CrmRegistrationStart @ 0x18003BB4C (CrmRegistrationStart.c)
 *     CrmRegistrationInitialize @ 0x18003BD58 (CrmRegistrationInitialize.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     CrmRegistrationCleanup @ 0x18007064C (CrmRegistrationCleanup.c)
 */

__int64 __fastcall CrmSrvRegister(_QWORD *a1, int a2, __int64 a3, __int64 a4)
{
  PVOID Heap; // rax
  void *v9; // rbx
  int v10; // edi
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-78h] BYREF
  UUID *v13; // [rsp+50h] [rbp-58h]
  int v14; // [rsp+58h] [rbp-50h]
  int v15; // [rsp+5Ch] [rbp-4Ch]

  if ( dword_18009B128 > 5u )
  {
    v15 = 0;
    v13 = &Uuid;
    v14 = 16;
    TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008C981, 0LL, 0LL, 3u, &pData);
  }
  if ( a2 >= 7 )
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
  CrmLogSrvRegisterStop((unsigned int)a2, a3, a4, (unsigned int)v10);
  return (unsigned int)v10;
}
