/*
 * XREFs of _lambda_67538760065010fe4b5675fda0abb48b_::operator() @ 0x180343094
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_67538760065010fe4b5675fda0abb48b___::RunTask @ 0x180343490 (CMultitaskingViewTaskCallback__lambda_67538760065010fe4b5675fda0abb48b___--RunTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_67538760065010fe4b5675fda0abb48b_::operator()(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  if ( (*(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL))(
         a2,
         2LL,
         &GUID_389221b7_bf28_4d25_9501_b4491d822be1,
         &v8) >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8);
LABEL_6:
    v5 = 0;
    goto LABEL_7;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL))(
         a2,
         2LL,
         &GUID_389221b7_bf28_4d25_9501_b4491d822be1,
         &v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v8 + 48LL))(
           v8,
           *(_QWORD *)a1,
           *(_QWORD *)(a1 + 8),
           *(unsigned int *)(a1 + 16));
    if ( v5 >= 0 )
      goto LABEL_6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewservice.cpp",
      (const char *)(unsigned int)v4);
  }
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return (unsigned int)v5;
}
