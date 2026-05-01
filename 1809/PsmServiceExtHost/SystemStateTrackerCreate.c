/*
 * XREFs of SystemStateTrackerCreate @ 0x180040E00
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180041050 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 SystemStateTrackerCreate()
{
  char *Heap; // rax
  char *v1; // rbx
  unsigned int v2; // r9d
  __int128 v3; // xmm0
  unsigned int v5; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-60h] BYREF
  unsigned int *v7; // [rsp+58h] [rbp-40h]
  int v8; // [rsp+60h] [rbp-38h]
  int v9; // [rsp+64h] [rbp-34h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-30h] BYREF

  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_18008DC0F, 0LL, 0LL, 2u, &pData);
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xE8uLL);
  v1 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0xE8uLL);
    RtlInitializeSRWLock(v1);
    *((_DWORD *)v1 + 2) = 0;
    v2 = 0;
    *(_OWORD *)(v1 + 24) = g_TrackedWnfs;
    *(_OWORD *)(v1 + 40) = *((_OWORD *)&g_TrackedWnfs + 1);
    *(_OWORD *)(v1 + 56) = *((_OWORD *)&g_TrackedWnfs + 2);
    *(_OWORD *)(v1 + 72) = *((_OWORD *)&g_TrackedWnfs + 3);
    *(_OWORD *)(v1 + 88) = *((_OWORD *)&g_TrackedWnfs + 4);
    *(_OWORD *)(v1 + 104) = *((_OWORD *)&g_TrackedWnfs + 5);
    *(_OWORD *)(v1 + 120) = *((_OWORD *)&g_TrackedWnfs + 6);
    *(_OWORD *)(v1 + 136) = *((_OWORD *)&g_TrackedWnfs + 7);
    *(_OWORD *)(v1 + 152) = *((_OWORD *)&g_TrackedWnfs + 8);
    v3 = *((_OWORD *)&g_TrackedWnfs + 9);
    *(_QWORD *)(v1 + 220) = WNF_HAM_SYSTEM_STATE_CHANGED;
    *(_OWORD *)(v1 + 168) = v3;
    *((_DWORD *)v1 + 4) = 2;
    GlobalSystemStateTracker = (struct _SYSTEM_STATE_TRACKER *)v1;
  }
  else
  {
    v2 = -1073741801;
  }
  v5 = v2;
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 9uLL) )
  {
    v9 = 0;
    v7 = &v5;
    v8 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_18008DBDE, 0LL, 0LL, 3u, &v6);
    return v5;
  }
  return v2;
}
