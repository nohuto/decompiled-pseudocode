/*
 * XREFs of ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01DAEE8
 * Callers:
 *     _DelegateCapturePointers @ 0x1C01DB518 (_DelegateCapturePointers.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C002E58C (IsPointerInputMessage.c)
 *     DelQEntry @ 0x1C0038198 (DelQEntry.c)
 *     ?GetPwndFromPointerMsgId@@YAPEAUtagWND@@_K@Z @ 0x1C01DB060 (-GetPwndFromPointerMsgId@@YAPEAUtagWND@@_K@Z.c)
 */

void __fastcall DelegateDiscardMessages(struct tagQ *a1, int a2, struct tagDELEGATEPOINTERMAP *a3)
{
  __int64 v5; // rbx
  int v6; // eax
  int v7; // r14d
  __int64 v8; // r12
  int v9; // ecx
  unsigned __int64 v10; // r15
  struct tagWND *v11; // rbp

  if ( *((_DWORD *)a1 + 10) )
  {
    v5 = *((_QWORD *)a1 + 3);
    if ( a2 )
      goto LABEL_11;
    if ( v5 )
    {
      do
      {
        if ( (*(_DWORD *)(v5 + 100) & 0x40) != 0 )
        {
          v6 = *(_DWORD *)(v5 + 24);
          if ( (v6 == 582 || v6 == 585)
            && *(_WORD *)(v5 + 32) == *(_WORD *)a3
            && CTouchProcessor::GetFrameIdFromPointerMsgId(gpTouchProcessor, *(_QWORD *)(v5 + 40)) == *((_DWORD *)a3 + 1) )
          {
            break;
          }
        }
        v5 = *(_QWORD *)v5;
      }
      while ( v5 );
      if ( v5 )
      {
LABEL_11:
        v7 = 0;
        if ( v5 )
        {
          while ( !v7 )
          {
            v8 = *(_QWORD *)v5;
            if ( IsPointerInputMessage(*(_DWORD *)(v5 + 24)) && (*(_DWORD *)(v5 + 100) & 0x40) != 0 )
            {
              v10 = *(_QWORD *)(v5 + 40);
              if ( *(_WORD *)(v5 + 32) == *(_WORD *)a3 )
              {
                if ( v9 == 582
                  && CTouchProcessor::GetFrameIdFromPointerMsgId(gpTouchProcessor, *(_QWORD *)(v5 + 40)) != *((_DWORD *)a3 + 1)
                  || *(_DWORD *)(v5 + 24) == 581 && (*(_BYTE *)(v5 + 34) & 4) == 0 )
                {
                  return;
                }
                if ( *((_DWORD *)a3 + 23) == 2 )
                  v11 = (struct tagWND *)*((_QWORD *)a3 + 10);
                else
                  v11 = 0LL;
                if ( GetPwndFromPointerMsgId(v10) == v11 )
                {
                  if ( *(_DWORD *)(v5 + 24) == 583 )
                    v7 = 1;
                  DelQEntry((__int64)a1 + 24, v5, 1);
                  if ( *((_QWORD *)a1 + 10) == v5 )
                    *((_QWORD *)a1 + 10) = 0LL;
                }
              }
            }
            v5 = v8;
            if ( !v8 )
              return;
          }
        }
      }
    }
  }
}
