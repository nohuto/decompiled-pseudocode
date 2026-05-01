/*
 * XREFs of _lambda_de7996bb993216ca39e467418bca0f5e_::operator() @ 0x1802891B4
 * Callers:
 *     wil::details::ScopeExitFn__lambda_de7996bb993216ca39e467418bca0f5e___::_ScopeExitFn__lambda_de7996bb993216ca39e467418bca0f5e___ @ 0x180288274 (wil--details--ScopeExitFn__lambda_de7996bb993216ca39e467418bca0f5e___--_ScopeExitFn__lambda_de79.c)
 * Callees:
 *     ?CloseServerWindow@ViewManagerBridge@@UEAAJI@Z @ 0x1802A4800 (-CloseServerWindow@ViewManagerBridge@@UEAAJI@Z.c)
 *     ?CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z @ 0x1802A4880 (-CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z.c)
 */

int __fastcall lambda_de7996bb993216ca39e467418bca0f5e_::operator()(__int64 a1)
{
  _QWORD *v2; // rax
  unsigned int v3; // edx

  ViewManagerBridge::CloseViewForScenario(
    *(_QWORD *)(*(_QWORD *)a1 + 496LL),
    *(unsigned int *)(**(_QWORD **)(a1 + 8) + 16LL * *(_QWORD *)(a1 + 16) + 8),
    *(_QWORD *)(**(_QWORD **)(a1 + 8) + 16LL * *(_QWORD *)(a1 + 16)),
    2LL);
  v2 = *(_QWORD **)(a1 + 8);
  v3 = *(_DWORD *)(*v2 + 16LL * *(_QWORD *)(a1 + 16) + 12);
  if ( v3 )
    LODWORD(v2) = ViewManagerBridge::CloseServerWindow(*(ViewManagerBridge **)(*(_QWORD *)a1 + 496LL), v3);
  return (int)v2;
}
