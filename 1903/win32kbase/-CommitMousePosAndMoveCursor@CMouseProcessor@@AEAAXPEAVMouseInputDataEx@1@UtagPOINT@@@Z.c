/*
 * XREFs of ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z @ 0x1C00949BC
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C00321A8 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0031ED8 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     ?TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePosAndMoveResult@@@Z @ 0x1C0094B60 (-TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePo.c)
 *     ApiSetEditionCommitMousePosAndMove @ 0x1C0094BA0 (ApiSetEditionCommitMousePosAndMove.c)
 *     ?DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C009E56C (-DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1C018EC80 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::CommitMousePosAndMoveCursor(
        CMouseProcessor *this,
        struct CMouseProcessor::MouseInputDataEx *a2,
        struct tagPOINT a3)
{
  __int64 v5; // r8
  BOOL v6; // esi
  __int64 v7; // r8
  BOOL v8; // edi
  __int64 v9; // r8
  BOOL v10; // ebx
  __int64 v11; // r8
  bool v12; // al
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // ebx
  __int64 v18; // rdx
  struct tagPOINT v19; // [rsp+60h] [rbp-69h] BYREF
  struct tagPOINT v20; // [rsp+68h] [rbp-61h] BYREF
  __int64 v21; // [rsp+70h] [rbp-59h] BYREF
  _WORD v22[4]; // [rsp+78h] [rbp-51h] BYREF
  int v23; // [rsp+80h] [rbp-49h]
  int v24; // [rsp+84h] [rbp-45h]
  int v25; // [rsp+88h] [rbp-41h]
  int v26; // [rsp+8Ch] [rbp-3Dh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-39h] BYREF
  __int64 *v28; // [rsp+B0h] [rbp-19h]
  __int64 v29; // [rsp+B8h] [rbp-11h]
  struct tagPOINT *v30; // [rsp+C0h] [rbp-9h]
  __int64 v31; // [rsp+C8h] [rbp-1h]
  LONG *p_y; // [rsp+D0h] [rbp+7h]
  __int64 v33; // [rsp+D8h] [rbp+Fh]

  v20 = a3;
  if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 16LL, *(_QWORD *)&a3)
    && CBaseProcessor::IsUMSuppressed(this) )
  {
    v17 = 0;
    v18 = 4LL;
LABEL_16:
    InputTraceLogging::Mouse::DropMove(*((_QWORD *)a2 + 7), v18);
    goto LABEL_5;
  }
  if ( *((_DWORD *)a2 + 22) )
  {
    v13 = ApiSetEditionCommitMousePosAndMove(
            (unsigned int)&v20,
            0,
            0,
            (int)a2 + 24,
            0,
            0LL,
            0,
            1,
            1,
            0,
            (__int64)this + 2728);
  }
  else
  {
    v22[1] = *((_WORD *)a2 + 1);
    v22[2] = *((_WORD *)a2 + 2);
    v22[3] = *((_WORD *)a2 + 3);
    v24 = *((_DWORD *)a2 + 3);
    v25 = *((_DWORD *)a2 + 4);
    v26 = *((_DWORD *)a2 + 5);
    v23 = *((_DWORD *)a2 + 2);
    v22[0] = 0;
    v6 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 16LL, v5);
    v8 = !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 2LL, v7);
    v10 = !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 0x2000LL, v9);
    v12 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 0x10000LL, v11);
    v13 = ApiSetEditionCommitMousePosAndMove(
            (unsigned int)&v20,
            *((_DWORD *)a2 + 5),
            (unsigned int)v22,
            (int)a2 + 24,
            *((_DWORD *)a2 + 12),
            *((_QWORD *)a2 + 7),
            v6,
            v8,
            v10,
            v12,
            (__int64)this + 2728);
  }
  v17 = v13;
  if ( !v13 )
  {
    v18 = 2LL;
    goto LABEL_16;
  }
LABEL_5:
  if ( dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x40uLL) )
  {
    v21 = *((_QWORD *)a2 + 7);
    v28 = &v21;
    v19 = gptCursorAsync;
    v30 = &v19;
    p_y = &v19.y;
    v29 = 8LL;
    v31 = 4LL;
    v33 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E8477, 0LL, 0LL, 5u, &pData);
  }
  if ( v17 && (v17 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
  *((_DWORD *)a2 + 19) = v17;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult(a2, 1LL) )
  {
    *(_OWORD *)((char *)this + 3272) = *((_OWORD *)a2 + 3);
    *((_QWORD *)this + 411) = *((_QWORD *)a2 + 8);
  }
}
