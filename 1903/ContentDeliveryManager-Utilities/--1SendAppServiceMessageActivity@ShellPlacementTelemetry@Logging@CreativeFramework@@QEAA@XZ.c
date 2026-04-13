/*
 * XREFs of ??1SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x180026078
 * Callers:
 *     _ContentManagement::ContentManagementService::SendAppServiceMessage_::_1_::dtor$2 @ 0x1800CD267 (_ContentManagement--ContentManagementService--SendAppServiceMessage_--_1_--dtor$2.c)
 * Callees:
 *     ??1?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026284 (--1-$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorT_ea_180026284.c)
 *     ?Destroy@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002DFB4 (-Destroy@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04$.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::SendAppServiceMessageActivity::~SendAppServiceMessageActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::SendAppServiceMessageActivity *this)
{
  volatile signed __int32 *v2; // rcx
  char *v3; // rdi

  *(_QWORD *)this = &CreativeFramework::Logging::ShellPlacementTelemetry::SendAppServiceMessageActivity::`vftable';
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  v2 = (volatile signed __int32 *)*((_QWORD *)this + 38);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = (char *)*((_QWORD *)this + 38);
      if ( v3 )
      {
        wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>(v3 + 8);
        operator delete(v3);
      }
    }
    *((_QWORD *)this + 38) = 0LL;
  }
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)this + 56);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((CreativeFramework::Logging::ShellPlacementTelemetry::SendAppServiceMessageActivity *)((char *)this + 8));
}
