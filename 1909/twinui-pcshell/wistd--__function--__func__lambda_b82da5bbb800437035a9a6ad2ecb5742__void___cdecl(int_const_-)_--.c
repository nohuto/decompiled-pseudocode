/*
 * XREFs of wistd::__function::__func__lambda_b82da5bbb800437035a9a6ad2ecb5742__void___cdecl(int_const_&)_::operator() @ 0x1801DAB60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_23fac776ba4fa664bf014b45da4dfe94___ @ 0x1801D9798 (CreationThreadDispatcher--RunAsync__lambda_23fac776ba4fa664bf014b45da4dfe94___.c)
 */

void __fastcall wistd::__function::__func__lambda_b82da5bbb800437035a9a6ad2ecb5742__void___cdecl_int_const____::operator()(
        __int64 a1,
        int *a2)
{
  int v2; // eax
  int v3; // eax
  int v4[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *a2;
  *(_QWORD *)v4 = *(_QWORD *)(a1 + 8);
  v4[2] = v2;
  v3 = CreationThreadDispatcher::RunAsync__lambda_23fac776ba4fa664bf014b45da4dfe94___(
         *(_QWORD *)(*(_QWORD *)v4 + 296LL),
         v4);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x181,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
}
