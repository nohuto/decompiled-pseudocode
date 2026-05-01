/*
 * XREFs of CrmActivityCleanup @ 0x1800067E4
 * Callers:
 *     CrmSrvActivityFree @ 0x1800066F8 (CrmSrvActivityFree.c)
 *     CrmRegistrationCreateActivity @ 0x180032FD4 (CrmRegistrationCreateActivity.c)
 *     CrmRegistrationCleanup @ 0x18007064C (CrmRegistrationCleanup.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     CrmStateMonitorListenerRemove @ 0x180031D18 (CrmStateMonitorListenerRemove.c)
 *     CrmRegistrationReadyQueueRemove @ 0x180034D48 (CrmRegistrationReadyQueueRemove.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CrmActivityCleanup(__int64 a1)
{
  unsigned int i; // edi
  void *v3; // r8
  BOOLEAN result; // al
  int v5; // r9d
  int v6; // [rsp+38h] [rbp-D0h] BYREF
  int v7; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v8; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  UUID *v12; // [rsp+78h] [rbp-90h]
  __int64 v13; // [rsp+80h] [rbp-88h]
  __int64 *v14; // [rsp+88h] [rbp-80h]
  __int64 v15; // [rsp+90h] [rbp-78h]
  int *v16; // [rsp+98h] [rbp-70h]
  __int64 v17; // [rsp+A0h] [rbp-68h]
  int *v18; // [rsp+A8h] [rbp-60h]
  __int64 v19; // [rsp+B0h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR v20; // [rsp+B8h] [rbp-50h] BYREF
  UUID *v21; // [rsp+D8h] [rbp-30h]
  __int64 v22; // [rsp+E0h] [rbp-28h]
  __int64 *v23; // [rsp+E8h] [rbp-20h]
  __int64 v24; // [rsp+F0h] [rbp-18h]
  __int64 *v25; // [rsp+F8h] [rbp-10h]
  __int64 v26; // [rsp+100h] [rbp-8h]
  char *v27; // [rsp+108h] [rbp+0h]
  __int64 v28; // [rsp+110h] [rbp+8h]

  for ( i = 0; i < *(_DWORD *)(a1 + 80); ++i )
    CrmStateMonitorListenerRemove(*(&qword_18009BB70 + *(unsigned int *)(*(_QWORD *)(a1 + 88) + 56LL * i + 32)));
  v3 = *(void **)(a1 + 88);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  result = CrmRegistrationReadyQueueRemove(*(_QWORD *)(a1 + 32), a1, 0LL);
  if ( *(_DWORD *)(a1 + 112) || *(_DWORD *)(a1 + 116) )
    result = NtDeleteWnfStateName();
  if ( *(_DWORD *)(a1 + 104) || *(_DWORD *)(a1 + 108) )
    result = NtDeleteWnfStateName();
  if ( *(_DWORD *)(a1 + 120) )
  {
    if ( dword_18009B128 > 5u )
    {
      result = TlgKeywordOn((TraceLoggingHProvider)&dword_18009B128, 0x400000000000uLL);
      if ( result )
      {
        v9 = *(_QWORD *)(a1 + 40);
        v6 = *(_DWORD *)(a1 + 52);
        v12 = &Uuid;
        v14 = &v9;
        v16 = &v6;
        v7 = v5;
        v13 = 16LL;
        v15 = 8LL;
        v17 = 4LL;
        v18 = &v7;
        v19 = 4LL;
        return TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008CD82, 0LL, 0LL, 6u, &pData);
      }
    }
  }
  else if ( dword_18009B128 > 5u )
  {
    v10 = *(_QWORD *)(a1 + 40);
    v8 = *(unsigned int *)(a1 + 52);
    v21 = &Uuid;
    v23 = &v10;
    v25 = &v8;
    v22 = 16LL;
    v24 = 8LL;
    v26 = 4LL;
    v27 = (char *)&v8 + 4;
    v28 = 4LL;
    return TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008CB33, 0LL, 0LL, 6u, &v20);
  }
  return result;
}
