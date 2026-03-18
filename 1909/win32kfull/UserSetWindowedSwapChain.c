/*
 * XREFs of UserSetWindowedSwapChain @ 0x1C015AC94
 * Callers:
 *     UserSetWindowedSwapChainApiExt @ 0x1C015AC80 (UserSetWindowedSwapChainApiExt.c)
 * Callees:
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C0010A18 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0017C2C (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     IsWindowBeingDestroyed @ 0x1C008D558 (IsWindowBeingDestroyed.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C015AE14 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C015AF6C (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 *     ?CreateSwapChainProp@CSwapChainProp@@SAHPEAXPEAPEAV1@@Z @ 0x1C015AFAC (-CreateSwapChainProp@CSwapChainProp@@SAHPEAXPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserSetWindowedSwapChain(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  struct tagWND *v9; // rsi
  int v10; // eax
  __int64 v11; // r9
  int v12; // r15d
  CSwapChainProp *v13; // rbx
  void *v14; // rbp
  void *v16; // [rsp+30h] [rbp-38h] BYREF
  CSwapChainProp *v17; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  v9 = (struct tagWND *)v7;
  if ( !v7 )
    goto LABEL_14;
  v8 = (*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x3FFFu) - 669;
  if ( (v8 & 0xFFFFFFFD) == 0 )
    goto LABEL_14;
  if ( (unsigned int)IsWindowBeingDestroyed(v7) )
    goto LABEL_14;
  v10 = IsWindowDesktopComposed(v8);
  LOBYTE(v11) = 1;
  v12 = v10;
  if ( (int)DxgkReferenceCompositionObject(a3, 1LL, 1LL, v11, &v16) < 0 )
    goto LABEL_14;
  CWindowProp::GetProp<CSwapChainProp>((__int64)v9, (__int64 *)&v17);
  v13 = v17;
  if ( !v17 )
  {
    if ( !(unsigned int)CSwapChainProp::CreateSwapChainProp(v16, &v17) )
      goto LABEL_14;
    v13 = v17;
    v3 = CWindowProp::SetProp(v17, (unsigned __int64)v9);
    if ( !v3 )
    {
      (**(void (__fastcall ***)(CSwapChainProp *))v13)(v13);
      goto LABEL_14;
    }
    goto LABEL_12;
  }
  v14 = v16;
  if ( *((void **)v17 + 2) == v16 )
  {
    *((_DWORD *)v17 + 6) = 0;
    v3 = 1;
    DxgkReleaseCompositionObjectReference(v16);
    goto LABEL_14;
  }
  if ( a2 || *((_DWORD *)v17 + 6) )
  {
    CSwapChainProp::ClearCompositionSurfaceObj(v17);
    if ( *((_QWORD *)v13 + 2) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
    *((_DWORD *)v13 + 6) = 0;
    v3 = 1;
    *((_QWORD *)v13 + 2) = v14;
LABEL_12:
    if ( v12 )
      v3 = CSwapChainProp::NotifyDwm(v13, v9);
  }
LABEL_14:
  UserSessionSwitchLeaveCrit(v8);
  return v3;
}
