/*
 * XREFs of ?UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHH@Z @ 0x1C0146DE4
 * Callers:
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01451DC (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 * Callees:
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD4C4 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C013AEFC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01452E4 (-SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUta.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UpdateHistoryWithTarget(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        const struct CInputDest *a4,
        int a5,
        const struct tagPOINT *a6,
        int a7,
        int a8,
        int a9)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int HistoryCount; // edi
  __int64 v18; // r8
  CTouchProcessor *v19; // rsi
  CTouchProcessor *v20; // r12
  unsigned int v21; // ebx
  CTouchProcessor *v22; // r14
  bool v23; // zf
  __int64 v24; // rbx
  __int64 v25; // rdx
  CTouchProcessor *v26; // rcx
  __int64 v27; // r8

  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((__int64)this, (__int64)a2, (__int64)a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
  HistoryCount = CPointerInfoNode::GetHistoryCount(a3);
  if ( HistoryCount <= 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v18);
  v19 = (CTouchProcessor *)*((_QWORD *)a2 + 1);
  v20 = (CTouchProcessor *)((char *)this + 72);
  v21 = *((_DWORD *)a3 + 96);
  if ( v19 == (CTouchProcessor *)((char *)this + 72) )
  {
LABEL_20:
    v23 = HistoryCount == 1;
  }
  else
  {
    while ( 1 )
    {
      v22 = v19;
      v23 = HistoryCount == 1;
      if ( HistoryCount <= 1 )
        break;
      v19 = *(CTouchProcessor **)v19;
      if ( *((_QWORD *)v22 + 7) == *((_QWORD *)a2 + 8) )
      {
        if ( v21 >= *((_DWORD *)v22 + 10) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v18);
        v24 = *((_QWORD *)v22 + 12) + 576LL * v21;
        if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v24) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
        if ( *(_WORD *)(v24 + 236) != *((_WORD *)a3 + 118) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
        if ( *(_QWORD *)(v24 + 16) != *((_QWORD *)a3 + 2) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
        if ( (*(_DWORD *)v24 & 2) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
        CTouchProcessor::SetPointerInfoNodeTargetInt(v26, (struct CPointerInfoNode *)v24, a4, a5, a6, a7, 0, a8, a9);
        v21 = *(_DWORD *)(v24 + 384);
        --HistoryCount;
      }
      if ( v19 == v20 )
        goto LABEL_20;
    }
  }
  if ( !v23 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v18);
}
