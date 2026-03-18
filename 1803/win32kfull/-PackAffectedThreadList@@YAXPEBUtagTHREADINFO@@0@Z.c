/*
 * XREFs of ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C0058524
 * Callers:
 *     PackAffectedThreadsFromThreadCleanup @ 0x1C0058650 (PackAffectedThreadsFromThreadCleanup.c)
 *     zzzReattachThreads @ 0x1C00586B4 (zzzReattachThreads.c)
 * Callees:
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C005868C (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 *     UnpackAffectedThreadList @ 0x1C0058F38 (UnpackAffectedThreadList.c)
 */

void __fastcall PackAffectedThreadList(const struct tagTHREADINFO *a1, const struct tagTHREADINFO *a2)
{
  __int64 v2; // r10
  _QWORD **v5; // rsi
  _QWORD *i; // rbx
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  _QWORD *v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax

  v2 = *((_QWORD *)a1 + 56);
  v5 = (_QWORD **)(v2 + 168);
  if ( gListAffectedThreadsForQueueRecalc.Flink != &gListAffectedThreadsForQueueRecalc )
  {
    v13 = *(_QWORD *)(off_1C031C668 + 16LL);
    if ( v13 )
    {
      if ( *(_QWORD *)(v13 + 448) != v2 )
        UnpackAffectedThreadList(a1, a2, 0LL);
    }
  }
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    v7 = i - 91;
    v8 = *(i - 38);
    if ( (v8 == *((_QWORD *)a1 + 53)
       || v8 == gpqForeground
       || v8 == gpqForegroundPrev
       || a2 && v8 == *((_QWORD *)a2 + 53))
      && (v7[60] & 1) == 0
      && !InAffectedThreadList((const struct tagTHREADINFO *)(i - 91)) )
    {
      if ( (gnThreadsAffectedForQueueRecalc & 0x3F) == 0 )
      {
        v9 = (_QWORD *)Win32AllocPoolZInit(1536LL, 1767994197LL);
        if ( !v9 )
        {
          UnpackAffectedThreadList(v12, v11, 0LL);
          return;
        }
      }
      v9[2] = v7;
      v10 = (_QWORD *)off_1C031C668;
      if ( (struct _LIST_ENTRY *)*off_1C031C668 != &gListAffectedThreadsForQueueRecalc )
        __fastfail(3u);
      *v9 = &gListAffectedThreadsForQueueRecalc;
      v9[1] = v10;
      *v10 = v9;
      off_1C031C668 = v9;
      ++gnThreadsAffectedForQueueRecalc;
    }
  }
}
