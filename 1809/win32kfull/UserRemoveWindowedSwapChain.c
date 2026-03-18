/*
 * XREFs of UserRemoveWindowedSwapChain @ 0x1C0156B90
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C007C6F4 (IsWindowBeingDestroyed.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C00C9194 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C01538A4 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C01539FC (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ??$RemoveProp@VCSwapChainProp@@@CWindowProp@@SAHPEAUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C02217F8 (--$RemoveProp@VCSwapChainProp@@@CWindowProp@@SAHPEAUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 */

__int64 __fastcall UserRemoveWindowedSwapChain(__int64 a1, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagWND *v10; // rbx
  CSwapChainProp *v12; // rsi
  CSwapChainProp *v13; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v10 = (struct tagWND *)v5;
  if ( v5 )
  {
    v7 = *(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFF;
    if ( (_DWORD)v7 != 669 )
    {
      if ( a2 )
      {
        if ( CWindowProp::GetProp<CSwapChainProp>(v5, (__int64 *)&v13) )
          *((_DWORD *)v13 + 6) = 1;
      }
      else if ( (unsigned int)CWindowProp::RemoveProp<CSwapChainProp>(v5, &v13) )
      {
        v12 = v13;
        CSwapChainProp::ClearCompositionSurfaceObj(v13);
        if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v10) )
          CSwapChainProp::NotifyDwm(v12, v10);
        (**(void (__fastcall ***)(CSwapChainProp *))v12)(v12);
      }
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v4;
}
