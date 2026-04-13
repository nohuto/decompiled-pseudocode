/*
 * XREFs of ??1HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAA@XZ @ 0x1800457C8
 * Callers:
 *     _lambda_ff7cfae8cddf8b4979caf74bf72ddb07_::operator() @ 0x180047650 (_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_--operator().c)
 *     __lambda_ff7cfae8cddf8b4979caf74bf72ddb07_::operator()_::_1_::dtor$2 @ 0x1800CEB0D (__lambda_ff7cfae8cddf8b4979caf74bf72ddb07_--operator()_--_1_--dtor$2.c)
 * Callees:
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180002E60 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180030790 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     ?StopActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@MEAAXXZ @ 0x180045360 (-StopActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@Mobi.c)
 *     ??1?$ActivityData@VMobilityExperienceLogging@Telemetry@MobilityExperience@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VMobilityExperienceLogging@Telemetry@MobilityExperience@@$00$0IAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180046004 (--1-$ActivityData@VMobilityExperienceLogging@Telemetry@MobilityExperience@@U_TlgReflectorTag_Par.c)
 *     memset_0 @ 0x1800CB119 (memset_0.c)
 */

void __fastcall MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::~HandleResumableTaskNotificationActivity(
        MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *this)
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
  *(_QWORD *)this = &MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::`vftable';
  v3 = 1;
  if ( v1 )
    goto LABEL_12;
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
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
          wil::ActivityBase<MobilityExperience::Telemetry::MobilityExperienceLogging,1,140737488355328,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<MobilityExperience::Telemetry::MobilityExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<MobilityExperience::Telemetry::MobilityExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(v5 + 8);
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
      MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::StopActivity(this);
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
        wil::ActivityBase<MobilityExperience::Telemetry::MobilityExperienceLogging,1,140737488355328,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<MobilityExperience::Telemetry::MobilityExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<MobilityExperience::Telemetry::MobilityExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(v10 + 8);
        operator delete(v10);
      }
    }
    *((_QWORD *)this + 38) = 0LL;
  }
  wil::ActivityBase<MobilityExperience::Telemetry::MobilityExperienceLogging,1,140737488355328,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<MobilityExperience::Telemetry::MobilityExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<MobilityExperience::Telemetry::MobilityExperienceLogging,_TlgReflectorTag_Param0IsProviderType>((char *)this + 56);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *)((char *)this + 8));
}
