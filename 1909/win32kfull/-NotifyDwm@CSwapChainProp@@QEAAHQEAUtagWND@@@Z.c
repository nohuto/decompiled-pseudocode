/*
 * XREFs of ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C015AE14
 * Callers:
 *     zzzComposeDesktop @ 0x1C0010708 (zzzComposeDesktop.c)
 *     UserSetWindowedSwapChain @ 0x1C015AC94 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1C015DE50 (UserRemoveWindowedSwapChain.c)
 * Callees:
 *     DwmAsyncDxBindSwapChain @ 0x1C015AEBC (DwmAsyncDxBindSwapChain.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CSwapChainProp::NotifyDwm(CSwapChainProp *this, struct tagWND *const a2)
{
  struct tagWND *v2; // rax
  unsigned int v3; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  void *v8; // rcx
  void *v9; // rax
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct tagWND *)*((_QWORD *)this + 1);
  v3 = 0;
  if ( v2 && v2 != a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( (unsigned int)IsWindowDesktopComposed(a2) )
  {
    v8 = (void *)*((_QWORD *)this + 2);
    v11 = 0LL;
    if ( !v8 || (int)DxgkOpenDwmHandleForCompositionObjectReference(v8, &v11) >= 0 )
    {
      v9 = (void *)ReferenceDwmApiPort(v8, v6, v7);
      LOBYTE(v3) = (int)DwmAsyncDxBindSwapChain(v9) >= 0;
    }
  }
  return v3;
}
