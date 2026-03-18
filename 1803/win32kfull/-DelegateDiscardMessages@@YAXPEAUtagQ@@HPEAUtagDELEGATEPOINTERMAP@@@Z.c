/*
 * XREFs of ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01B82D0
 * Callers:
 *     _DelegateCapturePointers @ 0x1C01B88B4 (_DelegateCapturePointers.c)
 * Callees:
 *     DelQEntry @ 0x1C000F8DC (DelQEntry.c)
 *     IsPointerInputMessage @ 0x1C0023E34 (IsPointerInputMessage.c)
 */

void __fastcall DelegateDiscardMessages(struct tagQ *a1, int a2, struct tagDELEGATEPOINTERMAP *a3)
{
  __int64 *v5; // rbx
  int v6; // eax
  int v7; // ebp
  __int64 *v8; // r15
  int v9; // ecx
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  HWND v13; // [rsp+70h] [rbp+8h] BYREF

  if ( *((_DWORD *)a1 + 10) )
  {
    v5 = (__int64 *)*((_QWORD *)a1 + 3);
    if ( a2 )
      goto LABEL_11;
    if ( v5 )
    {
      do
      {
        if ( (*((_DWORD *)v5 + 25) & 0x40) != 0 )
        {
          v6 = *((_DWORD *)v5 + 6);
          if ( (v6 == 582 || v6 == 585)
            && *((_WORD *)v5 + 16) == *(_WORD *)a3
            && CTouchProcessor::GetFrameIdFromPointerMsgId(gpTouchProcessor, v5[5]) == *((_DWORD *)a3 + 1) )
          {
            break;
          }
        }
        v5 = (__int64 *)*v5;
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
            v8 = (__int64 *)*v5;
            if ( IsPointerInputMessage(*((_DWORD *)v5 + 6)) && (*((_DWORD *)v5 + 25) & 0x40) != 0 )
            {
              v10 = v5[5];
              if ( *((_WORD *)v5 + 16) == *(_WORD *)a3 )
              {
                if ( v9 == 582
                  && CTouchProcessor::GetFrameIdFromPointerMsgId(gpTouchProcessor, v5[5]) != *((_DWORD *)a3 + 1)
                  || *((_DWORD *)v5 + 6) == 581 && (*((_BYTE *)v5 + 34) & 4) == 0 )
                {
                  return;
                }
                if ( CTouchProcessor::GetPointerMessageInfo(gpTouchProcessor, v10, 0, &v13, 0LL, 0LL, 0LL, 0LL) )
                  v11 = ValidateHwnd(v13);
                else
                  v11 = 0LL;
                if ( *((_DWORD *)a3 + 23) == 2 )
                  v12 = *((_QWORD *)a3 + 10);
                else
                  v12 = 0LL;
                if ( v11 == v12 )
                {
                  if ( *((_DWORD *)v5 + 6) == 583 )
                    v7 = 1;
                  DelQEntry((_QWORD *)a1 + 3, v5);
                  if ( *((__int64 **)a1 + 10) == v5 )
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
