/*
 * XREFs of ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01CE234
 * Callers:
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C0107208 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01CEAF4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C002E58C (IsPointerInputMessage.c)
 *     DelQEntry @ 0x1C0038198 (DelQEntry.c)
 *     WakeSomeone @ 0x1C00D435C (WakeSomeone.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C010C8F0 (GetAppCompatFlags2QuadWord.c)
 *     ?FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@@Z @ 0x1C01CD500 (-FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@@Z.c)
 *     ?ReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C01CE3B0 (-ReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     DelegateCoalescePointerMessage @ 0x1C01DD0BC (DelegateCoalescePointerMessage.c)
 */

void __fastcall ReassignInputMessage(struct tagTHREADINFO *a1, struct tagTHREADINFO *a2, struct tagQMSG *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  struct tagQMSG *MsgInsertionPoint; // rax
  struct tagQMSG *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // rdx

  InputTraceLogging::DManip::ReassignMessage(a3);
  v6 = *((_QWORD *)a2 + 54);
  DelQEntry(*((_QWORD *)a1 + 54) + 24LL, (__int64)a3, 0);
  v7 = *((_QWORD *)a1 + 54);
  if ( *(struct tagQMSG **)(v7 + 80) == a3 )
    *(_QWORD *)(v7 + 80) = 0LL;
  *((_DWORD *)a3 + 25) &= ~0x10u;
  *((_QWORD *)a3 + 1) = 0LL;
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 13) = a2;
  MsgInsertionPoint = FindMsgInsertionPoint((struct tagQ *const)v6, a3);
  v9 = MsgInsertionPoint;
  if ( MsgInsertionPoint )
  {
    v10 = (_QWORD *)*((_QWORD *)MsgInsertionPoint + 1);
    if ( v10 )
      *v10 = a3;
    else
      *(_QWORD *)(v6 + 24) = a3;
    *(_QWORD *)a3 = v9;
    *((_QWORD *)a3 + 1) = *((_QWORD *)v9 + 1);
    *((_QWORD *)v9 + 1) = a3;
  }
  else
  {
    if ( *(_QWORD *)(v6 + 24) )
    {
      **(_QWORD **)(v6 + 32) = a3;
      *((_QWORD *)a3 + 1) = *(_QWORD *)(v6 + 32);
    }
    else
    {
      *(_QWORD *)(v6 + 24) = a3;
    }
    *(_QWORD *)(v6 + 32) = a3;
  }
  ++*(_DWORD *)(v6 + 40);
  if ( !IsPointerInputMessage(*((_DWORD *)a3 + 6)) || !(unsigned int)DelegateCoalescePointerMessage(a2, 0LL, a3) )
  {
    if ( (GetAppCompatFlags2QuadWord((__int64)a2, v11) & 0x2000000000000LL) != 0 && *((_DWORD *)a3 + 6) == 512 )
    {
      v12 = *((_DWORD *)a3 + 25);
      if ( (v12 & 0x40) != 0 )
      {
        if ( *(_QWORD *)(*((_QWORD *)a2 + 54) + 136LL) )
        {
          v13 = *((_QWORD *)a3 + 1);
          if ( v13 )
          {
            if ( *(_DWORD *)(v13 + 24) == 512
              && *(_QWORD *)(v13 + 16) == *((_QWORD *)a3 + 2)
              && *(_QWORD *)(v6 + 80) != v13
              && (v12 & 0x100) == 0 )
            {
              DelQEntry(v6 + 24, v13, 1);
            }
          }
        }
      }
    }
    WakeSomeone(v6, (__int64)a2, *((_DWORD *)a3 + 6), (__int64)a3);
  }
}
