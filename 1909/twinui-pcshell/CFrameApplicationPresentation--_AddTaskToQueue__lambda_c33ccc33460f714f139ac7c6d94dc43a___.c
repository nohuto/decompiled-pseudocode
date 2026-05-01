/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_c33ccc33460f714f139ac7c6d94dc43a___ @ 0x18016F2AC
 * Callers:
 *     ?UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ @ 0x1801713D0 (-UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_be511633a1c3fc9433c6a1507838a6b9___ @ 0x18016EF0C (Windows--Internal--ComTaskPool--QueueTask__lambda_be511633a1c3fc9433c6a1507838a6b9___.c)
 *     _lambda_be511633a1c3fc9433c6a1507838a6b9_::_lambda_be511633a1c3fc9433c6a1507838a6b9_ @ 0x18016F594 (_lambda_be511633a1c3fc9433c6a1507838a6b9_--_lambda_be511633a1c3fc9433c6a1507838a6b9_.c)
 *     ??1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x18016F804 (--1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_c33ccc33460f714f139ac7c6d94dc43a___(
        unsigned int *a1,
        __int64 *a2)
{
  int v4; // edi
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9[2]; // [rsp+20h] [rbp-188h] BYREF
  __int64 v10[2]; // [rsp+30h] [rbp-178h] BYREF
  __int64 v11; // [rsp+40h] [rbp-168h] BYREF
  _BYTE v12[320]; // [rsp+50h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  if ( a1[14] == 2 )
  {
    v4 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x823,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    v9[0] = (__int64)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
    v5 = (_QWORD *)lambda_be511633a1c3fc9433c6a1507838a6b9_::_lambda_be511633a1c3fc9433c6a1507838a6b9_(v10, v9, a1, a2);
    v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_be511633a1c3fc9433c6a1507838a6b9___(v7, v6, a1[12], v5);
    CFramePresentationTelemetry::UnpresentWindow::~UnpresentWindow((CFramePresentationTelemetry::UnpresentWindow *)v12);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
    if ( v4 >= 0 )
      ++a1[53];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
  }
  CFramePresentationTelemetry::UnpresentWindow::~UnpresentWindow((CFramePresentationTelemetry::UnpresentWindow *)(a2 + 2));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return (unsigned int)v4;
}
