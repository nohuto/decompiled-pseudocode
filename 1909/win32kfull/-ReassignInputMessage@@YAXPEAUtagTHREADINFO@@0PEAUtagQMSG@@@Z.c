/*
 * XREFs of ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01E2634
 * Callers:
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00EBE74 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01E30E8 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     WakeSomeone @ 0x1C002A434 (WakeSomeone.c)
 *     IsPointerInputMessage @ 0x1C002ADA0 (IsPointerInputMessage.c)
 *     DelQEntry @ 0x1C0071248 (DelQEntry.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00723EC (WPP_RECORDER_SF_qq.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C00F0F30 (GetAppCompatFlags2QuadWord.c)
 *     ?FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@@Z @ 0x1C01E18F0 (-FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@@Z.c)
 *     ?ReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C01E27F0 (-ReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     DelegateCoalescePointerMessage @ 0x1C01F2BD8 (DelegateCoalescePointerMessage.c)
 */

void __fastcall ReassignInputMessage(struct tagTHREADINFO *a1, struct tagTHREADINFO *a2, struct tagQMSG *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  struct tagQMSG *v8; // rcx
  struct tagQMSG *MsgInsertionPoint; // rax
  struct tagQMSG *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // ecx
  __int64 v15; // rdx

  InputTraceLogging::DManip::ReassignMessage(a3);
  v6 = *((_QWORD *)a2 + 53);
  DelQEntry(*((_QWORD *)a1 + 53) + 24LL, (__int64)a3, 0);
  v7 = *((_QWORD *)a1 + 53);
  v8 = *(struct tagQMSG **)(v7 + 88);
  if ( v8 == a3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_qq(
        (__int64)v8,
        (__int64)&WPP_RECORDER_INITIALIZED,
        0x12u,
        0xAu,
        (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
        v7,
        *(_QWORD *)(v7 + 88));
      v7 = *((_QWORD *)a1 + 53);
    }
    *(_QWORD *)(v7 + 88) = 0LL;
  }
  *((_DWORD *)a3 + 25) &= ~0x10u;
  *((_QWORD *)a3 + 1) = 0LL;
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 13) = a2;
  MsgInsertionPoint = FindMsgInsertionPoint((struct tagQ *const)v6, a3);
  v10 = MsgInsertionPoint;
  if ( MsgInsertionPoint )
  {
    v11 = (_QWORD *)*((_QWORD *)MsgInsertionPoint + 1);
    if ( v11 )
      *v11 = a3;
    else
      *(_QWORD *)(v6 + 24) = a3;
    *(_QWORD *)a3 = v10;
    *((_QWORD *)a3 + 1) = *((_QWORD *)v10 + 1);
    *((_QWORD *)v10 + 1) = a3;
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
    if ( (GetAppCompatFlags2QuadWord((__int64)a2, v12, v13) & 0x2000000000000LL) != 0 && *((_DWORD *)a3 + 6) == 512 )
    {
      v14 = *((_DWORD *)a3 + 25);
      if ( (v14 & 0x40) != 0 )
      {
        if ( *(_QWORD *)(*((_QWORD *)a2 + 53) + 144LL) )
        {
          v15 = *((_QWORD *)a3 + 1);
          if ( v15 )
          {
            if ( *(_DWORD *)(v15 + 24) == 512
              && *(_QWORD *)(v15 + 16) == *((_QWORD *)a3 + 2)
              && *(_QWORD *)(v6 + 88) != v15
              && (v14 & 0x100) == 0 )
            {
              DelQEntry(v6 + 24, v15, 1);
            }
          }
        }
      }
    }
    WakeSomeone(v6, (__int64)a2, *((_DWORD *)a3 + 6), (__int64)a3);
  }
}
