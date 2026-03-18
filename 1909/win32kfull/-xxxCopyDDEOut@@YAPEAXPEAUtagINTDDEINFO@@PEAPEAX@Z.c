/*
 * XREFs of ?xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z @ 0x1C020A4C4
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C020B5F0 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C007230C (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C020B43C (WPP_RECORDER_SF_DDD.c)
 *     xxxClientCopyDDEOut1 @ 0x1C021E414 (xxxClientCopyDDEOut1.c)
 */

__int64 __fastcall xxxCopyDDEOut(struct tagINTDDEINFO *a1, void **a2, int a3, int a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // rdi

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDD((_DWORD)a1, (_DWORD)a2, a3, a4);
  v6 = xxxClientCopyDDEOut1(a1);
  v9 = v6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *(_QWORD *)a1,
      v7,
      0xEu,
      0x3Du,
      (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 1),
      v6);
  if ( v9 && a2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(v8, v7, 14, 62, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids, *((_QWORD *)a1 + 3));
    *a2 = (void *)*((_QWORD *)a1 + 3);
  }
  return v9;
}
