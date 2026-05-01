/*
 * XREFs of CrmSrvActivityQueryWindowClosedReasons @ 0x1800343CC
 * Callers:
 *     CrmRpcSrvActivityQueryWindowClosedReasons @ 0x1800343B0 (CrmRpcSrvActivityQueryWindowClosedReasons.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     CrmLogSrvActivityQueryWindowClosedReasonsStop @ 0x18003451C (CrmLogSrvActivityQueryWindowClosedReasonsStop.c)
 *     CrmRegistrationFindActivity @ 0x180034634 (CrmRegistrationFindActivity.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall CrmSrvActivityQueryWindowClosedReasons(__int64 a1, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  unsigned int v9; // esi
  int v10; // r12d
  __int64 Activity; // rax
  __int64 v12; // rdi
  _DWORD *Heap; // r9
  unsigned int i; // edx
  __int64 v15; // r8
  __int64 v17; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-88h] BYREF
  UUID *v19; // [rsp+50h] [rbp-68h]
  __int64 v20; // [rsp+58h] [rbp-60h]

  v4 = 0;
  v9 = 0;
  v10 = 31;
  if ( dword_18009B128 > 5u )
  {
    v20 = 16LL;
    v19 = &Uuid;
    TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008C543, 0LL, 0LL, 3u, &pData);
  }
  RtlAcquireSRWLockShared(a2);
  Activity = CrmRegistrationFindActivity(a2, a1);
  v12 = Activity;
  if ( Activity )
  {
    v10 = *(_DWORD *)(Activity + 48);
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 4LL * *(unsigned int *)(Activity + 72));
    if ( Heap )
    {
      for ( i = 0; i < *(_DWORD *)(v12 + 80); ++i )
      {
        v15 = *(_QWORD *)(v12 + 88) + 56LL * i;
        if ( !*(_DWORD *)(v15 + 48) )
        {
          v17 = v9++;
          Heap[v17] = *(_DWORD *)(v15 + 32);
        }
      }
      *a3 = Heap;
      *a4 = v9;
    }
    else
    {
      v4 = -1073741801;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  RtlReleaseSRWLockShared(a2);
  CrmLogSrvActivityQueryWindowClosedReasonsStop(a2, v10, a1, *a3, v9, v4);
  return v4;
}
