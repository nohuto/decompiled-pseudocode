/*
 * XREFs of ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C01651F0
 * Callers:
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0173250 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0173520 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0173710 (-UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C0164518 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C0164DC0 (-FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C01652CC (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C016735C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016BF50 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C01734BC (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreePointerInfoNode(struct _KTHREAD **this, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rbp
  struct CPointerInputFrame *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct CPointerInputFrame *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8

  v4 = a3;
  v6 = a4;
  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v7 = CTouchProcessor::FindAndReferenceFrameById(this, v4, a3);
  v11 = v7;
  if ( v7 )
  {
    if ( (unsigned int)v6 >= *((_DWORD *)v7 + 12) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
    v12 = *((_QWORD *)v11 + 16) + 496 * v6;
    if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v12) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
    if ( (*(_DWORD *)v12 & 2) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
    if ( CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v12) > 1 )
      CTouchProcessor::FreeHistory(this, v11, (const struct CPointerInfoNode *)v12);
    CInputDest::SetEmpty((CInputDest *)(v12 + 24), v16, v17);
    CInputDest::SetEmpty((CInputDest *)(v12 + 360), v18, v19);
    CTouchProcessor::FreePointerInfoNodeInt((CTouchProcessor *)this, v11, v6);
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v11);
  }
}
