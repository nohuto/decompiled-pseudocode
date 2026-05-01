/*
 * XREFs of wil::details::ScopeExitFn__lambda_306a7db0a684a24cb5ae62124f6fc92c___::_ScopeExitFn__lambda_306a7db0a684a24cb5ae62124f6fc92c___ @ 0x18009CA30
 * Callers:
 *     __lambda_a34f77da1c118d252c6ac03565c5dcbb_::operator()_::_1_::dtor$1 @ 0x18009D42F (__lambda_a34f77da1c118d252c6ac03565c5dcbb_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x18031B0AC (-ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_306a7db0a684a24cb5ae62124f6fc92c___::_ScopeExitFn__lambda_306a7db0a684a24cb5ae62124f6fc92c___(
        _BYTE *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(***(_QWORD ***)a1 + 392LL))(**(_QWORD **)a1, 0LL);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x921,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v1);
    TouchKeyboardExperienceTelemetryLogger::ViewCreationTaskFailed();
  }
}
