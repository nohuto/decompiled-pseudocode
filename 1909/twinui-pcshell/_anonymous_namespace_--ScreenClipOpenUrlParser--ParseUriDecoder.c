/*
 * XREFs of _anonymous_namespace_::ScreenClipOpenUrlParser::ParseUriDecoder @ 0x1801CFFF0
 * Callers:
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::ParseUrlAsString @ 0x1801D024C (_anonymous_namespace_--ScreenClipOpenUrlParser--ParseUrlAsString.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::HandleDecoderEntry @ 0x1801CC95C (_anonymous_namespace_--ScreenClipOpenUrlParser--HandleDecoderEntry.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall anonymous_namespace_::ScreenClipOpenUrlParser::ParseUriDecoder(
        __int64 a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, __int64 *))
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned int v8; // esi
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64 *); // rdi
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, HSTRING *); // rdi
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, HSTRING *); // rdi
  int v17; // eax
  __int64 v19; // rdx
  __int64 v20; // [rsp+20h] [rbp-20h] BYREF
  __int64 v21[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v23; // [rsp+78h] [rbp+38h] BYREF
  HSTRING string; // [rsp+80h] [rbp+40h] BYREF
  HSTRING v25; // [rsp+88h] [rbp+48h] BYREF

  v21[1] = -2LL;
  v21[0] = 0LL;
  v3 = *a2;
  v4 = ***a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
  v5 = v4(v3, &GUID_b1f00d3b_1f06_5117_93ea_2a0d79116701, v21);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 1702LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_13;
  }
  v23 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21[0] + 56LL))(v21[0], &v23);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 1705LL;
    goto LABEL_5;
  }
  v8 = 0;
  if ( v23 )
  {
    while ( 1 )
    {
      v20 = 0LL;
      v9 = v21[0];
      v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v21[0] + 48LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      v11 = v10(v9, v8, &v20);
      v6 = v11;
      if ( v11 < 0 )
        break;
      v25 = 0LL;
      v12 = v20;
      v13 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v20 + 48LL);
      WindowsDeleteString(0LL);
      v25 = 0LL;
      v14 = v13(v12, &v25);
      v6 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6B1,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
          (const char *)(unsigned int)v14);
        goto LABEL_18;
      }
      string = 0LL;
      v15 = v20;
      v16 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v20 + 56LL);
      WindowsDeleteString(0LL);
      string = 0LL;
      v17 = v16(v15, &string);
      v6 = v17;
      if ( v17 < 0 )
      {
        v19 = 1716LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
          (const char *)(unsigned int)v17);
        WindowsDeleteString(string);
        string = 0LL;
LABEL_18:
        WindowsDeleteString(v25);
        v25 = 0LL;
        goto LABEL_20;
      }
      v17 = anonymous_namespace_::ScreenClipOpenUrlParser::HandleDecoderEntry(
              a1,
              (Microsoft::WRL::Wrappers::Details **)&v25,
              (Microsoft::WRL::Wrappers::Details **)&string);
      v6 = v17;
      if ( v17 < 0 )
      {
        v19 = 1718LL;
        goto LABEL_16;
      }
      WindowsDeleteString(string);
      string = 0LL;
      WindowsDeleteString(v25);
      v25 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      if ( ++v8 >= v23 )
        goto LABEL_12;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6AE,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
LABEL_20:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  }
  else
  {
LABEL_12:
    v6 = 0;
  }
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
  return v6;
}
