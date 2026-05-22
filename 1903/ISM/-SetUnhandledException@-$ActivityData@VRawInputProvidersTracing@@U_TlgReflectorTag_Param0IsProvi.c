/*
 * XREFs of ?SetUnhandledException@?$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAJXZ @ 0x18009F2D0
 * Callers:
 *     ??1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ @ 0x18009BFEC (--1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800526D0 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

__int64 __fastcall wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>::SetUnhandledException(
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
