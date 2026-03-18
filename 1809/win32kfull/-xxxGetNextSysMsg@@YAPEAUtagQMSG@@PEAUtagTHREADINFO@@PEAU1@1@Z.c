/*
 * XREFs of ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x1C0037170
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     DeferMessagesOnQueue @ 0x1C0004A60 (DeferMessagesOnQueue.c)
 *     InternalSetTimer @ 0x1C0017750 (InternalSetTimer.c)
 *     PhkNextValid @ 0x1C00B5C80 (PhkNextValid.c)
 *     WakeSomeone @ 0x1C00D435C (WakeSomeone.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01D3534 (xxxCallJournalPlaybackHook.c)
 */

__int64 __fastcall xxxGetNextSysMsg(struct tagTHREADINFO *a1, struct tagQMSG *a2, struct tagQMSG *a3)
{
  __int64 Valid; // rcx
  __int64 v7; // rcx
  struct tagMLIST *v8; // r8
  struct tagQMSG *v9; // rcx
  __int64 v10; // rax
  struct tagQMSG **v12; // rcx
  unsigned int v13; // eax
  int v14; // eax

  Valid = *(_QWORD *)(*((_QWORD *)a1 + 58) + 56LL);
  if ( !Valid )
    goto LABEL_2;
  if ( (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
    Valid = PhkNextValid();
  if ( !Valid || *((_QWORD *)a1 + 57) != grpdeskRitInput )
  {
LABEL_2:
    PostPendingMouseMove(*((_QWORD *)a1 + 54));
    v7 = *((_QWORD *)a1 + 54);
    v8 = (struct tagMLIST *)(v7 + 24);
    if ( !*(_DWORD *)(v7 + 40) )
      return 0LL;
    if ( a2 && (v12 = *(struct tagQMSG ***)(v7 + 80), (unsigned __int64)v12 > 1) )
      v9 = *v12;
    else
      v9 = *(struct tagQMSG **)v8;
    if ( (*((_DWORD *)a1 + 302) & 0x2000) != 0 )
    {
      if ( !v9 )
        return (__int64)v9;
      do
      {
        v14 = *((_DWORD *)v9 + 25);
        if ( (v14 & 0x20) == 0 )
          break;
        if ( (v14 & 0x10) == 0 )
          break;
        v9 = *(struct tagQMSG **)v9;
      }
      while ( v9 );
    }
    if ( v9 )
    {
      v10 = *((_QWORD *)v9 + 13);
      if ( v10 && (struct tagTHREADINFO *)v10 != a1 && (*(_DWORD *)(v10 + 488) & 0x10000) != 0 )
        v9 = DeferMessagesOnQueue(v8, v9);
      if ( v9 )
      {
        *(_OWORD *)a3 = *(_OWORD *)v9;
        *((_OWORD *)a3 + 1) = *((_OWORD *)v9 + 1);
        *((_OWORD *)a3 + 2) = *((_OWORD *)v9 + 2);
        *((_OWORD *)a3 + 3) = *((_OWORD *)v9 + 3);
        *((_OWORD *)a3 + 4) = *((_OWORD *)v9 + 4);
        *((_OWORD *)a3 + 5) = *((_OWORD *)v9 + 5);
        *((_OWORD *)a3 + 6) = *((_OWORD *)v9 + 6);
        *((_OWORD *)a3 + 7) = *((_OWORD *)v9 + 7);
        *((_OWORD *)a3 + 8) = *((_OWORD *)v9 + 8);
        *((_OWORD *)a3 + 9) = *((_OWORD *)v9 + 9);
        *((_QWORD *)a3 + 20) = *((_QWORD *)v9 + 20);
      }
    }
    return (__int64)v9;
  }
  if ( a2 )
    return 0LL;
  v13 = xxxCallJournalPlaybackHook(a3);
  if ( v13 == -1 )
    return 0LL;
  if ( v13 )
  {
    *(_WORD *)(*((_QWORD *)a1 + 56) + 6LL) &= 0xE3F8u;
    *(_WORD *)(*((_QWORD *)a1 + 56) + 4LL) &= 0xE3F8u;
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 400LL) = *((_DWORD *)a3 + 6);
    qword_1C0317638 = InternalSetTimer(0LL, qword_1C0317638, v13, (__int64)JournalTimer, 32, 276);
    return 0LL;
  }
  WakeSomeone(*((_QWORD *)a1 + 54), 0LL, *((unsigned int *)a3 + 6), 0LL);
  CInputGlobals::MarkLastInputAsJournalling(gpInputGlobals);
  return 1LL;
}
