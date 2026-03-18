/*
 * XREFs of ?DestroyDefaultAnimations@CInteractionTracker@@AEAAXXZ @ 0x18019F2D8
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x18019DA98 (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801A2E54 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1801A2F88 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x1801A3020 (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801A3090 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CInteractionTracker::DestroyDefaultAnimations(CInteractionTracker *this)
{
  __int64 *v1; // rdi
  struct CResource *v3; // rdx
  struct CResource *v4; // rdx

  v1 = (__int64 *)((char *)this + 456);
  v3 = (struct CResource *)*((_QWORD *)this + 57);
  if ( v3 )
  {
    CResource::UnRegisterNotifierInternal(this, v3);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v1);
  }
  v4 = (struct CResource *)*((_QWORD *)this + 58);
  if ( v4 )
  {
    CResource::UnRegisterNotifierInternal(this, v4);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 58);
  }
}
