/*
 * XREFs of UserRemoveWindowedSwapChain @ 0x1C015CEA0
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0048A98 (IsWindowBeingDestroyed.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C00839B0 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C0159E64 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C0159FBC (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ??$RemoveProp@VCSwapChainProp@@@CWindowProp@@SAHPEAUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C0239F28 (--$RemoveProp@VCSwapChainProp@@@CWindowProp@@SAHPEAUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 */

__int64 __fastcall UserRemoveWindowedSwapChain(__int64 a1, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  struct tagWND *v7; // rbx
  CSwapChainProp *v9; // rsi
  CSwapChainProp *v10; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v7 = (struct tagWND *)v5;
  if ( v5 )
  {
    v6 = *(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x3FFF;
    if ( (_DWORD)v6 != 669 )
    {
      if ( a2 )
      {
        if ( CWindowProp::GetProp<CSwapChainProp>(v5, (__int64 *)&v10) )
          *((_DWORD *)v10 + 6) = 1;
      }
      else if ( (unsigned int)CWindowProp::RemoveProp<CSwapChainProp>(v5, &v10) )
      {
        v9 = v10;
        CSwapChainProp::ClearCompositionSurfaceObj(v10);
        if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v7) )
          CSwapChainProp::NotifyDwm(v9, v7);
        (**(void (__fastcall ***)(CSwapChainProp *))v9)(v9);
      }
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
