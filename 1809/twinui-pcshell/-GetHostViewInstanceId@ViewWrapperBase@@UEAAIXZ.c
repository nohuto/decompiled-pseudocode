/*
 * XREFs of ?GetHostViewInstanceId@ViewWrapperBase@@UEAAIXZ @ 0x180241CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewWrapperBase::GetHostViewInstanceId(ViewWrapperBase *this)
{
  __int64 v1; // rax
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 20);
  v5 = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**(_QWORD **)(v1 + 520) + 192LL))(
         *(_QWORD *)(v1 + 520),
         *((_QWORD *)this + 23),
         &v5);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      857LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v2);
  return v5;
}
