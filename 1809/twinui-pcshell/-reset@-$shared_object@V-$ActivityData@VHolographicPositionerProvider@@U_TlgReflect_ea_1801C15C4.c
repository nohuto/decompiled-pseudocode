/*
 * XREFs of ?reset@?$shared_object@V?$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1801C15C4
 * Callers:
 *     ??1?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801BCBC0 (--1-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Destroy@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801BDA68 (-Destroy@-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsPro.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801BCBFC (--1-$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProvide_ea_1801BCBFC.c)
 */

void __fastcall wil::details::shared_object<wil::ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicPositionerProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(
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
        wil::ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicPositionerProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicPositionerProvider,_TlgReflectorTag_Param0IsProviderType>((__int64)(v3 + 2));
        operator delete((void *)v3, (const struct std::nothrow_t *)0x100);
      }
    }
    *a1 = 0LL;
  }
}
