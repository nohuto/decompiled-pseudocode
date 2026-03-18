/*
 * XREFs of ?WorkerThreadMain@CScheduler@CComputeScribbleRenderer@@AEAAKXZ @ 0x18022FF0C
 * Callers:
 *     _lambda_ad5752422a00f3d87d96ef70e6320478_::_lambda_invoker_cdecl_ @ 0x18022E7E0 (_lambda_ad5752422a00f3d87d96ef70e6320478_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015BA40 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x18018ACEC (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x18022F7B4 (-Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z.c)
 *     ?ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ @ 0x18022F7E4 (-ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CScheduler::WorkerThreadMain(CComputeScribbleRenderer::CScheduler *this)
{
  DWORD v2; // eax
  __int64 v3; // r8
  const char *v4; // r9
  int v5; // eax
  HANDLE Handles; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Handles = (HANDLE)*((_QWORD *)this + 8);
  v8 = *((_QWORD *)this + 7);
  while ( 1 )
  {
    v2 = WaitForMultipleObjects(2u, &Handles, 0, 0xFFFFFFFF);
    if ( v2 )
      break;
    v5 = CComputeScribbleRenderer::CScheduler::ProcessScribbleFrame(this);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x185,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
        (const char *)(unsigned int)v5);
  }
  if ( v2 == 1 )
    return 0LL;
  if ( v2 != -1 )
  {
    wil::details::in1diag3::FailFast_UnexpectedMsg(
      retaddr,
      (void *)0x191,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
      "Unexpected result from WaitForMultipleObjects",
      (const char *)Handles,
      v8);
    __debugbreak();
  }
  wil::details::in1diag3::Log_GetLastError(retaddr, (void *)0x18C, v3, v4);
  return 1LL;
}
