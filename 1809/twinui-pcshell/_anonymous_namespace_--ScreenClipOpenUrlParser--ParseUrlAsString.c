/*
 * XREFs of _anonymous_namespace_::ScreenClipOpenUrlParser::ParseUrlAsString @ 0x180181394
 * Callers:
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::ScreenClipOpenUrlParser @ 0x18017C7C4 (_anonymous_namespace_--ScreenClipOpenUrlParser--ScreenClipOpenUrlParser.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::CreateUri @ 0x18017D3E0 (_anonymous_namespace_--CreateUri.c)
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::ParseUriDecoder @ 0x180181150 (_anonymous_namespace_--ScreenClipOpenUrlParser--ParseUriDecoder.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall anonymous_namespace_::ScreenClipOpenUrlParser::ParseUrlAsString(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  v3 = anonymous_namespace_::CreateUri(a2, &v11);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v10 = 0LL;
    v5 = v11;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 120LL))(v5, &v10);
    v4 = v6;
    if ( v6 >= 0 )
    {
      v6 = anonymous_namespace_::ScreenClipOpenUrlParser::ParseUriDecoder(a1, &v10);
      v4 = v6;
      if ( v6 >= 0 )
      {
        v4 = 0;
        goto LABEL_9;
      }
      v7 = 1536LL;
    }
    else
    {
      v7 = 1534LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
LABEL_9:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5FB,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return v4;
}
