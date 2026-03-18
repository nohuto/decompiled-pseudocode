/*
 * XREFs of ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0175440
 * Callers:
 *     ?DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C0165790 (-DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C01673F0 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C01674CC (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C016955C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C016B598 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C016CB58 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C016DA3C (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016E13C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0175400 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0175710 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UnreferenceFrameAndMessageData(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        __int64 a3)
{
  CInputThread *v5; // rsi
  unsigned int CurrentThreadId; // eax
  int v7; // ebx
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // esi
  unsigned __int64 i; // rbx
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  PVOID CurrentProcess; // rax
  CTouchProcessor *v21; // rcx
  CTouchProcessor *v22; // rcx
  int v23; // edi
  __int64 *PrevMsgId; // rax

  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v5 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v5, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v7 = *((_DWORD *)v5 + 10);
  v8 = CurrentThreadId;
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 != v7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  v12 = *((unsigned int *)gptiCurrent + 120);
  if ( (v12 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v9, v11);
  v13 = *((unsigned int *)a2 + 12);
  v14 = 0;
  for ( i = *((_QWORD *)a2 + 16); v14 < (unsigned int)v13; i += 496LL )
  {
    v16 = *((_QWORD *)a2 + 16) + 496 * v13;
    if ( i >= v16 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v9, v11);
    if ( (*((_DWORD *)a2 + 28) & 1) != 0 )
    {
      if ( (*(_DWORD *)i & 0x2000) == 0 )
      {
        if ( (*(_DWORD *)i & 2) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v9, v11);
        if ( (unsigned int)CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)i) != 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
        if ( *(_QWORD *)(i + 16) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
        CTouchProcessor::FreePointerInfoNodeInt(this, a2, v14);
      }
    }
    else
    {
      CurrentProcess = (PVOID)PsGetCurrentProcess(v16, v9);
      if ( !CurrentProcess
        || CurrentProcess != g_pepDwm
        || !CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)i) && (*(_DWORD *)(i + 4) & 0x200) == 0 )
      {
        if ( !*(_QWORD *)(i + 16)
          || (v22 = (CTouchProcessor *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                                           v21,
                                                           a2,
                                                           (const struct CPointerInfoNode *)i)
                                       + 37),
              ((unsigned __int8)v22 & 4) != 0) )
        {
          if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)i) )
            CTouchProcessor::FreePointerInfoNode(this, v9, *((unsigned int *)a2 + 10), v14);
        }
        else
        {
          v23 = *(_DWORD *)(i + 188) & 2;
          if ( (*(_DWORD *)(i + 188) & 1) == 0 )
          {
            PrevMsgId = CTouchProcessor::GetPrevMsgId(v22, *(__int64 **)(i + 16));
            if ( PrevMsgId )
            {
              if ( (*((_DWORD *)PrevMsgId + 9) & 0x40) != 0 )
                CTouchProcessor::UnreferenceMsgData(this, PrevMsgId, 1LL);
            }
          }
          if ( !v23 )
            CTouchProcessor::UnreferenceMsgData(this, *(_QWORD *)(i + 16), 1LL);
        }
      }
    }
    v13 = *((unsigned int *)a2 + 12);
    ++v14;
  }
  CTouchProcessor::UnreferenceFrame(this, a2, v11);
}
