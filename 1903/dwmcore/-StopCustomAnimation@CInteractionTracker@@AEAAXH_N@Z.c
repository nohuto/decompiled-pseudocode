/*
 * XREFs of ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x1800EAFE0
 * Callers:
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800EB0A8 (-StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801DAF40 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801DCB1C (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801DDD1C (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x1800EB560 (-SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@P.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInteractionTracker::StopCustomAnimation(CInteractionTracker *this, unsigned int a2, char a3)
{
  __int64 v3; // rbp
  __int64 v5; // rdi
  struct CResource *v6; // rdi
  __int64 v7; // rcx

  v3 = (int)a2;
  if ( a2 < 2 )
  {
    v5 = *((_QWORD *)this + (int)a2 + 43);
    if ( v5 )
    {
      v6 = *(struct CResource **)(v5 + 16);
      if ( v6 )
      {
        if ( *((_QWORD *)this + 79)
          && a3
          && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v6 + 48LL))(v6, 90LL) )
        {
          CInteractionTrackerBindingManager::SetCustomAnimationFinalValue(
            *((_QWORD *)this + 79),
            this,
            v6,
            (unsigned int)v3);
        }
        *((_BYTE *)v6 + 208) &= ~1u;
        CResource::UnRegisterNotifierInternal(this, v6);
      }
      v7 = *((_QWORD *)this + v3 + 43);
      if ( v7 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        *((_QWORD *)this + v3 + 43) = 0LL;
      }
    }
  }
}
