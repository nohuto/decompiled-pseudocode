/*
 * XREFs of UserSetWindowedSwapChain @ 0x1C0153724
 * Callers:
 *     UserSetWindowedSwapChainApiExt @ 0x1C0153710 (UserSetWindowedSwapChainApiExt.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C007C6F4 (IsWindowBeingDestroyed.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00B3230 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C00C9194 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C01538A4 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C01539FC (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 *     ?CreateSwapChainProp@CSwapChainProp@@SAHPEAXPEAPEAV1@@Z @ 0x1C0153A3C (-CreateSwapChainProp@CSwapChainProp@@SAHPEAXPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserSetWindowedSwapChain(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct tagWND *v12; // rsi
  int v13; // eax
  __int64 v14; // r9
  int v15; // r15d
  CSwapChainProp *v16; // rbx
  void *v17; // rbp
  void *v19; // [rsp+30h] [rbp-38h] BYREF
  CSwapChainProp *v20; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v20 = 0LL;
  EnterCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  v12 = (struct tagWND *)v7;
  if ( !v7 )
    goto LABEL_14;
  v9 = (*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x2FFFu) - 669;
  if ( (v9 & 0xFFFFFFFD) == 0 )
    goto LABEL_14;
  if ( (unsigned int)IsWindowBeingDestroyed(v7) )
    goto LABEL_14;
  v13 = IsWindowDesktopComposed(v9);
  LOBYTE(v14) = 1;
  v15 = v13;
  if ( (int)DxgkReferenceCompositionObject(a3, 1LL, 1LL, v14, &v19) < 0 )
    goto LABEL_14;
  CWindowProp::GetProp<CSwapChainProp>((__int64)v12, (__int64 *)&v20);
  v16 = v20;
  if ( !v20 )
  {
    if ( !(unsigned int)CSwapChainProp::CreateSwapChainProp(v19, &v20) )
      goto LABEL_14;
    v16 = v20;
    v3 = CWindowProp::SetProp(v20, (unsigned __int64)v12);
    if ( !v3 )
    {
      (**(void (__fastcall ***)(CSwapChainProp *))v16)(v16);
      goto LABEL_14;
    }
    goto LABEL_12;
  }
  v17 = v19;
  if ( *((void **)v20 + 2) == v19 )
  {
    *((_DWORD *)v20 + 6) = 0;
    v3 = 1;
    DxgkReleaseCompositionObjectReference(v19);
    goto LABEL_14;
  }
  if ( a2 || *((_DWORD *)v20 + 6) )
  {
    CSwapChainProp::ClearCompositionSurfaceObj(v20);
    if ( *((_QWORD *)v16 + 2) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
    *((_DWORD *)v16 + 6) = 0;
    v3 = 1;
    *((_QWORD *)v16 + 2) = v17;
LABEL_12:
    if ( v15 )
      v3 = CSwapChainProp::NotifyDwm(v16, v12);
  }
LABEL_14:
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v3;
}
