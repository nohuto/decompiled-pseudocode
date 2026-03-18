/*
 * XREFs of ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z @ 0x1C00807F8
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0030698 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0030CE0 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     ?TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePosAndMoveResult@@@Z @ 0x1C0080968 (-TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePo.c)
 *     ApiSetEditionCommitMousePosAndMove @ 0x1C00809A8 (ApiSetEditionCommitMousePosAndMove.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

void __fastcall CMouseProcessor::CommitMousePosAndMoveCursor(
        CMouseProcessor *this,
        struct CMouseProcessor::MouseInputDataEx *a2,
        struct tagPOINT a3)
{
  bool v3; // zf
  BOOL v6; // esi
  BOOL v7; // edi
  BOOL v8; // ebx
  bool v9; // al
  int v10; // eax
  int v11; // ebx
  int v12; // r9d
  __int64 v13; // rax
  struct tagPOINT v14; // [rsp+50h] [rbp-59h] BYREF
  struct tagPOINT v15; // [rsp+58h] [rbp-51h] BYREF
  __int64 v16; // [rsp+60h] [rbp-49h] BYREF
  __int64 v17; // [rsp+68h] [rbp-41h] BYREF
  __int64 v18; // [rsp+70h] [rbp-39h]
  __int64 v19; // [rsp+78h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-29h] BYREF
  __int64 *v21; // [rsp+A0h] [rbp-9h]
  int v22; // [rsp+A8h] [rbp-1h]
  int v23; // [rsp+ACh] [rbp+3h]
  struct tagPOINT *v24; // [rsp+B0h] [rbp+7h]
  int v25; // [rsp+B8h] [rbp+Fh]
  int v26; // [rsp+BCh] [rbp+13h]
  LONG *p_y; // [rsp+C0h] [rbp+17h]
  int v28; // [rsp+C8h] [rbp+1Fh]
  int v29; // [rsp+CCh] [rbp+23h]

  v3 = *((_DWORD *)a2 + 18) == 0;
  v15 = a3;
  if ( v3 )
  {
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    *(_DWORD *)((char *)&v17 + 2) = *(_DWORD *)((char *)a2 + 2);
    HIWORD(v17) = *((_WORD *)a2 + 3);
    HIDWORD(v18) = *((_DWORD *)a2 + 3);
    v19 = *((_QWORD *)a2 + 2);
    LODWORD(v18) = *((_DWORD *)a2 + 2);
    v6 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 16);
    v7 = !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 2);
    v8 = !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 0x2000);
    v9 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 0x20000);
    v10 = ApiSetEditionCommitMousePosAndMove(
            (unsigned int)&v15,
            *((_DWORD *)a2 + 5),
            (unsigned int)&v17,
            (int)a2 + 24,
            *((_DWORD *)a2 + 10),
            *((_QWORD *)a2 + 6),
            v6,
            v7,
            v8,
            v9);
  }
  else
  {
    v10 = ApiSetEditionCommitMousePosAndMove((unsigned int)&v15, 0, 0, (int)a2 + 24, 0, 0LL, 0, 1, 1, 0);
  }
  v11 = v10;
  if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x40uLL) )
  {
    v13 = *((_QWORD *)a2 + 6);
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v16 = v13;
    v21 = &v16;
    v14 = gptCursorAsync;
    v24 = &v14;
    p_y = &v14.y;
    v22 = 8;
    v25 = v12;
    v28 = v12;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A1AFE, 0LL, 0LL, 5u, &pData);
  }
  if ( v11 && (v11 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredMsgKM("CommitMousePosAndMoveResult is not set-up correctly");
  *((_DWORD *)a2 + 15) = v11;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult(a2, 1LL) )
    *(_OWORD *)((char *)this + 2520) = *(_OWORD *)((char *)a2 + 40);
}
