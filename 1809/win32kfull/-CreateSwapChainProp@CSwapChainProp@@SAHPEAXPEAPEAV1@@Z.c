/*
 * XREFs of ?CreateSwapChainProp@CSwapChainProp@@SAHPEAXPEAPEAV1@@Z @ 0x1C0153A3C
 * Callers:
 *     UserSetWindowedSwapChain @ 0x1C0153724 (UserSetWindowedSwapChain.c)
 * Callees:
 *     memset @ 0x1C0163640 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CSwapChainProp::CreateSwapChainProp(void *a1, struct CSwapChainProp **a2)
{
  unsigned int v2; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rcx

  v2 = 0;
  *a2 = 0LL;
  v5 = (_QWORD *)Win32AllocPoolZInit(32LL, 1668772693LL);
  v6 = v5;
  if ( v5 )
  {
    memset(v5, 0, 0x20uLL);
    *v6 = &CSwapChainProp::`vftable';
    if ( v6[2] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
    *((_DWORD *)v6 + 6) = 0;
    v2 = 1;
    v6[2] = a1;
    *a2 = (struct CSwapChainProp *)v6;
  }
  return v2;
}
