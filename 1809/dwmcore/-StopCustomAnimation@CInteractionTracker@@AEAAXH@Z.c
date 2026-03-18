/*
 * XREFs of ?StopCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x1801A2D2C
 * Callers:
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801A0220 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801A1ED4 (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x1801A2D98 (-StopCustomAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801A2E54 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInteractionTracker::StopCustomAnimation(CInteractionTracker *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  struct CResource *v5; // rdx
  __int64 v6; // rcx

  if ( a2 < 2 )
  {
    v2 = (int)a2;
    v4 = *((_QWORD *)this + (int)a2 + 43);
    if ( v4 )
    {
      v5 = *(struct CResource **)(v4 + 16);
      if ( v5 )
      {
        *((_BYTE *)v5 + 208) &= ~1u;
        CResource::UnRegisterNotifierInternal(this, v5);
      }
      v6 = *((_QWORD *)this + v2 + 43);
      if ( v6 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        *((_QWORD *)this + v2 + 43) = 0LL;
      }
    }
  }
}
