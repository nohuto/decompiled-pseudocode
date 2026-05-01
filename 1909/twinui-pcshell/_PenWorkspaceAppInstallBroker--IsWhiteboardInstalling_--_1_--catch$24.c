/*
 * XREFs of _PenWorkspaceAppInstallBroker::IsWhiteboardInstalling_::_1_::catch$24 @ 0x1800A23AE
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801361BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall PenWorkspaceAppInstallBroker::IsWhiteboardInstalling_::_1_::catch_24(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 144) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 136),
                            (void *)0x7B,
                            (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\appinstallbroker.cpp",
                            a4);
  return &loc_1800A22F8;
}
