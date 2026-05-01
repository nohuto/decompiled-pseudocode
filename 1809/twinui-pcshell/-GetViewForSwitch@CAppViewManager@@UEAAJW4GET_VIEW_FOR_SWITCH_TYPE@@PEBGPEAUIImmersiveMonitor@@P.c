/*
 * XREFs of ?GetViewForSwitch@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x18010AB50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180110B00 (-_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveM.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::GetViewForSwitch(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v8; // r14
  int ViewForSwitchInternal; // ebx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a5);
  ViewForSwitchInternal = CAppViewManager::_GetViewForSwitchInternal(a1 - 32, a2, a3);
  if ( ViewForSwitchInternal >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*a5)(
            a5,
            &GUID_8b14e88b_5663_4caf_b196_c31479262831,
            v8);
    ViewForSwitchInternal = v10;
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x358,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v10);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a5);
  return (unsigned int)ViewForSwitchInternal;
}
