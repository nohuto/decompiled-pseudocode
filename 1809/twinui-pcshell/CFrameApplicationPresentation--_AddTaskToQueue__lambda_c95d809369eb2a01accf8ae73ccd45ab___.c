/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_c95d809369eb2a01accf8ae73ccd45ab___ @ 0x180126AC8
 * Callers:
 *     ?UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ @ 0x180128A80 (-UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5ce05ca81319de189dd08790f978f8a8___ @ 0x1801264D8 (Windows--Internal--ComTaskPool--QueueTask__lambda_5ce05ca81319de189dd08790f978f8a8___.c)
 *     _lambda_5ce05ca81319de189dd08790f978f8a8_::_lambda_5ce05ca81319de189dd08790f978f8a8_ @ 0x180126C60 (_lambda_5ce05ca81319de189dd08790f978f8a8_--_lambda_5ce05ca81319de189dd08790f978f8a8_.c)
 *     ??1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x180127010 (--1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_c95d809369eb2a01accf8ae73ccd45ab___(
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
      (void *)0x75E,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    v9[0] = (__int64)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
    v5 = (_QWORD *)lambda_5ce05ca81319de189dd08790f978f8a8_::_lambda_5ce05ca81319de189dd08790f978f8a8_(v10, v9, a1, a2);
    v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_5ce05ca81319de189dd08790f978f8a8___(v7, v6, a1[12], v5);
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
