/*
 * XREFs of ?v_SendConsolidated@WindowWrapper@@EEAAXW4ConsolidatedState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18024DD50
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapper::v_SendConsolidated(__int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 600) + 176LL))(*(_QWORD *)(a1 + 600));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      223LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
      (const char *)(unsigned int)v1);
}
