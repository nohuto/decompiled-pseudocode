/*
 * XREFs of zzzReattachThreads @ 0x1C00586B4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 *     zzzAttachThreadInput @ 0x1C00581EC (zzzAttachThreadInput.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01B0444 (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0028B0C (zzzEndDeferWinEventNotify.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0057B60 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C0058524 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C005868C (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C0058990 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C0058A28 (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C0058B08 (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 *     zzzAttachToQueue @ 0x1C0058B78 (zzzAttachToQueue.c)
 *     UnpackAffectedThreadList @ 0x1C0058F38 (UnpackAffectedThreadList.c)
 *     SetNewForegroundQueue @ 0x1C005A780 (SetNewForegroundQueue.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C005FC8C (zzzInputFocusReceivedWindowEvent.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C0198170 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     _GetNextQueueWindow @ 0x1C01BC474 (_GetNextQueueWindow.c)
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
  v10 = *(_QWORD *)(v9 + 112);
  if ( v10 )
    v36 = *(struct tagTHREADINFO **)(v10 + 16);
  else
    v36 = *(struct tagTHREADINFO **)(v9 + 96);
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v37);
  if ( v8 )
    goto LABEL_44;
  if ( a2 && a3 )
  {
    PackAffectedThreadList(a2, a3);
    goto LABEL_7;
  }
  if ( !v4 && !a3 )
  {
LABEL_44:
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
  if ( *(_DWORD *)(v14 + 392) == 1 )
    goto LABEL_34;
  ++*(_DWORD *)(v14 + 396);
LABEL_11:
  v15 = 0LL;
  if ( gpqForeground && (v16 = *(_QWORD *)(gpqForeground + 120LL)) != 0 )
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
    v19 = *(_QWORD *)(gpqForegroundPrev + 128LL);
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
    --*(_DWORD *)(v14 + 396);
    *(_QWORD *)(v14 + 24) = 0LL;
    *(_QWORD *)(v14 + 32) = 0LL;
    *(_DWORD *)(v14 + 40) = 0;
    RedistributeInput(v27, (struct tagQ *)v14, v36);
    v28 = *(_DWORD *)(v14 + 392);
    if ( !v28 )
    {
      *(_DWORD *)(v14 + 392) = 1;
      v25 = v3;
LABEL_26:
      zzzDestroyQueue(v14, v25);
      goto LABEL_27;
    }
    v32 = *(_QWORD *)(v14 + 88);
    if ( v32 && v14 != *(_QWORD *)(v32 + 424) )
    {
      *(_DWORD *)(v14 + 392) = v28 + 1;
      zzzDestroyQueue(v14, v32);
    }
    v25 = *(struct tagTHREADINFO **)(v14 + 96);
    if ( v25 && v14 != *((_QWORD *)v25 + 53) )
    {
      ++*(_DWORD *)(v14 + 392);
      goto LABEL_26;
    }
  }
LABEL_27:
  if ( *(_QWORD *)(gptiCurrent + 448LL) == grpdeskRitInput )
  {
    SetNewForegroundQueue(v15);
    gpqForegroundPrev = v18;
    v31 = gpqForeground;
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 112LL) )
      zzzInputFocusReceivedWindowEvent(4LL);
    UnpackAffectedThreadList(v31, v29, v30);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v37);
    zzzEndDeferWinEventNotify();
    if ( !gpqForeground && v7 )
    {
      NextQueueWindow = GetNextQueueWindow(
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL) + 88LL),
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
    UnpackAffectedThreadList(grpdeskRitInput, v25, v26);
    UserAtomicCheck::Detach((UserAtomicCheck *)&v37);
    zzzEndDeferWinEventNotify();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v37);
  }
}
