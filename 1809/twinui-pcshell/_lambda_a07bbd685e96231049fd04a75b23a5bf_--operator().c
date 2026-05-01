/*
 * XREFs of _lambda_a07bbd685e96231049fd04a75b23a5bf_::operator() @ 0x1802E2F38
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_a07bbd685e96231049fd04a75b23a5bf___::RunTask @ 0x1802E32B0 (CMultitaskingViewTaskCallback__lambda_a07bbd685e96231049fd04a75b23a5bf___--RunTask.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_a07bbd685e96231049fd04a75b23a5bf_::operator()(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  if ( (*(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL))(
         a2,
         8LL,
         &GUID_0cbeff0b_7751_4b77_8907_debf5cc3df7a,
         &v8) >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 40LL))(v8);
LABEL_6:
    v5 = 0;
    goto LABEL_7;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL))(
         a2,
         8LL,
         &GUID_0cbeff0b_7751_4b77_8907_debf5cc3df7a,
         &v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 48LL))(v8, *a1);
    if ( v5 >= 0 )
      goto LABEL_6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewservice.cpp",
      (const char *)(unsigned int)v4);
  }
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return (unsigned int)v5;
}
