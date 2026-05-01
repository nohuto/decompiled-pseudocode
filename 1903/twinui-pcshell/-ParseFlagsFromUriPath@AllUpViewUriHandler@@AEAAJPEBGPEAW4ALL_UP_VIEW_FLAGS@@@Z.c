/*
 * XREFs of ?ParseFlagsFromUriPath@AllUpViewUriHandler@@AEAAJPEBGPEAW4ALL_UP_VIEW_FLAGS@@@Z @ 0x180342888
 * Callers:
 *     ?Execute@AllUpViewUriHandler@@UEAAJXZ @ 0x1803426E0 (-Execute@AllUpViewUriHandler@@UEAAJXZ.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800402F0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801AB54C (--$GetActivationFactory@V-$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@.c)
 */

__int64 __fastcall AllUpViewUriHandler::ParseFlagsFromUriPath(
        AllUpViewUriHandler *this,
        const unsigned __int16 *a2,
        enum ALL_UP_VIEW_FLAGS *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  HSTRING_HEADER *v7; // rax
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rdx
  const WCHAR *StringRawBuffer; // rax
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rbx
  const WCHAR *v17; // rax
  HSTRING v19; // [rsp+30h] [rbp-19h] BYREF
  HSTRING string; // [rsp+38h] [rbp-11h] BYREF
  __int64 v21; // [rsp+40h] [rbp-9h] BYREF
  __int64 v22; // [rsp+48h] [rbp-1h] BYREF
  __int64 v23; // [rsp+50h] [rbp+7h] BYREF
  const WCHAR *v24; // [rsp+58h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp+17h] BYREF
  __int64 v26; // [rsp+78h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v24 = a2;
  *(_DWORD *)a3 = 0;
  v23 = 0LL;
  v26 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Windows.Foundation.Uri", 0x17u, 0x16u);
  v4 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>>(
         v26,
         &v23);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = v23;
    v21 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v24);
    v8 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v6 + 48LL))(
           v6,
           v7[1].Reserved.Reserved1,
           &v21);
    v5 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x51,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
        (const char *)(unsigned int)v8);
LABEL_18:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      goto LABEL_19;
    }
    v9 = v21;
    WindowsDeleteString(0LL);
    string = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v9 + 136LL))(v9, &string);
    v5 = v10;
    if ( v10 >= 0 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, -1, L"ms-taskswitcher", -1, 1) == 2 )
      {
        v14 = v21;
        v22 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
        v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 120LL))(v14, &v22);
        v5 = v15;
        if ( v15 >= 0 )
        {
          v16 = v22;
          WindowsDeleteString(0LL);
          v19 = 0LL;
          v26 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"invoketo", 9u, 8u);
          if ( (*(int (__fastcall **)(__int64, __int64, HSTRING *))(*(_QWORD *)v16 + 48LL))(v16, v26, &v19) >= 0 )
          {
            v17 = WindowsGetStringRawBuffer(v19, 0LL);
            if ( CompareStringOrdinal(v17, -1, L"timeline", -1, 1) == 2 )
              *(_DWORD *)a3 |= 2u;
          }
          v5 = 0;
          WindowsDeleteString(v19);
          v19 = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x58,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
            (const char *)(unsigned int)v15);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
        goto LABEL_17;
      }
      v5 = -2147418113;
      v12 = 85LL;
      v11 = 2147549183LL;
    }
    else
    {
      v11 = (unsigned int)v10;
      v12 = 84LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
      (const char *)v11);
LABEL_17:
    WindowsDeleteString(string);
    string = 0LL;
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4E,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
    (const char *)(unsigned int)v4);
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  return v5;
}
