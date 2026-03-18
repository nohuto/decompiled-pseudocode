/*
 * XREFs of ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C0137110
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0063118 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD204 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD5D8 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     EtwTracePointerNoCoalesce @ 0x1C00E7D10 (EtwTracePointerNoCoalesce.c)
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C0137288 (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C013CC44 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C01427CC (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x1C0144B94 (-SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCoalescePointerMessage(
        CTouchProcessor *this,
        unsigned int *a2,
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
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  CTouchProcessor *v19; // rcx
  const struct CPointerQFrame *PointerInfoNodeQFrame; // rax
  __int64 v21; // rdx
  CTouchProcessor *v22; // rcx
  CTouchProcessor *v23; // rcx
  unsigned int v24; // ebp
  __int64 v25; // r8
  const struct CPointerQFrame *v26; // rax
  CInpLockGuard *v28[6]; // [rsp+30h] [rbp-48h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v28,
    (CTouchProcessor *)((char *)this + 56),
    a2);
  if ( !a2 )
    goto LABEL_19;
  v12 = CTouchProcessor::ReferenceFrame(this, a2[7]);
  if ( !v12 )
    goto LABEL_19;
  v14 = a2[8];
  if ( (unsigned int)v14 >= *((_DWORD *)v12 + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v13);
    v14 = a2[8];
  }
  v15 = *((_QWORD *)v12 + 13) + 576 * v14;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v15) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
  if ( *(_WORD *)(v15 + 236) != *((_WORD *)a2 + 8) )
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
    v21 = (__int64)v12;
    v22 = this;
    goto LABEL_18;
  }
LABEL_11:
  CTouchProcessor::SetPointerInfoNodeDelegateAction(this, v12, a2[8], a6, a3, a4);
  PointerInfoNodeQFrame = CTouchProcessor::GetPointerInfoNodeQFrame(v19, v12, (const struct CPointerInfoNode *)v15);
  v21 = (__int64)v12;
  v22 = this;
  if ( (*((_DWORD *)PointerInfoNodeQFrame + 51) & 4) != 0 )
  {
LABEL_18:
    CTouchProcessor::UnreferenceFrame((__int64)v22, v21, v18);
LABEL_19:
    v24 = 0;
    goto LABEL_20;
  }
  v24 = CTouchProcessor::DelegateCoalesceQFrame(this, v12, *(_DWORD *)(v15 + 8));
  if ( !v24 )
  {
    v26 = CTouchProcessor::GetPointerInfoNodeQFrame(v23, v12, (const struct CPointerInfoNode *)v15);
    EtwTracePointerNoCoalesce(*(unsigned __int16 *)(v15 + 224), *(_WORD *)(v15 + 236), *((_DWORD *)v26 + 53), 1);
  }
  CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v12, v25);
LABEL_20:
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v28);
  return v24;
}
