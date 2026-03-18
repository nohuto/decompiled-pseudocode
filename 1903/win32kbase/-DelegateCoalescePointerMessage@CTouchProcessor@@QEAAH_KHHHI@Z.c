/*
 * XREFs of ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C0165410
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A4DE8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     EtwTracePointerNoCoalesce @ 0x1C010E2D0 (EtwTracePointerNoCoalesce.c)
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C016558C (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C016B598 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016E13C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C0171574 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x1C0173AA4 (-SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0175400 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCoalescePointerMessage(
        CTouchProcessor *this,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  const struct CPointerInputFrame *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  CTouchProcessor *v19; // rcx
  const struct CPointerQFrame *PointerInfoNodeQFrame; // rax
  const struct CPointerInputFrame *v21; // rdx
  CTouchProcessor *v22; // rcx
  CTouchProcessor *v23; // rcx
  unsigned int v24; // ebp
  const struct CPointerQFrame *v25; // rax
  CInpLockGuard *v27; // [rsp+30h] [rbp-28h] BYREF
  int v28; // [rsp+38h] [rbp-20h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v27,
    (CTouchProcessor *)((char *)this + 48));
  if ( !a2 )
    goto LABEL_19;
  v12 = CTouchProcessor::ReferenceFrame(this, *(_DWORD *)(a2 + 28));
  if ( !v12 )
    goto LABEL_19;
  v14 = *(unsigned int *)(a2 + 32);
  if ( (unsigned int)v14 >= *((_DWORD *)v12 + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v13);
    v14 = *(unsigned int *)(a2 + 32);
  }
  v15 = *((_QWORD *)v12 + 16) + 496 * v14;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v15) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
  if ( *(_WORD *)(v15 + 180) != *(_WORD *)(a2 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
  if ( a5 )
  {
    if ( !a4 )
      goto LABEL_11;
  }
  else if ( a4 )
  {
    goto LABEL_11;
  }
  if ( !a3 )
  {
    v21 = v12;
    v22 = this;
    goto LABEL_18;
  }
LABEL_11:
  CTouchProcessor::SetPointerInfoNodeDelegateAction(this, v12, *(_DWORD *)(a2 + 32), a6, a3, a4);
  PointerInfoNodeQFrame = CTouchProcessor::GetPointerInfoNodeQFrame(v19, v12, (const struct CPointerInfoNode *)v15);
  v21 = v12;
  v22 = this;
  if ( (*((_DWORD *)PointerInfoNodeQFrame + 37) & 4) != 0 )
  {
LABEL_18:
    CTouchProcessor::UnreferenceFrame(v22, v21);
LABEL_19:
    v24 = 0;
    goto LABEL_20;
  }
  v24 = CTouchProcessor::DelegateCoalesceQFrame(this, v12, *(_DWORD *)(v15 + 8));
  if ( !v24 )
  {
    v25 = CTouchProcessor::GetPointerInfoNodeQFrame(v23, v12, (const struct CPointerInfoNode *)v15);
    EtwTracePointerNoCoalesce(*(unsigned __int16 *)(v15 + 168), *(_WORD *)(v15 + 180), *((_DWORD *)v25 + 39), 1);
  }
  CTouchProcessor::UnreferenceFrame(this, v12);
LABEL_20:
  if ( !v28 )
    CInpLockGuard::UnLock(v27);
  return v24;
}
