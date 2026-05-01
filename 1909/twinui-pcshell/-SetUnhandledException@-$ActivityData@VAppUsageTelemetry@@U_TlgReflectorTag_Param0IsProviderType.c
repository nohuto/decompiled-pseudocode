/*
 * XREFs of ?SetUnhandledException@?$ActivityData@VAppUsageTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAJXZ @ 0x1800ABEF0
 * Callers:
 *     ??1UpdateAppView@AppUsageTelemetry@@QEAA@XZ @ 0x1800B6400 (--1UpdateAppView@AppUsageTelemetry@@QEAA@XZ.c)
 *     ??1TouchKeyboardExperienceManagerDelayedInitialization@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18032CDE0 (--1TouchKeyboardExperienceManagerDelayedInitialization@TouchKeyboardExperienceTelemetryLogger@@Q.c)
 * Callees:
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1801239E0 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

__int64 __fastcall wil::ActivityBase<AppUsageTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AppUsageTelemetry,_TlgReflectorTag_Param0IsProviderType>::SetUnhandledException(
        _DWORD *a1)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // edx
  const struct wil::FailureInfo *v6; // rdx
  _BYTE v7[152]; // [rsp+20h] [rbp-98h] BYREF

  v2 = -2147024322;
  v3 = a1[18];
  if ( (int)a1[21] < 0 )
    v2 = a1[21];
  if ( v3 < 1 )
  {
    memset_0(v7, 0, 0x90uLL);
    wil::details::WilFailFast((wil::details *)v7, v6);
  }
  v4 = a1[19];
  if ( v4 >= 0 )
  {
    a1[19] = v2;
    v4 = v2;
  }
  a1[18] = v3 - 1;
  return (unsigned int)v4;
}
