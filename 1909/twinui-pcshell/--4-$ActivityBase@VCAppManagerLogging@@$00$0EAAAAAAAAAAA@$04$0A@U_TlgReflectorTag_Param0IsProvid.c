/*
 * XREFs of ??4?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800704B0
 * Callers:
 *     ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x1800378D4 (-_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180037490 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??4?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV012@$$QEAV012@@Z @ 0x180070574 (--4-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18015AB14 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_18015AB14.c)
 */

__int64 __fastcall wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // r14
  volatile signed __int32 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  wil::details::ThreadFailureCallbackHolder *v9; // rcx
  int v10; // eax
  bool v11; // zf
  char *v13; // rsi

  v2 = a2 + 56;
  v4 = a1 + 56;
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::operator=(
    a1 + 56,
    a2 + 56);
  v6 = *(volatile signed __int32 **)(a1 + 304);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
    {
      v13 = *(char **)(a1 + 304);
      if ( v13 )
      {
        wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v13 + 8);
        operator delete(v13, (const struct std::nothrow_t *)0x100);
      }
    }
    *(_QWORD *)(a1 + 304) = 0LL;
  }
  *(_QWORD *)(a1 + 304) = *(_QWORD *)(a2 + 304);
  *(_QWORD *)(a2 + 304) = 0LL;
  v7 = *(_QWORD *)(a1 + 304);
  v8 = v7 + 8;
  if ( !v7 )
    v8 = v4;
  *(_QWORD *)(a1 + 48) = v8;
  *(_QWORD *)(a1 + 40) = v8 + 40;
  v9 = (wil::details::ThreadFailureCallbackHolder *)(a1 + 8);
  v10 = *(_DWORD *)(a1 + 32);
  if ( *(_DWORD *)(a2 + 32) )
  {
    if ( !v10 )
      wil::details::ThreadFailureCallbackHolder::StartWatching(v9);
  }
  else if ( v10 )
  {
    wil::details::ThreadFailureCallbackHolder::StopWatching(v9);
  }
  v11 = *(_DWORD *)(a2 + 32) == 0;
  *(_QWORD *)(a2 + 48) = v2;
  if ( !v11 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 8));
  return a1;
}
