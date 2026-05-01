/*
 * XREFs of wistd::__function::__func__lambda_6b6deabaca9785ec7fd412eb7c9bd6bf__void___cdecl(int_const_&)_::operator() @ 0x1801BBAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_5b1b722630a514c3e73ae779736a2814___ @ 0x1801BA96C (CreationThreadDispatcher--RunAsync__lambda_5b1b722630a514c3e73ae779736a2814___.c)
 */

void __fastcall wistd::__function::__func__lambda_6b6deabaca9785ec7fd412eb7c9bd6bf__void___cdecl_int_const____::operator()(
        __int64 a1,
        int *a2)
{
  int v2; // eax
  int v3; // eax
  int v4[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *a2;
  *(_QWORD *)v4 = *(_QWORD *)(a1 + 8);
  v4[2] = v2;
  v3 = CreationThreadDispatcher::RunAsync__lambda_5b1b722630a514c3e73ae779736a2814___(
         *(_QWORD *)(*(_QWORD *)v4 + 296LL),
         (__int128 *)v4);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x18C,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
}
