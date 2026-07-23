/*
 * XREFs of RtlpHpQueryVA @ 0x14000A390
 * Callers:
 *     RtlpHpSegMgrVaCtxInsert @ 0x14000780C (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x1400078F8 (RtlpHpSegMgrVaCtxInitialize.c)
 *     RtlpHpLargeAlloc @ 0x140009ED8 (RtlpHpLargeAlloc.c)
 *     RtlpHpSegSegmentInitialize @ 0x14000DC20 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpGetOwnerHeap @ 0x14000E6C0 (RtlpHpGetOwnerHeap.c)
 *     RtlpHpSegMgrRelease @ 0x14015484C (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x1402FCFF0 (RtlpHpSegMgrVaCtxFree.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlpHpVaMgrCtxQuery @ 0x14000CAF4 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpEnvGetHeapManager @ 0x14000CE30 (RtlpHpEnvGetHeapManager.c)
 */

__int64 __fastcall RtlpHpQueryVA(__int64 a1, __int128 *a2, _QWORD *a3, _DWORD *a4)
{
  __int64 HeapManager; // rax
  __int64 v7; // r10
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+38h] [rbp-10h]

  v9 = *a2;
  HeapManager = RtlpHpEnvGetHeapManager(&v9);
  RtlpHpVaMgrCtxQuery(HeapManager + 80, v7, &v9);
  if ( a3 )
    *a3 = v10;
  if ( a4 )
    *a4 = v11;
  return v9;
}
