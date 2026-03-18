/*
 * XREFs of ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x1C00721AC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     DeferMessagesOnQueue @ 0x1C0007328 (DeferMessagesOnQueue.c)
 *     WakeSomeone @ 0x1C002A434 (WakeSomeone.c)
 *     InternalSetTimer @ 0x1C004C470 (InternalSetTimer.c)
 *     PhkNextValid @ 0x1C005530C (PhkNextValid.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E7FA4 (xxxCallJournalPlaybackHook.c)
 */

__int64 __fastcall xxxGetNextSysMsg(
        struct tagTHREADINFO *a1,
        struct tagQMSG *a2,
        struct tagQMSG *a3,
        struct CMultiPerObjectLockExclusivePpiPtiQ *a4)
{
  __int64 Valid; // rcx
  __int64 v8; // rcx
  struct tagMLIST *v9; // r8
  struct tagQMSG *v10; // rcx
  __int64 v11; // rax
  struct tagQMSG **v13; // rcx
  unsigned int v14; // eax
  int v15; // eax

  Valid = *(_QWORD *)(*((_QWORD *)a1 + 57) + 56LL);
  if ( !Valid )
    goto LABEL_2;
  if ( (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
    Valid = PhkNextValid(Valid);
  if ( !Valid || *((_QWORD *)a1 + 56) != grpdeskRitInput )
  {
LABEL_2:
    v8 = *((_QWORD *)a1 + 53);
    if ( (*(_DWORD *)(v8 + 396) & 0x20) != 0 )
    {
      PostPendingMouseMove(v8);
      v8 = *((_QWORD *)a1 + 53);
    }
    v9 = (struct tagMLIST *)(v8 + 24);
    if ( !*(_DWORD *)(v8 + 40) )
      return 0LL;
    if ( a2 && (v13 = *(struct tagQMSG ***)(v8 + 88), (unsigned __int64)v13 > 1) )
      v10 = *v13;
    else
      v10 = *(struct tagQMSG **)v9;
    if ( (*((_DWORD *)a1 + 306) & 0x2000) != 0 )
    {
      if ( !v10 )
        return (__int64)v10;
      do
      {
        v15 = *((_DWORD *)v10 + 25);
        if ( (v15 & 0x20) == 0 )
          break;
        if ( (v15 & 0x10) == 0 )
          break;
        v10 = *(struct tagQMSG **)v10;
      }
      while ( v10 );
    }
    if ( v10 )
    {
      v11 = *((_QWORD *)v10 + 13);
      if ( v11 && (struct tagTHREADINFO *)v11 != a1 && (*(_DWORD *)(v11 + 480) & 0x10000) != 0 )
        v10 = DeferMessagesOnQueue(v9, v10);
      if ( v10 )
      {
        *(_OWORD *)a3 = *(_OWORD *)v10;
        *((_OWORD *)a3 + 1) = *((_OWORD *)v10 + 1);
        *((_OWORD *)a3 + 2) = *((_OWORD *)v10 + 2);
        *((_OWORD *)a3 + 3) = *((_OWORD *)v10 + 3);
        *((_OWORD *)a3 + 4) = *((_OWORD *)v10 + 4);
        *((_OWORD *)a3 + 5) = *((_OWORD *)v10 + 5);
        *((_OWORD *)a3 + 6) = *((_OWORD *)v10 + 6);
        *((_OWORD *)a3 + 7) = *((_OWORD *)v10 + 7);
        *((_OWORD *)a3 + 8) = *((_OWORD *)v10 + 8);
        *((_OWORD *)a3 + 9) = *((_OWORD *)v10 + 9);
        *((_QWORD *)a3 + 20) = *((_QWORD *)v10 + 20);
      }
    }
    return (__int64)v10;
  }
  if ( a2 )
    return 0LL;
  v14 = xxxCallJournalPlaybackHook(a3, a2, a3, a4);
  if ( v14 == -1 )
    return 0LL;
  if ( v14 )
  {
    *(_WORD *)(*((_QWORD *)a1 + 55) + 6LL) &= 0xE3F8u;
    *(_WORD *)(*((_QWORD *)a1 + 55) + 4LL) &= 0xE3F8u;
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 408LL) = *((_DWORD *)a3 + 6);
    qword_1C032A638 = InternalSetTimer(0LL, qword_1C032A638, v14, (__int64)JournalTimer, 32, 276);
    return 0LL;
  }
  WakeSomeone(*((_QWORD *)a1 + 53), 0LL, *((_DWORD *)a3 + 6), 0LL);
  CInputGlobals::MarkLastInputAsJournalling(gpInputGlobals);
  return 1LL;
}
