/*
 * XREFs of ??1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x18009C690
 * Callers:
 *     ?ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z @ 0x18009DB58 (-ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z.c)
 *     ?NeedBinding@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA_NPEAUITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18009E054 (-NeedBinding@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA_NPEAUITargetedC.c)
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18009E47C (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18009F864 (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::ResolveLayoutBindings_::_1_::dtor$0 @ 0x1800CFEC5 (_CreativeFramework--TargetedContentLayoutHelpers--ResolveLayoutBindings_--_1_--dtor$0.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::NeedBinding_::_1_::dtor$0 @ 0x1800CFEFB (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--NeedBinding_--_1_--dtor$0.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ProcessLayoutBindings_::_1_::dtor$0 @ 0x1800CFFE7 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--ProcessLayoutBind_ea_1800CFFE7.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::dtor$0 @ 0x1800D042D (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveLayoutAnd_ea_1800D042D.c)
 * Callees:
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180002F40 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002FD40 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?StopActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ @ 0x18009C2A0 (-StopActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ.c)
 *     ??1?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009CA48 (--1-$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorT_ea_18009CA48.c)
 *     memset_0 @ 0x1800C71FD (memset_0.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::~LayoutResolver(
        CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *this)
{
  bool v1; // zf
  char v3; // si
  volatile signed __int32 *v4; // rcx
  char *v5; // rdi
  _DWORD *v6; // rcx
  int v7; // eax
  int v8; // edx
  volatile signed __int32 *v9; // rcx
  char *v10; // rdi
  const struct wil::FailureInfo *v11; // rdx
  PSRWLOCK SRWLock; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v13[144]; // [rsp+30h] [rbp-98h] BYREF

  v1 = *((_QWORD *)this + 38) == 0LL;
  *(_QWORD *)this = &CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::`vftable';
  v3 = 1;
  if ( v1 )
    goto LABEL_12;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 38);
  if ( !v4 || *v4 != 1 )
  {
    v3 = 0;
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd(v4, 0xFFFFFFFF) == 1 )
      {
        v5 = (char *)*((_QWORD *)this + 38);
        if ( v5 )
        {
          wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>(v5 + 8);
          operator delete(v5);
        }
      }
      *((_QWORD *)this + 38) = 0LL;
    }
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v3 )
  {
LABEL_12:
    v6 = (_DWORD *)*((_QWORD *)this + 6);
    if ( *v6 == 1 )
    {
      v7 = -2147024322;
      v8 = v6[18];
      if ( (int)v6[21] < 0 )
        v7 = v6[21];
      if ( v8 < 1 )
      {
        memset_0(v13, 0, sizeof(v13));
        wil::details::WilFailFast((wil::details *)v13, v11);
      }
      if ( (int)v6[19] >= 0 )
        v6[19] = v7;
      v6[18] = v8 - 1;
      CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::StopActivity(this);
    }
  }
  v9 = (volatile signed __int32 *)*((_QWORD *)this + 38);
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9, 0xFFFFFFFF) == 1 )
    {
      v10 = (char *)*((_QWORD *)this + 38);
      if ( v10 )
      {
        wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>(v10 + 8);
        operator delete(v10);
      }
    }
    *((_QWORD *)this + 38) = 0LL;
  }
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)this + 56);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)((char *)this + 8));
}
