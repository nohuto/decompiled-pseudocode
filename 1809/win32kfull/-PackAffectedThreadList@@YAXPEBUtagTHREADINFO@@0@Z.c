/*
 * XREFs of ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C00D72B8
 * Callers:
 *     zzzReattachThreads @ 0x1C00D695C (zzzReattachThreads.c)
 *     PackAffectedThreadsFromThreadCleanup @ 0x1C00D73E0 (PackAffectedThreadsFromThreadCleanup.c)
 * Callees:
 *     UnpackAffectedThreadList @ 0x1C00D7258 (UnpackAffectedThreadList.c)
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C00D741C (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
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
  __int64 v11; // rax

  v2 = *((_QWORD *)a1 + 57);
  v5 = (_QWORD **)(v2 + 168);
  if ( gListAffectedThreadsForQueueRecalc.Flink != &gListAffectedThreadsForQueueRecalc )
  {
    v11 = *(_QWORD *)(off_1C030C2A0 + 16LL);
    if ( v11 )
    {
      if ( *(_QWORD *)(v11 + 456) != v2 )
        UnpackAffectedThreadList();
    }
  }
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    v7 = i - 93;
    v8 = *(i - 39);
    if ( (v8 == *((_QWORD *)a1 + 54)
       || v8 == gpqForeground
       || v8 == gpqForegroundPrev
       || a2 && v8 == *((_QWORD *)a2 + 54))
      && (v7[61] & 1) == 0
      && !InAffectedThreadList((const struct tagTHREADINFO *)(i - 93)) )
    {
      if ( (gnThreadsAffectedForQueueRecalc & 0x3F) == 0 )
      {
        v9 = (_QWORD *)Win32AllocPoolZInit(1536LL, 1767994197LL);
        if ( !v9 )
        {
          UnpackAffectedThreadList();
          return;
        }
      }
      v9[2] = v7;
      v10 = (_QWORD *)off_1C030C2A0;
      if ( (struct _LIST_ENTRY *)*off_1C030C2A0 != &gListAffectedThreadsForQueueRecalc )
        __fastfail(3u);
      *v9 = &gListAffectedThreadsForQueueRecalc;
      v9[1] = v10;
      *v10 = v9;
      off_1C030C2A0 = v9;
      ++gnThreadsAffectedForQueueRecalc;
    }
  }
}
