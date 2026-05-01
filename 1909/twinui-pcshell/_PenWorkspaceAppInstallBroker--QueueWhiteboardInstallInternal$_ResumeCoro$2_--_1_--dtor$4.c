/*
 * XREFs of _PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_ResumeCoro$2_::_1_::dtor$4 @ 0x1800A3B90
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18011E570 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal__ResumeCoro_2_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 1208) = *(_QWORD *)(a2 + 1248) + 48LL;
  Microsoft::WRL::WeakRef::~WeakRef(*(Microsoft::WRL::WeakRef **)(a2 + 1208));
}
