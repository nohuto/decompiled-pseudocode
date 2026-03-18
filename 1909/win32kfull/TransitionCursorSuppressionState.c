/*
 * XREFs of TransitionCursorSuppressionState @ 0x1C013ACC0
 * Callers:
 *     RawInputThread @ 0x1C0077DE0 (RawInputThread.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MouseCursorPerf@@@Z @ 0x1C0086374 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C00F1138 (-HandlePointerCursorSideOp@@YAXXZ.c)
 *     NtUserEnableMouseInputForCursorSuppression @ 0x1C0115560 (NtUserEnableMouseInputForCursorSuppression.c)
 *     xxxRemoteReconnect @ 0x1C015FF30 (xxxRemoteReconnect.c)
 *     PowerOnGdi @ 0x1C01616D0 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1C0161CF0 (PowerOffGdi.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DD890 (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?xxxSwitchCursors@@YAXHH@Z @ 0x1C01DDBAC (-xxxSwitchCursors@@YAXHH@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00E95D8 (_TlgCreateSz.c)
 *     ReadCursorSuppressionConfig @ 0x1C011B78C (ReadCursorSuppressionConfig.c)
 *     SetPointerMetaVisibility @ 0x1C013AA38 (SetPointerMetaVisibility.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?CursorSuppressionToString@InputTraceLogging@@CAPEBDW4CURSOR_SUPPRESSION_STATE@@@Z @ 0x1C01DAFA0 (-CursorSuppressionToString@InputTraceLogging@@CAPEBDW4CURSOR_SUPPRESSION_STATE@@@Z.c)
 */

void __fastcall TransitionCursorSuppressionState(unsigned int a1, int a2)
{
  unsigned int v2; // ebp
  const CHAR *v4; // rax
  const CHAR *v5; // rax
  const CHAR *v6; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+60h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+70h] [rbp-28h] BYREF

  v2 = gCursorSuppressionState;
  if ( gCursorSuppressionState > 0 )
  {
    if ( gCursorSuppressionState <= 4 )
    {
      if ( a1 != 1 )
      {
        if ( a1 != 2 )
        {
          if ( a1 != 3 )
          {
            if ( a1 != 8 )
              goto LABEL_10;
            if ( a2 )
            {
              gCursorSuppressionState = 4;
LABEL_9:
              _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 2u);
              KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
              goto LABEL_10;
            }
            SetPointerMetaVisibility(1u);
            goto LABEL_21;
          }
LABEL_34:
          gCursorSuppressionState = 3;
          goto LABEL_10;
        }
LABEL_19:
        gCursorSuppressionState = 2;
        goto LABEL_10;
      }
      goto LABEL_27;
    }
    if ( gCursorSuppressionState == 8 || gCursorSuppressionState <= 6 )
    {
      if ( a1 == 8 )
      {
LABEL_21:
        gCursorSuppressionState = 8;
        goto LABEL_10;
      }
      if ( a1 == 2 )
      {
        if ( a2 )
        {
          gCursorSuppressionState = 6;
          goto LABEL_9;
        }
        SetPointerMetaVisibility(0);
        goto LABEL_19;
      }
      if ( a1 != 1 )
      {
        if ( a1 != 3 )
          goto LABEL_10;
        if ( a2 )
        {
          gCursorSuppressionState = 7;
          goto LABEL_9;
        }
        SetPointerMetaVisibility(0);
        goto LABEL_34;
      }
      if ( a2 )
      {
        gCursorSuppressionState = 5;
        goto LABEL_9;
      }
      SetPointerMetaVisibility(0);
LABEL_27:
      gCursorSuppressionState = 1;
      goto LABEL_10;
    }
    if ( gCursorSuppressionState == 9 )
    {
      gCursorSuppressionState = ReadCursorSuppressionConfig();
      if ( gCursorSuppressionState )
        SetPointerMetaVisibility(0);
    }
  }
LABEL_10:
  if ( dword_1C03202C0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 8uLL) )
    {
      v4 = (const CHAR *)InputTraceLogging::CursorSuppressionToString(v2);
      TlgCreateSz(&pDesc, v4);
      v5 = (const CHAR *)InputTraceLogging::CursorSuppressionToString(a1);
      TlgCreateSz(&v9, v5);
      v6 = (const CHAR *)InputTraceLogging::CursorSuppressionToString(gCursorSuppressionState);
      TlgCreateSz(&v10, v6);
      TlgWrite((TraceLoggingHProvider)&dword_1C03202C0, &unk_1C02E63CB, 0LL, 0LL, 5u, &pData);
    }
  }
}
