/*
 * XREFs of ?SetUnhandledException@?$ActivityData@VPenWorkspaceBrokerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAJXZ @ 0x18019C378
 * Callers:
 *     ??1OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAA@XZ @ 0x180198FC8 (--1OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAA@XZ.c)
 *     ??1TabViewManager_GetOrCreateTabForWindowId@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1801D5B84 (--1TabViewManager_GetOrCreateTabForWindowId@TabViewManagerTraceLogging@@QEAA@XZ.c)
 * Callees:
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800E2270 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

__int64 __fastcall wil::ActivityBase<PenWorkspaceBrokerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<PenWorkspaceBrokerLogging,_TlgReflectorTag_Param0IsProviderType>::SetUnhandledException(
        _DWORD *a1)
{
  int v2; // ecx
  int v3; // r8d
  const struct wil::FailureInfo *v4; // rdx
  int v5; // edx
  _BYTE v7[152]; // [rsp+20h] [rbp-98h] BYREF

  v2 = -2147024322;
  v3 = a1[18];
  if ( (int)a1[21] < 0 )
    v2 = a1[21];
  if ( v3 < 1 )
  {
    memset_0(v7, 0, 0x90uLL);
    wil::details::WilFailFast((wil::details *)v7, v4);
  }
  v5 = a1[19];
  if ( v5 >= 0 )
  {
    a1[19] = v2;
    v5 = v2;
  }
  a1[18] = v3 - 1;
  return (unsigned int)v5;
}
