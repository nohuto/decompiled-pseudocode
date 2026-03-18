/*
 * XREFs of ?SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C015E7F8
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C015D80C (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C015F298 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C015F434 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

void *__fastcall CBasePTPEngine::SendEtwOutput(__int64 a1, int a2, __int64 a3)
{
  int v3; // eax
  _DWORD *v4; // rbx
  __int64 v5; // rcx

  v3 = *(_DWORD *)(a3 + 16);
  v4 = (_DWORD *)(a1 + 1152);
  *(_OWORD *)(a1 + 1160) = *(_OWORD *)a3;
  *(_DWORD *)(a1 + 1176) = v3;
  *(_DWORD *)(a1 + 1156) = a2;
  v5 = *(_QWORD *)(a1 + 8);
  *v4 = 1;
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v5 + 8LL))(v5, v4);
  return memset(v4, 0, 0x20uLL);
}
