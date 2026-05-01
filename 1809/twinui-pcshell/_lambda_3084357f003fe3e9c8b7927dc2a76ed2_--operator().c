/*
 * XREFs of _lambda_3084357f003fe3e9c8b7927dc2a76ed2_::operator() @ 0x180212480
 * Callers:
 *     wil::details::ScopeExitFn__lambda_3084357f003fe3e9c8b7927dc2a76ed2___::_ScopeExitFn__lambda_3084357f003fe3e9c8b7927dc2a76ed2___ @ 0x18021153C (wil--details--ScopeExitFn__lambda_3084357f003fe3e9c8b7927dc2a76ed2___--_ScopeExitFn__lambda_3084.c)
 * Callees:
 *     ?CloseServerWindow@ViewManagerBridge@@UEAAJI@Z @ 0x1802300A0 (-CloseServerWindow@ViewManagerBridge@@UEAAJI@Z.c)
 *     ?CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z @ 0x180230120 (-CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z.c)
 */

int __fastcall lambda_3084357f003fe3e9c8b7927dc2a76ed2_::operator()(__int64 a1)
{
  _QWORD *v2; // rax
  unsigned int v3; // edx

  ViewManagerBridge::CloseViewForScenario(
    *(_QWORD *)(*(_QWORD *)a1 + 512LL),
    *(unsigned int *)(**(_QWORD **)(a1 + 8) + 16LL * *(_QWORD *)(a1 + 16) + 8),
    *(_QWORD *)(**(_QWORD **)(a1 + 8) + 16LL * *(_QWORD *)(a1 + 16)),
    2LL);
  v2 = *(_QWORD **)(a1 + 8);
  v3 = *(_DWORD *)(*v2 + 16LL * *(_QWORD *)(a1 + 16) + 12);
  if ( v3 )
    LODWORD(v2) = ViewManagerBridge::CloseServerWindow(*(ViewManagerBridge **)(*(_QWORD *)a1 + 512LL), v3);
  return (int)v2;
}
