/*
 * XREFs of _lambda_3650c138a53d014ad04808369cac353b_::operator() @ 0x1802B5AF0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3650c138a53d014ad04808369cac353b___::Run @ 0x1802B8BE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3650c138a53d014ad04808369cac353b___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$?0$0DM@@StringReference@Internal@Windows@@QEAA@AEAY0DM@$$CBG@Z @ 0x1802B33BC (--$-0$0DM@@StringReference@Internal@Windows@@QEAA@AEAY0DM@$$CBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_3650c138a53d014ad04808369cac353b_::operator()(HWND *a1)
{
  DWORD WindowThreadProcessId; // esi
  const unsigned __int16 (*v2)[60]; // rdx
  HSTRING v3; // rbx
  int ActivationFactory; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, _QWORD, _QWORD, __int64 *); // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h] BYREF
  DWORD dwProcessId; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v14[4]; // [rsp+44h] [rbp-3Ch] BYREF
  __int64 v15; // [rsp+48h] [rbp-38h]
  HSTRING string; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v15 = -2LL;
  WindowThreadProcessId = GetWindowThreadProcessId(*a1, &dwProcessId);
  v12 = 0LL;
  v3 = *Windows::Internal::StringReference::StringReference(&string, v2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  ActivationFactory = RoGetActivationFactory(v3, &GUID_365b4229_bffa_4446_8dc8_a293bebbe536, &v12);
  v5 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v11 = 0LL;
    v6 = v12;
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v12 + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v8 = v7(v6, dwProcessId, WindowThreadProcessId, &v11);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v11 + 48LL))(v11, v14);
      v5 = v8;
      if ( v8 >= 0 )
      {
        v5 = 0;
        goto LABEL_9;
      }
      v9 = 2226LL;
    }
    else
    {
      v9 = 2223LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v8);
LABEL_9:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8A9,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  return v5;
}
