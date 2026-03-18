/*
 * XREFs of RtlpHpQueryVA @ 0x1401108D8
 * Callers:
 *     RtlpHpGetOwnerHeap @ 0x140003384 (RtlpHpGetOwnerHeap.c)
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x14010DD20 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x14010DE0C (RtlpHpSegMgrVaCtxInitialize.c)
 *     RtlpHpSegSegmentInitialize @ 0x14010DF10 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpLargeAlloc @ 0x1401102C4 (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrRelease @ 0x140166A58 (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x14031B850 (RtlpHpSegMgrVaCtxFree.c)
 * Callees:
 *     RtlpHpEnvGetHeapManager @ 0x14001FDB8 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpVaMgrCtxQuery @ 0x14001FDF0 (RtlpHpVaMgrCtxQuery.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall RtlpHpQueryVA(__int64 a1, __int128 *a2, _QWORD *a3, _DWORD *a4)
{
  void *HeapManager; // rax
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(v11, 0, 0x20uLL);
  v10 = *a2;
  HeapManager = RtlpHpEnvGetHeapManager(&v10);
  RtlpHpVaMgrCtxQuery((__int64)HeapManager + 88, a1, (__int64)v11);
  if ( a3 )
    *a3 = v11[2];
  if ( a4 )
    *a4 = v11[3];
  return v11[0];
}
