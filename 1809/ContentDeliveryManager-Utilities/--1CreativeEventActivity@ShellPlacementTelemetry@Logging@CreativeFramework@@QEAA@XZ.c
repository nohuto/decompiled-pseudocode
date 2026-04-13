/*
 * XREFs of ??1CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x1800250A8
 * Callers:
 *     _ContentManagement::ContentManagementService::ProcessCreativeEvent_::_1_::dtor$0 @ 0x1800C906E (_ContentManagement--ContentManagementService--ProcessCreativeEvent_--_1_--dtor$0.c)
 * Callees:
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180002F40 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ??1?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180024BCC (--1-$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsPr.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002FD40 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?ReportStopActivity@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18002FDE4 (-ReportStopActivity@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U.c)
 *     memset_0 @ 0x1800C71FD (memset_0.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::~CreativeEventActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *this)
{
  bool v1; // zf
  char v3; // si
  volatile signed __int32 *v4; // rcx
  void *v5; // rdi
  _DWORD *v6; // rcx
  int v7; // eax
  int v8; // r8d
  volatile signed __int32 *v9; // rcx
  void *v10; // rdi
  const struct wil::FailureInfo *v11; // rdx
  _BYTE v12[144]; // [rsp+20h] [rbp-98h] BYREF
  PSRWLOCK SRWLock; // [rsp+C0h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 38) == 0LL;
  *(_QWORD *)this = &CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::`vftable';
  v3 = 1;
  if ( v1 )
    goto LABEL_12;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    this,
    &SRWLock);
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 38);
  if ( !v4 || *v4 != 1 )
  {
    v3 = 0;
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd(v4, 0xFFFFFFFF) == 1 )
      {
        v5 = (void *)*((_QWORD *)this + 38);
        if ( v5 )
        {
          wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v5 + 8);
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
        memset_0(v12, 0, sizeof(v12));
        wil::details::WilFailFast((wil::details *)v12, v11);
      }
      if ( (int)v6[19] >= 0 )
        v6[19] = v7;
      v6[18] = v8 - 1;
      wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(this);
    }
  }
  v9 = (volatile signed __int32 *)*((_QWORD *)this + 38);
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9, 0xFFFFFFFF) == 1 )
    {
      v10 = (void *)*((_QWORD *)this + 38);
      if ( v10 )
      {
        wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v10 + 8);
        operator delete(v10);
      }
    }
    *((_QWORD *)this + 38) = 0LL;
  }
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)this + 56);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *)((char *)this + 8));
}
