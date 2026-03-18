/*
 * XREFs of ?DestroyDefaultAnimations@CInteractionTracker@@AEAAXXZ @ 0x1801D887C
 * Callers:
 *     ?StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800ED1C4 (-StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801DC604 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1801DC770 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801DC840 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
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
