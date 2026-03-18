/*
 * XREFs of ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01465CC
 * Callers:
 *     ?DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C0137460 (-DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C0028F0C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     IsInputThread @ 0x1C00315A0 (IsInputThread.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00AD3CC (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD5D8 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C01390C4 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C013AEFC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C013CC44 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C013DFE0 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C013EF10 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0146784 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UnreferenceFrameAndMessageData(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // r14d
  unsigned __int64 i; // rbx
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  CTouchProcessor *v16; // rcx
  CTouchProcessor *v17; // rcx
  int v18; // ebp
  __int64 *PrevMsgId; // rax

  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !IsInputThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  v8 = *((unsigned int *)gptiCurrent + 122);
  if ( (v8 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v5, v7);
  v9 = *((unsigned int *)a2 + 12);
  v10 = 0;
  for ( i = *((_QWORD *)a2 + 13); v10 < (unsigned int)v9; i += 576LL )
  {
    v12 = *((_QWORD *)a2 + 13) + 576 * v9;
    if ( i >= v12 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v5, v7);
    if ( *((_DWORD *)a2 + 22) == 2 )
    {
      if ( (*(_DWORD *)i & 0x2000) == 0 )
      {
        if ( (*(_DWORD *)i & 2) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v5, v7);
        if ( (unsigned int)CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)i) != 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
        if ( *(_QWORD *)(i + 16) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
        CTouchProcessor::FreePointerInfoNodeInt((__int64)this, (__int64)a2, v10);
      }
    }
    else if ( !IsCurrentProcessDwm()
           || !CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)i) && (*(_DWORD *)(i + 4) & 0x200) == 0 )
    {
      if ( !*(_QWORD *)(i + 16)
        || (v17 = (CTouchProcessor *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                                         v16,
                                                         a2,
                                                         (const struct CPointerInfoNode *)i)
                                     + 51),
            ((unsigned __int8)v17 & 4) != 0) )
      {
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)i) )
          CTouchProcessor::FreePointerInfoNode(this, v5, *((unsigned int *)a2 + 10), v10);
      }
      else
      {
        v18 = *(_DWORD *)(i + 244) & 2;
        if ( (*(_DWORD *)(i + 244) & 1) == 0 )
        {
          PrevMsgId = CTouchProcessor::GetPrevMsgId(v17, *(__int64 **)(i + 16));
          if ( PrevMsgId )
          {
            if ( (*((_DWORD *)PrevMsgId + 9) & 0x40) != 0 )
              CTouchProcessor::UnreferenceMsgData(this, PrevMsgId, 1LL);
          }
        }
        if ( !v18 )
          CTouchProcessor::UnreferenceMsgData(this, *(_QWORD *)(i + 16), 1LL);
      }
    }
    v9 = *((unsigned int *)a2 + 12);
    ++v10;
  }
  CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)a2, v7);
}
