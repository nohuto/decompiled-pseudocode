/*
 * XREFs of _PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_ResumeCoro$2_::_1_::catch$126 @ 0x1800969FC
 * Callers:
 *     <none>
 * Callees:
 *     ??1_Ref_count_base@std@@UEAA@XZ @ 0x18001D190 (--1_Ref_count_base@std@@UEAA@XZ.c)
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x180086430 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal__ResumeCoro_2_::_1_::catch_126(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 1024) = IApplicationViewChangeListener::IApplicationViewChangeListener(*(IApplicationViewChangeListener **)(a2 + 1248));
  std::_Ref_count_base::~_Ref_count_base(*(std::_Ref_count_base **)(a2 + 1024));
  return &loc_180096655;
}
