/*
 * XREFs of ?GetViewForSwitchByHostId@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x18004E980
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18004EA2C (-_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImme.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::GetViewForSwitchByHostId(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v8; // r14
  int ViewForSwitchInternalByHostId; // eax
  unsigned int v10; // ebx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a5);
  ViewForSwitchInternalByHostId = CAppViewManager::_GetViewForSwitchInternalByHostId(a1 - 32, a2, a3);
  v10 = ViewForSwitchInternalByHostId;
  if ( ViewForSwitchInternalByHostId < 0 )
  {
    v12 = 867LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)ViewForSwitchInternalByHostId);
    goto LABEL_3;
  }
  ViewForSwitchInternalByHostId = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*a5)(
                                    a5,
                                    &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                                    v8);
  v10 = ViewForSwitchInternalByHostId;
  if ( ViewForSwitchInternalByHostId < 0 )
  {
    v12 = 868LL;
    goto LABEL_6;
  }
LABEL_3:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a5);
  return v10;
}
