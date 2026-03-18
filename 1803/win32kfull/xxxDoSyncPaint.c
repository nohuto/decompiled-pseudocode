/*
 * XREFs of xxxDoSyncPaint @ 0x1C0064E98
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0026608 (xxxEndDeferWindowPosEx.c)
 *     xxxInternalInvalidate @ 0x1C002AC50 (xxxInternalInvalidate.c)
 * Callees:
 *     xxxInternalDoSyncPaint @ 0x1C0029330 (xxxInternalDoSyncPaint.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C0064F04 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall xxxDoSyncPaint(__int64 a1, unsigned int a2)
{
  __int64 i; // r8
  __int64 v5; // r9
  __int64 result; // rax

  for ( i = *(_QWORD *)(a1 + 80); i; i = *(_QWORD *)(i + 80) )
  {
    v5 = *(_QWORD *)(i + 40);
    if ( (*(_BYTE *)(v5 + 31) & 2) != 0 )
      break;
    if ( *(_QWORD *)(v5 + 136) || (*(_BYTE *)(v5 + 17) & 0x10) != 0 )
      goto LABEL_5;
  }
  i = 0LL;
LABEL_5:
  if ( !i )
  {
    DoQueuedSyncPaint((struct tagWND *)a1, a2, gptiCurrent);
    return xxxInternalDoSyncPaint(a1, a2);
  }
  return result;
}
