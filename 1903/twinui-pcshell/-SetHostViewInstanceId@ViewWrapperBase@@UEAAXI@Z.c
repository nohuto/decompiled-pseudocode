/*
 * XREFs of ?SetHostViewInstanceId@ViewWrapperBase@@UEAAXI@Z @ 0x180299F20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewWrapperBase::SetHostViewInstanceId(ViewWrapperBase *this, unsigned int a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 20) + 504LL) + 184LL))(
         *(_QWORD *)(*((_QWORD *)this + 20) + 504LL),
         *((_QWORD *)this + 23),
         a2);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x350,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v2);
}
