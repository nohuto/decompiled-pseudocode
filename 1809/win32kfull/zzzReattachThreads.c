/*
 * XREFs of zzzReattachThreads @ 0x1C00D695C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 *     zzzAttachThreadInput @ 0x1C00D7444 (zzzAttachThreadInput.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01D3440 (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00444C0 (zzzEndDeferWinEventNotify.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C00CD26C (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C00CEFB0 (zzzInputFocusReceivedWindowEvent.c)
 *     SetNewForegroundQueue @ 0x1C00D0EA0 (SetNewForegroundQueue.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00D66A8 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C00D6C8C (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C00D6D2C (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C00D6E0C (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 *     zzzAttachToQueue @ 0x1C00D6E7C (zzzAttachToQueue.c)
 *     UnpackAffectedThreadList @ 0x1C00D7258 (UnpackAffectedThreadList.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C00D72B8 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C00D741C (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01DF048 (_GetNextQueueWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzReattachThreads(char a1, const struct tagTHREADINFO *a2, const struct tagTHREADINFO *a3)
{
  struct tagTHREADINFO *v3; // rsi
  int v4; // ebp
  int v7; // r12d
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rcx
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // r14
  struct _LIST_ENTRY *i; // rdi
  struct tagTHREADINFO *RecalcPtiFromListEntry; // rax
  struct tagQ *v21; // rdx
  struct tagQMSG *v22; // rcx
  int v23; // eax
  struct tagTHREADINFO *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 NextQueueWindow; // rax
  struct tagTHREADINFO *v29; // [rsp+40h] [rbp-38h]
  char v30; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = a1 & 2;
  v7 = 1;
  v8 = a1 & 1;
  v9 = *(_QWORD *)(gptiCurrent + 432LL);
  v10 = *(_QWORD *)(v9 + 112);
  if ( v10 )
    v29 = *(struct tagTHREADINFO **)(v10 + 16);
  else
    v29 = *(struct tagTHREADINFO **)(v9 + 96);
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v30);
  if ( v8 )
    goto LABEL_48;
  if ( a2 && a3 )
  {
    PackAffectedThreadList(a2, a3);
    goto LABEL_7;
  }
  if ( !v4 && !a3 )
  {
LABEL_48:
    UnpackAffectedThreadList();
    if ( v8 )
    {
LABEL_34:
      v11 = 0LL;
      goto LABEL_11;
    }
  }
LABEL_7:
  zzzRecalcThreadAttachment();
  v11 = gpqForeground;
  if ( !gpqForeground )
    v11 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_DWORD *)(v11 + 392) == 1 )
    goto LABEL_34;
  ++*(_DWORD *)(v11 + 396);
LABEL_11:
  v12 = 0LL;
  if ( gpqForeground && (v13 = *(_QWORD *)(gpqForeground + 120LL)) != 0 )
  {
    v14 = *(_QWORD *)(v13 + 16);
    v12 = *(_QWORD *)(v14 + 656);
    if ( !v12 && !InAffectedThreadList((const struct tagTHREADINFO *)v14) )
      v12 = *(_QWORD *)(v26 + 432);
  }
  else
  {
    v7 = 0;
  }
  v15 = 0LL;
  if ( gpqForegroundPrev )
  {
    v16 = *(_QWORD *)(gpqForegroundPrev + 128LL);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 16);
      v15 = *(_QWORD *)(v17 + 656);
      if ( !v15 && !InAffectedThreadList((const struct tagTHREADINFO *)v17) )
        v15 = *(_QWORD *)(v27 + 432);
    }
  }
  RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
  for ( i = RecalcHeadPtiListEntry->Flink; i != RecalcHeadPtiListEntry; i = i->Flink )
  {
    RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(i);
    v3 = RecalcPtiFromListEntry;
    if ( RecalcPtiFromListEntry )
    {
      v21 = (struct tagQ *)*((_QWORD *)RecalcPtiFromListEntry + 82);
      if ( v21 == *((struct tagQ **)RecalcPtiFromListEntry + 54) )
      {
        *((_QWORD *)RecalcPtiFromListEntry + 82) = 0LL;
      }
      else if ( v21 )
      {
        *((_QWORD *)RecalcPtiFromListEntry + 82) = 0LL;
        zzzAttachToQueue(RecalcPtiFromListEntry, v21);
      }
    }
  }
  RecalculateQueueInfo();
  if ( v11 )
  {
    v22 = *(struct tagQMSG **)(v11 + 24);
    --*(_DWORD *)(v11 + 396);
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 32) = 0LL;
    *(_DWORD *)(v11 + 40) = 0;
    RedistributeInput(v22, (struct tagQ *)v11, v29);
    v23 = *(_DWORD *)(v11 + 392);
    if ( !v23 )
    {
      *(_DWORD *)(v11 + 392) = 1;
      v24 = v3;
LABEL_26:
      zzzDestroyQueue(v11, v24);
      goto LABEL_27;
    }
    v25 = *(_QWORD *)(v11 + 88);
    if ( v25 && v11 != *(_QWORD *)(v25 + 432) )
    {
      *(_DWORD *)(v11 + 392) = v23 + 1;
      zzzDestroyQueue(v11, v25);
    }
    v24 = *(struct tagTHREADINFO **)(v11 + 96);
    if ( v24 && v11 != *((_QWORD *)v24 + 54) )
    {
      ++*(_DWORD *)(v11 + 392);
      goto LABEL_26;
    }
  }
LABEL_27:
  if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput )
  {
    SetNewForegroundQueue(v12);
    gpqForegroundPrev = v15;
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 112LL) )
      zzzInputFocusReceivedWindowEvent(4);
    UnpackAffectedThreadList();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v30);
    zzzEndDeferWinEventNotify();
    if ( !gpqForeground && v7 )
    {
      NextQueueWindow = GetNextQueueWindow(
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL) + 88LL),
                          0LL,
                          0LL);
      if ( NextQueueWindow )
        PostEventMessageEx(
          *(struct tagTHREADINFO **)(NextQueueWindow + 16),
          *(_QWORD *)(*(_QWORD *)(NextQueueWindow + 16) + 432LL),
          6u,
          0LL,
          0,
          0LL,
          *(LARGE_INTEGER *)NextQueueWindow,
          0LL);
    }
    GenerateMouseMove(0LL);
  }
  else
  {
    UnpackAffectedThreadList();
    UserAtomicCheck::Detach((UserAtomicCheck *)&v30);
    zzzEndDeferWinEventNotify();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v30);
  }
}
