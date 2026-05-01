/*
 * XREFs of _anonymous_namespace_::ScreenClipOpenUrlParser::ParseUriDecoder @ 0x180181150
 * Callers:
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::ParseUrlAsString @ 0x180181394 (_anonymous_namespace_--ScreenClipOpenUrlParser--ParseUrlAsString.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::HandleDecoderEntry @ 0x18017E36C (_anonymous_namespace_--ScreenClipOpenUrlParser--HandleDecoderEntry.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall anonymous_namespace_::ScreenClipOpenUrlParser::ParseUriDecoder(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  __int64 v15; // rdx
  __int64 v16; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v19; // [rsp+78h] [rbp+38h] BYREF
  HSTRING string; // [rsp+80h] [rbp+40h] BYREF
  HSTRING v21; // [rsp+88h] [rbp+48h] BYREF

  v17[1] = -2LL;
  v17[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
  v4 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a2)(
         *a2,
         &GUID_b1f00d3b_1f06_5117_93ea_2a0d79116701,
         v17);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1543LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_13;
  }
  v19 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v17[0] + 56LL))(v17[0], &v19);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1546LL;
    goto LABEL_5;
  }
  v7 = 0;
  if ( v19 )
  {
    while ( 1 )
    {
      v16 = 0LL;
      v8 = v17[0];
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, v7, &v16);
      v5 = v9;
      if ( v9 < 0 )
        break;
      v21 = 0LL;
      v10 = v16;
      WindowsDeleteString(0LL);
      v21 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v10 + 48LL))(v10, &v21);
      v5 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x612,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
          (const char *)(unsigned int)v11);
        goto LABEL_18;
      }
      string = 0LL;
      v12 = v16;
      WindowsDeleteString(0LL);
      string = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v12 + 56LL))(v12, &string);
      v5 = v13;
      if ( v13 < 0 )
      {
        v15 = 1557LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
          (const char *)(unsigned int)v13);
        WindowsDeleteString(string);
        string = 0LL;
LABEL_18:
        WindowsDeleteString(v21);
        v21 = 0LL;
        goto LABEL_20;
      }
      v13 = anonymous_namespace_::ScreenClipOpenUrlParser::HandleDecoderEntry(
              a1,
              (Microsoft::WRL::Wrappers::Details **)&v21,
              (Microsoft::WRL::Wrappers::Details **)&string);
      v5 = v13;
      if ( v13 < 0 )
      {
        v15 = 1559LL;
        goto LABEL_16;
      }
      WindowsDeleteString(string);
      string = 0LL;
      WindowsDeleteString(v21);
      v21 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      if ( ++v7 >= v19 )
        goto LABEL_12;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60F,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
LABEL_20:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  }
  else
  {
LABEL_12:
    v5 = 0;
  }
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
  return v5;
}
