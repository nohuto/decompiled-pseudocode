/*
 * XREFs of RtlpHpQueryVA @ 0x180050790
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x180047844 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegSegmentInitialize @ 0x18004DDE8 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegMgrRelease @ 0x180050284 (RtlpHpSegMgrRelease.c)
 *     RtlpHpLargeAlloc @ 0x180050968 (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x18010B714 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x18010B834 (RtlpHpSegMgrVaCtxInitialize.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x18010B890 (RtlpHpSegMgrVaCtxInsert.c)
 * Callees:
 *     RtlpHpVaMgrCtxQuery @ 0x1800506D4 (RtlpHpVaMgrCtxQuery.c)
 */

__int64 __fastcall RtlpHpQueryVA(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD v7[3]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-10h]

  RtlpHpVaMgrCtxQuery((__int64)&unk_180166AB8, a1, (__int64)v7);
  if ( a3 )
    *a3 = v7[2];
  if ( a4 )
    *a4 = v8;
  return v7[0];
}
