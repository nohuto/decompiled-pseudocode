/*
 * XREFs of _PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_ResumeCoro$2_::_1_::catch$126 @ 0x1800A3BEC
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180027380 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x180088EB0 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal__ResumeCoro_2_::_1_::catch_126(
        __int64 a1,
        __int64 a2)
{
  struct IServiceProvider *v3; // rdx
  struct IProfferService *v4; // r8

  *(_QWORD *)(a2 + 1024) = IApplicationViewChangeListener::IApplicationViewChangeListener(*(IApplicationViewChangeListener **)(a2 + 1248));
  winrt::immersive_shell_component::publish_services(*(winrt::immersive_shell_component **)(a2 + 1024), v3, v4);
  return &loc_1800A3845;
}
