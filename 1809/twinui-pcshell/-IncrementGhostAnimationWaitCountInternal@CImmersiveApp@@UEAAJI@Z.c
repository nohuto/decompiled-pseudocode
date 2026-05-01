/*
 * XREFs of ?IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z @ 0x18011D2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180042F7C (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180043060 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18004393C (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0001@@W4GHOST_STATUS@@@Z @ 0x18004501C (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     ?GhostAnimationWaitCompleted@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18011C9EC (-GhostAnimationWaitCompleted@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 */

__int64 __fastcall CImmersiveApp::IncrementGhostAnimationWaitCountInternal(CImmersiveApp *this)
{
  CImmersiveApp::CImmersiveWindowCollection *v1; // rbx
  int v2; // edx
  int v3; // r8d

  v1 = (CImmersiveApp *)((char *)this + 152);
  if ( !CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp *)((char *)this + 152)) )
    CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual((__int64)v1, 0, 4u);
  if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(v1) )
  {
    CImmersiveApp::CImmersiveWindowCollection::GhostAnimationWaitCompleted(v1);
    if ( CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(v1, v2, v3) )
      CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(v1);
  }
  return 2147947423LL;
}
