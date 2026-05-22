/*
 * XREFs of ?OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z @ 0x180092D80
 * Callers:
 *     ?OnInputReport@InputStateManager@@W7EAAJPEAUInputInfo@@@Z @ 0x180038830 (-OnInputReport@InputStateManager@@W7EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z @ 0x180092E20 (-OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?ReceiveInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x180092F18 (-ReceiveInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ?UpdateLastInputTimestamp@InputStateManager@@AEAAXPEAUInputInfo@@@Z @ 0x180092FF8 (-UpdateLastInputTimestamp@InputStateManager@@AEAAXPEAUInputInfo@@@Z.c)
 */

__int64 __fastcall InputStateManager::OnInputReport(InputStateManager *this, struct InputInfo *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  InputETW::InputStateManager::OnInputReport(a2);
  InputTraceLogging::ISM::ReceiveInput(a2);
  InputStateManager::UpdateLastInputTimestamp(this, a2);
  v4 = *((_QWORD *)this + 9);
  v5 = *((_QWORD *)this + 10);
  if ( v4 == v5 )
  {
LABEL_4:
    v6 = -2147467259;
    v7 = 403LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  while ( *(_DWORD *)v4 != *((_DWORD *)a2 + 1) )
  {
    v4 += 16LL;
    if ( v4 == v5 )
      goto LABEL_4;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**(_QWORD **)(v4 + 8) + 48LL))(*(_QWORD *)(v4 + 8), a2);
  if ( v6 < 0 )
  {
    v7 = 396LL;
    goto LABEL_5;
  }
  return 0LL;
}
