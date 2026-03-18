/*
 * XREFs of ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x1801E4F50
 * Callers:
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801A2E54 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ??1InteractionSourceManager@@QEAA@XZ @ 0x1801E4B68 (--1InteractionSourceManager@@QEAA@XZ.c)
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x1801E567C (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 * Callees:
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x1801A621C (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
 */

void __fastcall InteractionSourceManager::ClearActiveManipulations(InteractionSourceManager *this)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v3; // rbp

  v1 = *((_QWORD *)this + 13);
  v3 = v1 + *((_QWORD *)this + 14);
  while ( v1 != v3 )
  {
    CManipulation::SetCaptureState_RenderThread(*(CManipulation **)(*(_QWORD *)(*((_QWORD *)this + 11)
                                                                              + 8
                                                                              * ((v1 >> 1) & (*((_QWORD *)this + 12)
                                                                                            - 1LL)))
                                                                  + 8 * (v1 & 1)));
    ++v1;
  }
  std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Tidy((_QWORD *)this + 10);
}
