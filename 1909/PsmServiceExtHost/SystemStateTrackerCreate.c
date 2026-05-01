/*
 * XREFs of SystemStateTrackerCreate @ 0x18004185C
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180041E70 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?SstpInitialize@@YAXPEAU_SYSTEM_STATE_TRACKER@@@Z @ 0x1800418F8 (-SstpInitialize@@YAXPEAU_SYSTEM_STATE_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 SystemStateTrackerCreate()
{
  struct _SYSTEM_STATE_TRACKER *Heap; // rax
  struct _SYSTEM_STATE_TRACKER *v1; // rbx
  unsigned int v2; // r9d
  unsigned int v4; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-60h] BYREF
  unsigned int *v6; // [rsp+58h] [rbp-40h]
  int v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+64h] [rbp-34h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-30h] BYREF

  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18009B520, 0LL, 0LL, 2u, &pData);
  Heap = (struct _SYSTEM_STATE_TRACKER *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xE8uLL);
  v1 = Heap;
  if ( Heap )
  {
    SstpInitialize(Heap);
    v2 = 0;
    GlobalSystemStateTracker = v1;
  }
  else
  {
    v2 = -1073741801;
  }
  v4 = v2;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v8 = 0;
    v6 = &v4;
    v7 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18009B4EF, 0LL, 0LL, 3u, &v5);
    return v4;
  }
  return v2;
}
