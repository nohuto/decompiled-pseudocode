/*
 * XREFs of ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C012519C
 * Callers:
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00ED278 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01250EC (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     DelQEntry @ 0x1C000F8DC (DelQEntry.c)
 *     WakeSomeone @ 0x1C001C69C (WakeSomeone.c)
 *     IsPointerInputMessage @ 0x1C0023E34 (IsPointerInputMessage.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C00F0E40 (GetAppCompatFlags2QuadWord.c)
 *     DelegateCoalescePointerMessage @ 0x1C01BA378 (DelegateCoalescePointerMessage.c)
 */

void __fastcall ReassignInputMessage(struct tagTHREADINFO *a1, struct tagTHREADINFO *a2, struct tagQMSG *a3)
{
  __int64 v3; // rbp
  __int64 v7; // rax
  _QWORD *v8; // r14
  __int64 *v9; // rsi
  __int64 v10; // rdx
  int v11; // edx
  _QWORD *v12; // rax
  int v13; // ecx
  unsigned int FrameIdFromPointerMsgId; // ebx
  int v15; // ecx
  __int64 v16; // rdx

  v3 = *((_QWORD *)a2 + 53);
  DelQEntry((_QWORD *)(*((_QWORD *)a1 + 53) + 24LL), a3);
  v7 = *((_QWORD *)a1 + 53);
  if ( *(struct tagQMSG **)(v7 + 80) == a3 )
    *(_QWORD *)(v7 + 80) = 0LL;
  *((_DWORD *)a3 + 25) &= ~0x10u;
  v8 = (_QWORD *)(v3 + 24);
  *((_QWORD *)a3 + 1) = 0LL;
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 13) = a2;
  v9 = *(__int64 **)(v3 + 24);
  if ( !v9 )
    goto LABEL_40;
  do
  {
    if ( *((_DWORD *)v9 + 12) > *((_DWORD *)a3 + 12) )
      break;
    v11 = *((_DWORD *)v9 + 6);
    if ( (unsigned int)(v11 - 581) <= 0x12 && v11 != 589 )
    {
      v13 = *((_DWORD *)a3 + 6);
      if ( (unsigned int)(v13 - 581) <= 0x12 && v13 != 589 && v11 != 595 && v13 != 595 )
      {
        FrameIdFromPointerMsgId = CTouchProcessor::GetFrameIdFromPointerMsgId(gpTouchProcessor, v9[5]);
        if ( FrameIdFromPointerMsgId > CTouchProcessor::GetFrameIdFromPointerMsgId(
                                         gpTouchProcessor,
                                         *((_QWORD *)a3 + 5)) )
          break;
      }
    }
    v9 = (__int64 *)*v9;
  }
  while ( v9 );
  if ( v9 )
  {
    v12 = (_QWORD *)v9[1];
    if ( v12 )
      *v12 = a3;
    else
      *v8 = a3;
    *(_QWORD *)a3 = v9;
    *((_QWORD *)a3 + 1) = v9[1];
    v9[1] = (__int64)a3;
  }
  else
  {
LABEL_40:
    if ( *v8 )
    {
      **(_QWORD **)(v3 + 32) = a3;
      *((_QWORD *)a3 + 1) = *(_QWORD *)(v3 + 32);
    }
    else
    {
      *v8 = a3;
    }
    *(_QWORD *)(v3 + 32) = a3;
  }
  ++*(_DWORD *)(v3 + 40);
  if ( !IsPointerInputMessage(*((_DWORD *)a3 + 6)) || !(unsigned int)DelegateCoalescePointerMessage(a2, 0LL, a3) )
  {
    if ( (GetAppCompatFlags2QuadWord((__int64)a2, v10) & 0x2000000000000LL) != 0 && *((_DWORD *)a3 + 6) == 512 )
    {
      v15 = *((_DWORD *)a3 + 25);
      if ( (v15 & 0x40) != 0 )
      {
        if ( *(_QWORD *)(*((_QWORD *)a2 + 53) + 136LL) )
        {
          v16 = *((_QWORD *)a3 + 1);
          if ( v16 )
          {
            if ( *(_DWORD *)(v16 + 24) == 512
              && *(_QWORD *)(v16 + 16) == *((_QWORD *)a3 + 2)
              && *(_QWORD *)(v3 + 80) != v16
              && (v15 & 0x100) == 0 )
            {
              DelQEntry((_QWORD *)(v3 + 24), (_QWORD *)v16);
            }
          }
        }
      }
    }
    WakeSomeone(v3, (__int64)a2, *((_DWORD *)a3 + 6), (__int64)a3);
  }
}
