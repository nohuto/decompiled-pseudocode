/*
 * XREFs of ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18004393C
 * Callers:
 *     ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x180042E70 (-OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z.c)
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x1800436D0 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180043818 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z @ 0x18011D2E0 (-IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z.c)
 *     ?_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180121BFC (-_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x18012216C (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_SdL @ 0x180122A00 (WPP_SF_SdL.c)
 *     WPP_SF_Sdq @ 0x180122BD0 (WPP_SF_Sdq.c)
 */

char __fastcall CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(
        CImmersiveApp::CImmersiveWindowCollection *this,
        int a2,
        int a3)
{
  char v4; // si
  __int64 v6; // rbx
  char v7; // al
  int v8; // r8d

  v4 = 1;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SdL(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      a2,
      a3,
      *(_QWORD *)(*((_QWORD *)this + 20) + 560LL),
      *(_DWORD *)(*((_QWORD *)this + 20) + 568LL),
      *((_DWORD *)this + 53));
    if ( *((_QWORD *)this + 22) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 21) + 240LL))(**((_QWORD **)this + 21))
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v6 = *((_QWORD *)this + 20);
        v7 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 21) + 32LL))(**((_QWORD **)this + 21));
        WPP_SF_Sdq(*((_QWORD *)WPP_GLOBAL_Control + 2), 29, v8, *(_QWORD *)(v6 + 560), *(_DWORD *)(v6 + 568), v7);
      }
    }
  }
  if ( *((_DWORD *)this + 53)
    || !*((_QWORD *)this + 22)
    || !(*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 21) + 240LL))(**((_QWORD **)this + 21))
    || *(_DWORD *)(*((_QWORD *)this + 31) + 152LL) == 1 )
  {
    return 0;
  }
  return v4;
}
