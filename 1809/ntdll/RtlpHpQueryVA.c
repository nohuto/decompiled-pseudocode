/*
 * XREFs of RtlpHpQueryVA @ 0x180066388
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x180060A68 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegSegmentInitialize @ 0x18006494C (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegMgrRelease @ 0x180066270 (RtlpHpSegMgrRelease.c)
 *     RtlpHpLargeAlloc @ 0x18006657C (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x18010DBE0 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x18010DD08 (RtlpHpSegMgrVaCtxInitialize.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x18010DD64 (RtlpHpSegMgrVaCtxInsert.c)
 * Callees:
 *     RtlpHpVaMgrCtxQuery @ 0x1800662E4 (RtlpHpVaMgrCtxQuery.c)
 */

__int64 __fastcall RtlpHpQueryVA(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD v7[3]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-10h]

  RtlpHpVaMgrCtxQuery((__int64)&unk_180166950, a1, v7);
  if ( a3 )
    *a3 = v7[2];
  if ( a4 )
    *a4 = v8;
  return v7[0];
}
