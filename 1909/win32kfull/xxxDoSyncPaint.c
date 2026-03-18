/*
 * XREFs of xxxDoSyncPaint @ 0x1C005137C
 * Callers:
 *     xxxInternalInvalidate @ 0x1C0065240 (xxxInternalInvalidate.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00702A0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     xxxInternalDoSyncPaint @ 0x1C0050C60 (xxxInternalDoSyncPaint.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00513E8 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 */

char __fastcall xxxDoSyncPaint(__int64 a1, unsigned int a2)
{
  __int64 i; // r8
  __int64 v5; // r9
  _BOOL8 v6; // r8
  char result; // al

  for ( i = *(_QWORD *)(a1 + 104); i; i = *(_QWORD *)(i + 104) )
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
    return xxxInternalDoSyncPaint(a1, a2, v6);
  }
  return result;
}
