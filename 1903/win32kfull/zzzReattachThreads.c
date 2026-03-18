/*
 * XREFs of zzzReattachThreads @ 0x1C00128B4
 * Callers:
 *     zzzAttachThreadInput @ 0x1C00123D8 (zzzAttachThreadInput.c)
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01E802C (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0012058 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C001271C (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C001288C (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C0012BE8 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C0012C88 (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C0012D68 (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 *     zzzAttachToQueue @ 0x1C0012DFC (zzzAttachToQueue.c)
 *     UnpackAffectedThreadList @ 0x1C0013220 (UnpackAffectedThreadList.c)
 *     SetNewForegroundQueue @ 0x1C0013A60 (SetNewForegroundQueue.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C0014830 (zzzInputFocusReceivedWindowEvent.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C0017FEC (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00CCF6C (zzzEndDeferWinEventNotify.c)
 *     _GetNextQueueWindow @ 0x1C01F4F44 (_GetNextQueueWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzReattachThreads(char a1, const struct tagTHREADINFO *a2, struct _LIST_ENTRY **a3)
{
  struct tagTHREADINFO *v3; // rsi
  int v4; // ebp
  int v7; // r12d
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // r14
  struct _LIST_ENTRY *i; // rdi
  struct tagTHREADINFO *RecalcPtiFromListEntry; // rax
  struct tagQ *v24; // rdx
  struct tagTHREADINFO *v25; // rdx
  __int64 v26; // r8
  struct tagQMSG *v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 NextQueueWindow; // rax
  struct tagTHREADINFO *v36; // [rsp+40h] [rbp-38h]
  char v37; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = a1 & 2;
  v7 = 1;
  v8 = a1 & 1;
  v9 = *(_QWORD *)(gptiCurrent + 424LL);
  v10 = *(_QWORD *)(v9 + 120);
  if ( v10 )
    v36 = *(struct tagTHREADINFO **)(v10 + 16);
  else
    v36 = *(struct tagTHREADINFO **)(v9 + 104);
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v37);
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
    UnpackAffectedThreadList(v12, v11, v13);
    if ( v8 )
    {
LABEL_34:
      v14 = 0LL;
      goto LABEL_11;
    }
  }
LABEL_7:
  zzzRecalcThreadAttachment();
  v14 = gpqForeground;
  if ( !gpqForeground )
    v14 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_DWORD *)(v14 + 400) == 1 )
    goto LABEL_34;
  ++*(_DWORD *)(v14 + 404);
LABEL_11:
  v15 = 0LL;
  if ( gpqForeground && (v16 = *(_QWORD *)(gpqForeground + 128LL)) != 0 )
  {
    v17 = *(_QWORD *)(v16 + 16);
    v15 = *(_QWORD *)(v17 + 648);
    if ( !v15 && !InAffectedThreadList((const struct tagTHREADINFO *)v17) )
      v15 = *(_QWORD *)(v33 + 424);
  }
  else
  {
    v7 = 0;
  }
  v18 = 0LL;
  if ( gpqForegroundPrev )
  {
    v19 = *(_QWORD *)(gpqForegroundPrev + 136LL);
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 16);
      v18 = *(_QWORD *)(v20 + 648);
      if ( !v18 && !InAffectedThreadList((const struct tagTHREADINFO *)v20) )
        v18 = *(_QWORD *)(v34 + 424);
    }
  }
  RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
  for ( i = RecalcHeadPtiListEntry->Flink; i != RecalcHeadPtiListEntry; i = i->Flink )
  {
    RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(i);
    v3 = RecalcPtiFromListEntry;
    if ( RecalcPtiFromListEntry )
    {
      v24 = (struct tagQ *)*((_QWORD *)RecalcPtiFromListEntry + 81);
      if ( v24 == *((struct tagQ **)RecalcPtiFromListEntry + 53) )
      {
        *((_QWORD *)RecalcPtiFromListEntry + 81) = 0LL;
      }
      else if ( v24 )
      {
        *((_QWORD *)RecalcPtiFromListEntry + 81) = 0LL;
        zzzAttachToQueue(RecalcPtiFromListEntry, v24);
      }
    }
  }
  RecalculateQueueInfo();
  if ( v14 )
  {
    v27 = *(struct tagQMSG **)(v14 + 24);
    --*(_DWORD *)(v14 + 404);
    *(_QWORD *)(v14 + 24) = 0LL;
    *(_QWORD *)(v14 + 32) = 0LL;
    *(_DWORD *)(v14 + 40) = 0;
    RedistributeInput(v27, (struct tagQ *)v14, v36);
    v28 = *(_DWORD *)(v14 + 400);
    if ( !v28 )
    {
      *(_DWORD *)(v14 + 400) = 1;
      v25 = v3;
LABEL_26:
      zzzDestroyQueue(v14, v25);
      goto LABEL_27;
    }
    v32 = *(_QWORD *)(v14 + 96);
    if ( v32 && v14 != *(_QWORD *)(v32 + 424) )
    {
      *(_DWORD *)(v14 + 400) = v28 + 1;
      zzzDestroyQueue(v14, v32);
    }
    v25 = *(struct tagTHREADINFO **)(v14 + 104);
    if ( v25 && v14 != *((_QWORD *)v25 + 53) )
    {
      ++*(_DWORD *)(v14 + 400);
      goto LABEL_26;
    }
  }
LABEL_27:
  if ( *(_QWORD *)(gptiCurrent + 448LL) == grpdeskRitInput )
  {
    SetNewForegroundQueue(v15);
    gpqForegroundPrev = v18;
    v31 = gpqForeground;
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) )
      zzzInputFocusReceivedWindowEvent(4LL);
    UnpackAffectedThreadList(v31, v29, v30);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v37);
    zzzEndDeferWinEventNotify();
    if ( !gpqForeground && v7 )
    {
      NextQueueWindow = GetNextQueueWindow(
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL) + 112LL),
                          0LL,
                          0LL);
      if ( NextQueueWindow )
        PostEventMessageEx(*(struct tagTHREADINFO **)(NextQueueWindow + 16), 0, 0LL, *(_QWORD *)NextQueueWindow, 0LL);
    }
    GenerateMouseMove(0LL);
  }
  else
  {
    UnpackAffectedThreadList(grpdeskRitInput, v25, v26);
    UserAtomicCheck::Detach((UserAtomicCheck *)&v37);
    zzzEndDeferWinEventNotify();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v37);
  }
}
