/*
 * XREFs of ?UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHH@Z @ 0x1C0175E68
 * Callers:
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C0174124 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 * Callees:
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C016955C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C016DABC (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016E13C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C017422C (-SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUta.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  unsigned int v19; // r15d
  char *v20; // r12
  char *v21; // rsi
  char *v22; // r14
  bool v23; // zf
  __int64 v24; // rbx
  __int64 v25; // rdx
  CTouchProcessor *v26; // rcx
  __int64 v27; // r8

  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, a2, (__int64)a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
  HistoryCount = CPointerInfoNode::GetHistoryCount(a3);
  if ( HistoryCount <= 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v18);
  v19 = *((_DWORD *)a3 + 88);
  v20 = (char *)this + 104;
  v21 = (char *)*((_QWORD *)a2 + 1);
  while ( v21 != v20 )
  {
    v22 = v21;
    v23 = HistoryCount == 1;
    if ( HistoryCount <= 1 )
      goto LABEL_21;
    v21 = *(char **)v21;
    if ( *((_QWORD *)v22 + 7) == *((_QWORD *)a2 + 8) )
    {
      if ( v19 >= *((_DWORD *)v22 + 10) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v18);
      v24 = *((_QWORD *)v22 + 15) + 496LL * v19;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v24) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
      if ( *(_WORD *)(v24 + 180) != *((_WORD *)a3 + 90) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
      if ( *(_QWORD *)(v24 + 16) != *((_QWORD *)a3 + 2) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
      if ( (*(_DWORD *)v24 & 2) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
      CTouchProcessor::SetPointerInfoNodeTargetInt(v26, (struct CPointerInfoNode *)v24, a4, a5, a6, a7, 0, a8, a9);
      v19 = *(_DWORD *)(v24 + 352);
      --HistoryCount;
    }
  }
  v23 = HistoryCount == 1;
LABEL_21:
  if ( !v23 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v18);
}
