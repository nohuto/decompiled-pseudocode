/*
 * XREFs of ??4?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800A0964
 * Callers:
 *     ??0LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@AEBV0123@@Z @ 0x18009C7E4 (--0LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@AEBV0123@@Z.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180023C4C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$?0V?$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@RefAndObject@?$shared_object@V?$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAA@$$QEAV?$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@3@@Z @ 0x180069F70 (--$-0V-$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgRefl.c)
 *     ??1?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009CA48 (--1-$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorT_ea_18009CA48.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C6CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::operator=(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rsi
  __int64 *v5; // rcx
  __int64 v6; // rax
  volatile signed __int32 *v7; // rcx
  void *v8; // rsi
  volatile signed __int32 *v9; // rax
  void *v10; // rax
  __int64 v11; // rbp
  volatile signed __int32 *v12; // rcx
  void *v13; // r14
  volatile signed __int32 *v14; // rcx
  void *v15; // rsi
  volatile signed __int32 *v16; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 32) )
  {
    v4 = a1 + 8;
    if ( *(_DWORD *)(a1 + 32) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (__int64)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL);
    *(_DWORD *)(v4 + 24) = 0;
    v5 = *(__int64 **)v4;
    while ( 1 )
    {
      v6 = *v5;
      if ( !*v5 )
        break;
      if ( v6 == v4 )
      {
        *v5 = *(_QWORD *)(v4 + 16);
        break;
      }
      v5 = (__int64 *)(v6 + 16);
      *(_QWORD *)v4 = v6 + 16;
    }
    *(_QWORD *)v4 = 0LL;
  }
  if ( a2[38] )
  {
    *(_QWORD *)(a1 + 48) = a2[6];
    v7 = *(volatile signed __int32 **)(a1 + 304);
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7, 0xFFFFFFFF) == 1 )
      {
        v8 = *(void **)(a1 + 304);
        if ( v8 )
        {
          wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v8 + 8);
          operator delete(v8);
        }
      }
      *(_QWORD *)(a1 + 304) = 0LL;
    }
    v9 = (volatile signed __int32 *)a2[38];
    *(_QWORD *)(a1 + 304) = v9;
    if ( v9 )
      _InterlockedIncrement(v9);
  }
  else
  {
    v10 = operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v10 )
      v11 = wil::details::shared_object<wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::RefAndObject::RefAndObject(
              (__int64)v10,
              (__int64)(a2 + 7));
    else
      v11 = 0LL;
    if ( v11 )
    {
      v12 = *(volatile signed __int32 **)(a1 + 304);
      if ( v12 )
      {
        if ( _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 )
        {
          v13 = *(void **)(a1 + 304);
          if ( v13 )
          {
            wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v13 + 8);
            operator delete(v13);
          }
        }
        *(_QWORD *)(a1 + 304) = 0LL;
      }
      *(_QWORD *)(a1 + 304) = v11;
      *(_QWORD *)(a1 + 48) = (v11 + 8) & -(__int64)(v11 != 0);
      v14 = (volatile signed __int32 *)a2[38];
      if ( v14 )
      {
        if ( _InterlockedExchangeAdd(v14, 0xFFFFFFFF) == 1 )
        {
          v15 = (void *)a2[38];
          if ( v15 )
          {
            wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v15 + 8);
            operator delete(v15);
          }
        }
        a2[38] = 0LL;
      }
      v16 = *(volatile signed __int32 **)(a1 + 304);
      a2[38] = v16;
      if ( v16 )
        _InterlockedIncrement(v16);
      a2[6] = *(_QWORD *)(a1 + 48);
      a2[5] = *(_QWORD *)(a1 + 48) + 40LL;
    }
  }
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48) + 40LL;
  return a1;
}
