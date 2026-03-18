/*
 * XREFs of ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0146784
 * Callers:
 *     ?UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C00AD67C (-UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C0133490 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C0134BD0 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C013978C (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0140FE4 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01465CC (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0146880 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0146940 (-UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x1C0147578 (-UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C0138DE8 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C01390C4 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C0148244 (WPP_RECORDER_SF_Lq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UnreferenceMsgData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  int v6; // eax
  char v7; // al
  int v8; // [rsp+20h] [rbp-28h]

  v5 = (int)a3;
  if ( *(struct _KTHREAD **)(a1 + 64) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  _InterlockedDecrement((volatile signed __int32 *)(a2 + 24));
  if ( (_DWORD)v5 == 1 )
  {
    v6 = *(_DWORD *)(a2 + 36);
    if ( (v6 & 0x40) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
      v6 = *(_DWORD *)(a2 + 36);
      if ( (v6 & 0x40) == 0 )
      {
        WPP_RECORDER_SF_q(
          *(_QWORD *)(a1 + 8),
          2u,
          0xBu,
          0x120u,
          (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
        v6 = *(_DWORD *)(a2 + 36);
      }
    }
    *(_DWORD *)(a2 + 36) = v6 & 0xFFFFFFBF;
  }
  if ( (int)v5 > 8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v7 = *(_BYTE *)(a2 + v5 + 48);
  if ( !v7 )
  {
    WPP_RECORDER_SF_Lq(*(_QWORD *)(a1 + 8), a2, a3, 289, v8, v5, a2);
    v7 = *(_BYTE *)(a2 + v5 + 48);
  }
  *(_BYTE *)(a2 + v5 + 48) = v7 - 1;
  if ( !*(_DWORD *)(a2 + 24) )
  {
    if ( (*(_DWORD *)(a2 + 36) & 0x20) == 0 )
      CTouchProcessor::FreePointerInfoNode((struct _KTHREAD **)a1, a2, *(unsigned int *)(a2 + 28), *(_DWORD *)(a2 + 32));
    CTouchProcessor::FreeMsgData((struct _KTHREAD **)a1, a2, a3);
  }
}
