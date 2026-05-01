/*
 * XREFs of _lambda_60f201756a49859df195cc613aef4204_::operator() @ 0x180240694
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_60f201756a49859df195cc613aef4204___::Run @ 0x180243620 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_60f201756a49859df195cc613aef4204___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$?0$0DM@@StringReference@Internal@Windows@@QEAA@AEAY0DM@$$CBG@Z @ 0x18023DCFC (--$-0$0DM@@StringReference@Internal@Windows@@QEAA@AEAY0DM@$$CBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_60f201756a49859df195cc613aef4204_::operator()(HWND *a1)
{
  DWORD WindowThreadProcessId; // edi
  const unsigned __int16 (*v2)[60]; // rdx
  HSTRING v3; // rbx
  int ActivationFactory; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v10; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11; // [rsp+38h] [rbp-48h] BYREF
  DWORD dwProcessId; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v13[4]; // [rsp+44h] [rbp-3Ch] BYREF
  __int64 v14; // [rsp+48h] [rbp-38h]
  HSTRING string; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v14 = -2LL;
  WindowThreadProcessId = GetWindowThreadProcessId(*a1, &dwProcessId);
  v11 = 0LL;
  v3 = *Windows::Internal::StringReference::StringReference(&string, v2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  ActivationFactory = RoGetActivationFactory(v3, &GUID_365b4229_bffa_4446_8dc8_a293bebbe536, &v11);
  v5 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v10 = 0LL;
    v6 = v11;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v6 + 48LL))(
           v6,
           dwProcessId,
           WindowThreadProcessId,
           &v10);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v10 + 48LL))(v10, v13);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v5 = 0;
        goto LABEL_9;
      }
      v8 = 2220LL;
    }
    else
    {
      v8 = 2217LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v7);
LABEL_9:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8A3,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return v5;
}
