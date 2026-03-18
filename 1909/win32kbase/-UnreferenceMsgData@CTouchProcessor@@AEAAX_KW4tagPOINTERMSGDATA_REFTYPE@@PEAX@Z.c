/*
 * XREFs of ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0173520
 * Callers:
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C015E650 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C015FE64 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0165480 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C016D858 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0173250 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0173630 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0173710 (-UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x1C0174338 (-UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C0164F10 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C01651F0 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C0174FB8 (WPP_RECORDER_SF_Lq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UnreferenceMsgData(struct _KTHREAD **a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  _DWORD *v4; // rbx
  int v6; // eax
  char v7; // al
  int v8; // [rsp+20h] [rbp-28h]

  _InterlockedDecrement((volatile signed __int32 *)(a2 + 24));
  v3 = (int)a3;
  v4 = (_DWORD *)a2;
  if ( (_DWORD)a3 == 1 )
  {
    v6 = *(_DWORD *)(a2 + 36);
    if ( (v6 & 0x40) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
      v6 = v4[9];
      if ( (v6 & 0x40) == 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 2;
        WPP_RECORDER_SF_q((_DWORD)gBaseLog, a2, v3 + 6, 294, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
        v6 = v4[9];
      }
    }
    v4[9] = v6 & 0xFFFFFFBF;
  }
  if ( (int)v3 > 7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v7 = *((_BYTE *)v4 + v3 + 48);
  if ( !v7 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_Lq((_DWORD)a1, a2, a3, 295, v8, v3, (char)v4);
    v7 = *((_BYTE *)v4 + v3 + 48);
  }
  *((_BYTE *)v4 + v3 + 48) = v7 - 1;
  if ( !v4[6] )
  {
    if ( (v4[9] & 0x20) == 0 )
      CTouchProcessor::FreePointerInfoNode(a1, a2, (unsigned int)v4[7], v4[8]);
    CTouchProcessor::FreeMsgData(a1, (__int64)v4, a3);
  }
}
