/*
 * XREFs of ?Split@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x180010BB4
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180012230 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 * Callees:
 *     ??0?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180011A20 (--0-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?LockExclusive@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800125C0 (-LockExclusive@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorT.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800E2270 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

_QWORD *__fastcall CommonStartTelemetry::LauncherInvokeActivity::Split(__int64 a1, _QWORD *a2)
{
  RTL_SRWLOCK *v4; // rcx
  const struct wil::FailureInfo *v6; // rdx
  _BYTE v7[152]; // [rsp+20h] [rbp-98h] BYREF
  PSRWLOCK SRWLock; // [rsp+C0h] [rbp+8h] BYREF

  if ( **(_DWORD **)(a1 + 48) != 1 )
  {
    memset_0(v7, 0, 0x90uLL);
    wil::details::WilFailFast((wil::details *)v7, v6);
  }
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v4 = SRWLock;
  ++*(_DWORD *)(*(_QWORD *)(a1 + 48) + 72LL);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    a2,
    a1);
  *a2 = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
  return a2;
}
