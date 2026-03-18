/*
 * XREFs of ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0146940
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD240 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD5D8 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0132F74 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C01390C4 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C013CC44 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C013DFE0 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C013EF10 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0146784 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ApiSetEditionEdgyResetDataFrames @ 0x1C01618AC (ApiSetEditionEdgyResetDataFrames.c)
 */

void __fastcall CTouchProcessor::UnreferenceUndispatchedFrame(struct _KTHREAD **this, struct _LIST_ENTRY *a2)
{
  CTouchProcessor *v4; // rcx
  struct _LIST_ENTRY **p_Blink; // rdi
  __int64 i; // rsi
  __int64 v7; // rbx
  PVOID CurrentProcess; // rax
  int v9; // r14d
  __int64 *PrevMsgId; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  CInpLockGuard *v13[8]; // [rsp+20h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v13,
    (struct CInpLockGuard *)(this + 7),
    0LL);
  p_Blink = &a2[-2].Blink;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)p_Blink + 12); i = (unsigned int)(i + 1) )
  {
    v7 = (__int64)&p_Blink[13][36 * i];
    CurrentProcess = (PVOID)PsGetCurrentProcess(v4);
    if ( !CurrentProcess
      || CurrentProcess != g_pepDwm
      || !CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v7) && (*(_DWORD *)(v7 + 4) & 0x200) == 0 )
    {
      if ( !*(_QWORD *)(v7 + 16)
        || (v4 = (CTouchProcessor *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                                        v4,
                                                        (const struct CPointerInputFrame *)p_Blink,
                                                        (const struct CPointerInfoNode *)v7)
                                    + 51),
            ((unsigned __int8)v4 & 4) != 0) )
      {
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v7) )
          CTouchProcessor::FreePointerInfoNode(this, v11, *((unsigned int *)p_Blink + 10), i);
      }
      else
      {
        v9 = *(_DWORD *)(v7 + 244) & 2;
        if ( (*(_DWORD *)(v7 + 244) & 1) == 0 )
        {
          PrevMsgId = CTouchProcessor::GetPrevMsgId(v4, *(__int64 **)(v7 + 16));
          if ( PrevMsgId )
          {
            v4 = (CTouchProcessor *)*((unsigned int *)PrevMsgId + 9);
            if ( ((unsigned __int8)v4 & 0x40) != 0 )
              CTouchProcessor::UnreferenceMsgData((__int64)this, (__int64)PrevMsgId, 1LL);
          }
        }
        if ( !v9 )
          CTouchProcessor::UnreferenceMsgData((__int64)this, *(_QWORD *)(v7 + 16), 1LL);
      }
    }
  }
  ApiSetEditionEdgyResetDataFrames(p_Blink);
  CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)p_Blink, v12);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v13);
}
