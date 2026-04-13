/*
 * XREFs of ??0LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@AEBV0123@@Z @ 0x1800A057C
 * Callers:
 *     ?ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z @ 0x1800A1944 (-ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z.c)
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800A2280 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800243F4 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??4?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800A4828 (--4-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_T.c)
 *     memset_0 @ 0x1800CB2A9 (memset_0.c)
 */

CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *__fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::LayoutResolver(
        CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *this,
        const struct CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *a2)
{
  char *v3; // rcx

  *(_QWORD *)this = &wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v3 = (char *)this + 8;
  *((_QWORD *)v3 + 1) = this;
  *(_QWORD *)v3 = 0LL;
  *((_QWORD *)v3 + 2) = 0LL;
  *((_DWORD *)v3 + 6) = 0;
  *((_QWORD *)v3 + 4) = 0LL;
  wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v3);
  *((_QWORD *)this + 6) = (char *)this + 56;
  *((_DWORD *)this + 14) = 0;
  *((_BYTE *)this + 60) = 0;
  *((_BYTE *)this + 120) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 16) = 1LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  memset_0((char *)this + 136, 0, 0x90uLL);
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
    this,
    a2);
  *(_QWORD *)this = &CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::`vftable';
  return this;
}
