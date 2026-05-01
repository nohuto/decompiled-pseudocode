/*
 * XREFs of ?reset@?$shared_object@V?$ActivityData@VShellScreenClippingLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1803E2FE8
 * Callers:
 *     ??1?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803E1178 (--1-$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?Destroy@?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803E18F4 (-Destroy@-$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ActivityData@VShellScreenClippingLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803E11B4 (--1-$ActivityData@VShellScreenClippingLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activi.c)
 */

void __fastcall wil::details::shared_object<wil::ActivityBase<ShellScreenClippingLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ShellScreenClippingLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rdi

  v2 = *a1;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *a1;
      if ( *a1 )
      {
        wil::ActivityBase<ShellScreenClippingLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ShellScreenClippingLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ShellScreenClippingLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)(v3 + 2));
        operator delete((void *)v3, (const struct std::nothrow_t *)0x100);
      }
    }
    *a1 = 0LL;
  }
}
