/*
 * XREFs of _anonymous_namespace_::ScreenClipOpenUrlParser::ParseUrlAsString @ 0x1801D024C
 * Callers:
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::ScreenClipOpenUrlParser @ 0x1801CAE24 (_anonymous_namespace_--ScreenClipOpenUrlParser--ScreenClipOpenUrlParser.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::CreateUri @ 0x1801CB9A0 (_anonymous_namespace_--CreateUri.c)
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::ParseUriDecoder @ 0x1801CFFF0 (_anonymous_namespace_--ScreenClipOpenUrlParser--ParseUriDecoder.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall anonymous_namespace_::ScreenClipOpenUrlParser::ParseUrlAsString(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  v3 = anonymous_namespace_::CreateUri(a2, &v12);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v11 = 0LL;
    v5 = v12;
    v6 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v12 + 120LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    v7 = v6(v5, &v11);
    v4 = v7;
    if ( v7 >= 0 )
    {
      v7 = anonymous_namespace_::ScreenClipOpenUrlParser::ParseUriDecoder(a1, &v11);
      v4 = v7;
      if ( v7 >= 0 )
      {
        v4 = 0;
        goto LABEL_9;
      }
      v8 = 1695LL;
    }
    else
    {
      v8 = 1693LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_9:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x69A,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  return v4;
}
