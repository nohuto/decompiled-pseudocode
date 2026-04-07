/*
 * XREFs of ?ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z @ 0x180003A64
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18002A1BC (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x180030944 (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CAnimationScheduler::ShouldSnapshot(__int64 a1, __int16 a2, _DWORD *a3)
{
  char v3; // bl
  unsigned int v7; // edi
  _DWORD *v8; // rcx

  v3 = 0;
  v7 = 0;
  if ( *(_DWORD *)(a1 + 40) )
  {
    while ( 1 )
    {
      v8 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 8LL * v7);
      if ( a3 != v8
        && v8[6] != 4
        && ((*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v8 + 120LL))(v8, a2 & 0xFFF) & 1) != 0 )
      {
        break;
      }
      if ( ++v7 >= *(_DWORD *)(a1 + 40) )
        return v3;
    }
    return 1;
  }
  return v3;
}
