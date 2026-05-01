/*
 * XREFs of ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180043818
 * Callers:
 *     ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x18002B12C (-_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x180045AD8 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x18011AFB0 (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ?HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18011D1AC (-HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__&___ptr64_::Invoke @ 0x18011D5A0 (CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__-___ptr64_--Invoke.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x180120260 (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x180120538 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180121914 (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18002CE1C (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180042F7C (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180043060 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18004393C (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800439C4 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0001@@W4GHOST_STATUS@@@Z @ 0x18004501C (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     ?IsPresentationInProgress@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180045A5C (-IsPresentationInProgress@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18011E92C (-QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  char *v2; // rax
  char *v3; // rdx
  char *v4; // rcx
  unsigned int v5; // edi
  unsigned __int64 i; // rsi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx

  if ( !*((_QWORD *)this + 22) )
    return 0LL;
  v2 = (char *)this + 216;
  v3 = (char *)this + 248;
  v4 = v2;
  if ( v2 != v3 )
  {
    while ( !*v4 )
    {
      v4 += 8;
      if ( v4 == v3 )
        goto LABEL_5;
    }
    v5 = 2;
    while ( v2 != v3 )
    {
      if ( *v2 )
      {
        if ( !*((_DWORD *)v2 + 1) )
          goto LABEL_13;
        if ( *((_DWORD *)v2 + 1) == 1 )
          v5 = 1;
      }
      v2 += 8;
    }
LABEL_14:
    if ( v5 != 2 )
    {
      if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(this) )
        CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus((__int64)this, 16);
      else
        CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(this, 0LL, 16LL);
      if ( CImmersiveApp::CImmersiveWindowCollection::IsPresentationInProgress(this) )
      {
        CImmersiveApp::CImmersiveWindowCollection::QueueAyncVisibilityReconciliation(this);
        return 0LL;
      }
    }
    goto LABEL_7;
  }
LABEL_5:
  if ( !*((_BYTE *)this + 200) )
  {
LABEL_13:
    v5 = 0;
    goto LABEL_14;
  }
  v5 = 2;
LABEL_7:
  (*(void (__fastcall **)(_QWORD, _QWORD))(***((_QWORD ***)this + 21) + 224LL))(**((_QWORD **)this + 21), v5);
  for ( i = 1LL; i < *((_QWORD *)this + 22); ++i )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * i);
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 216LL))(v8);
    v10 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * i);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 224LL))(v10, v9 != 0 ? v5 : 0);
  }
  if ( v5 == 2 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 56LL))(*((_QWORD *)this + 19)) )
    {
      CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus(this, 16LL);
      if ( CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(this) )
        CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(this);
    }
  }
  return 0LL;
}
