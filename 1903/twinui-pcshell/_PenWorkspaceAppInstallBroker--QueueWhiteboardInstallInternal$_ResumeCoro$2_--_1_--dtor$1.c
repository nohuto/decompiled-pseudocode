/*
 * XREFs of _PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_ResumeCoro$2_::_1_::dtor$1 @ 0x180096916
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1801DE414 (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal__ResumeCoro_2_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 1184) = *(_QWORD *)(a2 + 1248) + 24LL;
  winrt::hstring::~hstring(*(winrt::hstring **)(a2 + 1184));
}
