/*
 * XREFs of ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01F0584
 * Callers:
 *     _DelegateCapturePointers @ 0x1C01F114C (_DelegateCapturePointers.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C0024930 (IsPointerInputMessage.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     DelQEntry @ 0x1C00CFB78 (DelQEntry.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00D0D1C (WPP_RECORDER_SF_qq.c)
 *     ?GetPwndFromPointerMsgId@@YAPEAUtagWND@@_K@Z @ 0x1C01F080C (-GetPwndFromPointerMsgId@@YAPEAUtagWND@@_K@Z.c)
 *     WPP_RECORDER_SF_HL @ 0x1C01F0CB4 (WPP_RECORDER_SF_HL.c)
 *     WPP_RECORDER_SF_L @ 0x1C01F0D90 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_LqLL @ 0x1C01F1030 (WPP_RECORDER_SF_LqLL.c)
 */

void __fastcall DelegateDiscardMessages(struct tagQ *a1, int a2, struct tagDELEGATEPOINTERMAP *a3, int a4)
{
  int v5; // esi
  __int64 v7; // rbx
  int v8; // eax
  int v9; // r9d
  int v10; // r12d
  __int64 v11; // r13
  unsigned __int64 v12; // r14
  struct tagWND *v13; // r15
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  char FrameIdFromPointerMsgId; // al
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  int v25; // [rsp+20h] [rbp-58h]

  v5 = a2;
  if ( *((_DWORD *)a1 + 10) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_HL((_DWORD)a1, a2, (_DWORD)a3, a4);
    v7 = *((_QWORD *)a1 + 3);
    if ( v5 )
      goto LABEL_15;
    if ( !v7 )
      goto LABEL_13;
    do
    {
      if ( (*(_DWORD *)(v7 + 100) & 0x40) != 0 )
      {
        v8 = *(_DWORD *)(v7 + 24);
        if ( (v8 == 582 || v8 == 585)
          && *(_WORD *)(v7 + 32) == *(_WORD *)a3
          && CTouchProcessor::GetFrameIdFromPointerMsgId(gpTouchProcessor, *(_QWORD *)(v7 + 40)) == *((_DWORD *)a3 + 1) )
        {
          break;
        }
      }
      v7 = *(_QWORD *)v7;
    }
    while ( v7 );
    if ( v7 )
    {
LABEL_15:
      v10 = 0;
      if ( v7 )
      {
        while ( !v10 )
        {
          v11 = *(_QWORD *)v7;
          if ( IsPointerInputMessage(*(_DWORD *)(v7 + 24)) && (*(_DWORD *)(v7 + 100) & 0x40) != 0 )
          {
            v12 = *(_QWORD *)(v7 + 40);
            if ( *(_WORD *)(v7 + 32) == *(_WORD *)a3 )
            {
              if ( (_DWORD)a1 == 582
                && CTouchProcessor::GetFrameIdFromPointerMsgId(gpTouchProcessor, *(_QWORD *)(v7 + 40)) != *((_DWORD *)a3 + 1) )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  FrameIdFromPointerMsgId = CTouchProcessor::GetFrameIdFromPointerMsgId(gpTouchProcessor, v12);
                  WPP_RECORDER_SF_L(v22, v21, v23, v24, v25, FrameIdFromPointerMsgId);
                }
                return;
              }
              if ( *(_DWORD *)(v7 + 24) == 581 && (*(_BYTE *)(v7 + 34) & 4) == 0 )
              {
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  return;
                v9 = 15;
                goto LABEL_42;
              }
              if ( *((_DWORD *)a3 + 25) == 2 )
                v13 = (struct tagWND *)*((_QWORD *)a3 + 11);
              else
                v13 = 0LL;
              if ( GetPwndFromPointerMsgId(v12) == v13 )
              {
                v17 = *(_DWORD *)(v7 + 24);
                if ( v17 == 583 )
                  v10 = 1;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_LqLL(
                    v17,
                    v14,
                    v15,
                    v16,
                    v25,
                    v17,
                    *(_QWORD *)(v7 + 16),
                    *(_DWORD *)(v7 + 32),
                    *(_DWORD *)(v7 + 40));
                DelQEntry((__int64)a1 + 24, v7, 1);
                if ( *((_QWORD *)a1 + 11) == v7 )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_SF_qq(
                      v19,
                      v18,
                      0x12u,
                      0x11u,
                      (__int64)&WPP_2d6fcb9477dc3fd6f89df09b53da1182_Traceguids);
                  *((_QWORD *)a1 + 11) = 0LL;
                }
              }
            }
          }
          v7 = v11;
          if ( !v11 )
            return;
        }
      }
    }
    else
    {
LABEL_13:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = 13;
LABEL_42:
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_((_DWORD)a1, a2, 19, v9, (__int64)&WPP_2d6fcb9477dc3fd6f89df09b53da1182_Traceguids);
      }
    }
  }
}
