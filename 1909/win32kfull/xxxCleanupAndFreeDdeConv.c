/*
 * XREFs of xxxCleanupAndFreeDdeConv @ 0x1C020B590
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C00CC060 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C020C054 (xxxFreeDdeConv.c)
 */

__int64 __fastcall xxxCleanupAndFreeDdeConv(struct tagDDECONV *a1, int a2)
{
  struct tagFREELIST *v3; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q((_DWORD)a1, a2, 14, 57, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids, a1);
  v3 = (struct tagFREELIST *)*((_QWORD *)a1 + 9);
  if ( v3 )
  {
    FreeListFree(v3);
    *((_QWORD *)a1 + 9) = 0LL;
  }
  return xxxFreeDdeConv(a1);
}
