/*
 * XREFs of UserRemoveWindowedSwapChain @ 0x1C0135BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C00C0B34 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     IsWindowBeingDestroyed @ 0x1C00C476C (IsWindowBeingDestroyed.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C0132684 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C013271C (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UserRemoveWindowedSwapChain(__int64 a1, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagWND *v10; // rsi
  CSwapChainProp *v12; // rax
  CSwapChainProp *v13; // rbx
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v10 = (struct tagWND *)v5;
  if ( v5 )
  {
    v7 = *(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x3FFF;
    if ( (_DWORD)v7 != 669 )
    {
      if ( a2 )
      {
        if ( CWindowProp::GetProp<CSwapChainProp>(v5, &v14) )
          *(_DWORD *)(v14 + 24) = 1;
      }
      else
      {
        v12 = (CSwapChainProp *)RealInternalRemoveProp(*(_QWORD *)(v5 + 120), CSwapChainProp::s_atom, 1LL);
        v13 = v12;
        if ( v12 )
        {
          *((_QWORD *)v12 + 1) = 0LL;
          CSwapChainProp::ClearCompositionSurfaceObj(v12);
          if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v10) )
            CSwapChainProp::NotifyDwm(v13, v10);
          (**(void (__fastcall ***)(CSwapChainProp *))v13)(v13);
        }
      }
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v4;
}
