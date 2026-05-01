/*
 * XREFs of ?GetViewForSwitchByHostId@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x180056130
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1800561DC (-_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImme.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::GetViewForSwitchByHostId(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v7; // r14
  __int64 v8; // rbx
  int ViewForSwitchInternalByHostId; // eax
  unsigned int v10; // ebx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v7 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  v8 = a1 - 32;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a5);
  ViewForSwitchInternalByHostId = CAppViewManager::_GetViewForSwitchInternalByHostId(v8, a2, a3);
  v10 = ViewForSwitchInternalByHostId;
  if ( ViewForSwitchInternalByHostId < 0 )
  {
    v12 = 875LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)ViewForSwitchInternalByHostId,
      (int)&a5);
    goto LABEL_3;
  }
  ViewForSwitchInternalByHostId = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*a5)(
                                    a5,
                                    &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                                    v7);
  v10 = ViewForSwitchInternalByHostId;
  if ( ViewForSwitchInternalByHostId < 0 )
  {
    v12 = 876LL;
    goto LABEL_6;
  }
LABEL_3:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a5);
  return v10;
}
