/*
 * XREFs of zzzReattachThreads @ 0x1C0135DA8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 *     zzzAttachThreadInput @ 0x1C0135A64 (zzzAttachThreadInput.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01E7EAC (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     SetNewForegroundQueue @ 0x1C001B530 (SetNewForegroundQueue.c)
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006E63C (zzzEndDeferWinEventNotify.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C0133390 (zzzInputFocusReceivedWindowEvent.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C01359F0 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C01360DC (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C013617C (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C013625C (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 *     zzzAttachToQueue @ 0x1C01362F0 (zzzAttachToQueue.c)
 *     UnpackAffectedThreadList @ 0x1C0136714 (UnpackAffectedThreadList.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C0136774 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C01368DC (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0136904 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01F4DC4 (_GetNextQueueWindow.c)
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
  __int64 v22; // rdx
  __int64 v23; // r8
  struct tagQMSG *v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 NextQueueWindow; // rax
  struct tagTHREADINFO *v30; // [rsp+40h] [rbp-38h]
  char v31; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = a1 & 2;
  v7 = 1;
  v8 = a1 & 1;
  v9 = *(_QWORD *)(gptiCurrent + 424LL);
  v10 = *(_QWORD *)(v9 + 120);
  if ( v10 )
    v30 = *(struct tagTHREADINFO **)(v10 + 16);
  else
    v30 = *(struct tagTHREADINFO **)(v9 + 104);
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v31);
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
    v11 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_DWORD *)(v11 + 400) == 1 )
    goto LABEL_34;
  ++*(_DWORD *)(v11 + 404);
LABEL_11:
  v12 = 0LL;
  if ( gpqForeground && (v13 = *(_QWORD *)(gpqForeground + 128LL)) != 0 )
  {
    v14 = *(_QWORD *)(v13 + 16);
    v12 = *(_QWORD *)(v14 + 648);
    if ( !v12 && !InAffectedThreadList((const struct tagTHREADINFO *)v14) )
      v12 = *(_QWORD *)(v27 + 424);
  }
  else
  {
    v7 = 0;
  }
  v15 = 0LL;
  if ( gpqForegroundPrev )
  {
    v16 = *(_QWORD *)(gpqForegroundPrev + 136LL);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 16);
      v15 = *(_QWORD *)(v17 + 648);
      if ( !v15 && !InAffectedThreadList((const struct tagTHREADINFO *)v17) )
        v15 = *(_QWORD *)(v28 + 424);
    }
  }
  RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
  for ( i = RecalcHeadPtiListEntry->Flink; i != RecalcHeadPtiListEntry; i = i->Flink )
  {
    RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(i);
    v3 = RecalcPtiFromListEntry;
    if ( RecalcPtiFromListEntry )
    {
      v21 = (struct tagQ *)*((_QWORD *)RecalcPtiFromListEntry + 81);
      if ( v21 == *((struct tagQ **)RecalcPtiFromListEntry + 53) )
      {
        *((_QWORD *)RecalcPtiFromListEntry + 81) = 0LL;
      }
      else if ( v21 )
      {
        *((_QWORD *)RecalcPtiFromListEntry + 81) = 0LL;
        zzzAttachToQueue(RecalcPtiFromListEntry, v21);
      }
    }
  }
  RecalculateQueueInfo();
  if ( v11 )
  {
    v24 = *(struct tagQMSG **)(v11 + 24);
    --*(_DWORD *)(v11 + 404);
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 32) = 0LL;
    *(_DWORD *)(v11 + 40) = 0;
    RedistributeInput(v24, (struct tagQ *)v11, v30);
    v25 = *(_DWORD *)(v11 + 400);
    if ( !v25 )
    {
      *(_DWORD *)(v11 + 400) = 1;
      v22 = (__int64)v3;
LABEL_26:
      zzzDestroyQueue(v11, v22);
      goto LABEL_27;
    }
    v26 = *(_QWORD *)(v11 + 96);
    if ( v26 && v11 != *(_QWORD *)(v26 + 424) )
    {
      *(_DWORD *)(v11 + 400) = v25 + 1;
      zzzDestroyQueue(v11, v26);
    }
    v22 = *(_QWORD *)(v11 + 104);
    if ( v22 && v11 != *(_QWORD *)(v22 + 424) )
    {
      ++*(_DWORD *)(v11 + 400);
      goto LABEL_26;
    }
  }
LABEL_27:
  if ( *(_QWORD *)(gptiCurrent + 448LL) == grpdeskRitInput )
  {
    SetNewForegroundQueue(v12, v22, v23);
    gpqForegroundPrev = v15;
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) )
      zzzInputFocusReceivedWindowEvent(4);
    UnpackAffectedThreadList();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v31);
    zzzEndDeferWinEventNotify();
    if ( !gpqForeground && v7 )
    {
      NextQueueWindow = GetNextQueueWindow(
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL) + 112LL),
                          0LL,
                          0LL);
      if ( NextQueueWindow )
        PostEventMessageEx(
          *(struct tagTHREADINFO **)(NextQueueWindow + 16),
          *(_QWORD *)(*(_QWORD *)(NextQueueWindow + 16) + 424LL),
          6u,
          0LL,
          0,
          0LL,
          *(_QWORD *)NextQueueWindow,
          0LL);
    }
    GenerateMouseMove(0LL);
  }
  else
  {
    UnpackAffectedThreadList();
    UserAtomicCheck::Detach((UserAtomicCheck *)&v31);
    zzzEndDeferWinEventNotify();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v31);
  }
}
