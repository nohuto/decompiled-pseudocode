/*
 * XREFs of wistd::__function::__func__lambda_21c17d1e809434d8597355a56fe341ef__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x1801BBAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_2ef23751fae1fd82b821de69b649bf12___ @ 0x1801BA8BC (CreationThreadDispatcher--RunAsync__lambda_2ef23751fae1fd82b821de69b649bf12___.c)
 */

void __fastcall wistd::__function::__func__lambda_21c17d1e809434d8597355a56fe341ef__void___cdecl_enum_wil::RegistryChangeKind__::operator()(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CreationThreadDispatcher::RunAsync__lambda_2ef23751fae1fd82b821de69b649bf12___(
         *(_QWORD *)(*(_QWORD *)(a1 + 8) + 296LL),
         *(_QWORD *)(a1 + 8));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xE1,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
}
