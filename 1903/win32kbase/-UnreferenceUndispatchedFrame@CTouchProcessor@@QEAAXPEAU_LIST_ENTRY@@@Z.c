/*
 * XREFs of ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0175900
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A4DE8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C01673F0 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C016B598 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C016CB58 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C016DA3C (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016E13C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0175400 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0175710 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ApiSetEditionEdgyResetDataFrames @ 0x1C019BDB0 (ApiSetEditionEdgyResetDataFrames.c)
 */

void __fastcall CTouchProcessor::UnreferenceUndispatchedFrame(struct _KTHREAD **this, struct _LIST_ENTRY *a2)
{
  __int64 v4; // rdx
  CTouchProcessor *v5; // rcx
  struct _LIST_ENTRY **p_Blink; // rdi
  unsigned int i; // esi
  __int64 v8; // rbx
  PVOID CurrentProcess; // rax
  int v10; // r14d
  __int64 *PrevMsgId; // rax
  __int64 v12; // r8
  CInpLockGuard *v13; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v13,
    (struct CInpLockGuard *)(this + 6));
  p_Blink = &a2[-2].Blink;
  for ( i = 0; i < *((_DWORD *)p_Blink + 12); ++i )
  {
    v8 = (__int64)&p_Blink[16][31 * i];
    CurrentProcess = (PVOID)PsGetCurrentProcess(v5, v4);
    if ( !CurrentProcess
      || CurrentProcess != g_pepDwm
      || !CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v8) && (*(_DWORD *)(v8 + 4) & 0x200) == 0 )
    {
      if ( !*(_QWORD *)(v8 + 16)
        || (v5 = (CTouchProcessor *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                                        v5,
                                                        (const struct CPointerInputFrame *)p_Blink,
                                                        (const struct CPointerInfoNode *)v8)
                                    + 37),
            ((unsigned __int8)v5 & 4) != 0) )
      {
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v8) )
          CTouchProcessor::FreePointerInfoNode(this, v4, *((unsigned int *)p_Blink + 10), i);
      }
      else
      {
        v10 = *(_DWORD *)(v8 + 188) & 2;
        if ( (*(_DWORD *)(v8 + 188) & 1) == 0 )
        {
          PrevMsgId = CTouchProcessor::GetPrevMsgId(v5, *(__int64 **)(v8 + 16));
          if ( PrevMsgId )
          {
            v5 = (CTouchProcessor *)*((unsigned int *)PrevMsgId + 9);
            if ( ((unsigned __int8)v5 & 0x40) != 0 )
              CTouchProcessor::UnreferenceMsgData(this, (__int64)PrevMsgId, 1LL);
          }
        }
        if ( !v10 )
          CTouchProcessor::UnreferenceMsgData(this, *(_QWORD *)(v8 + 16), 1LL);
      }
    }
  }
  ApiSetEditionEdgyResetDataFrames(p_Blink);
  CTouchProcessor::UnreferenceFrame(this, (const struct CPointerInputFrame *)p_Blink, v12);
  if ( !v14 )
    CInpLockGuard::UnLock(v13);
}
