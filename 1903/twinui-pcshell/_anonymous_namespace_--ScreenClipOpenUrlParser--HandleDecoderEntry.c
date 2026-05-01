/*
 * XREFs of _anonymous_namespace_::ScreenClipOpenUrlParser::HandleDecoderEntry @ 0x1801ADA34
 * Callers:
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::ParseUriDecoder @ 0x1801B10C0 (_anonymous_namespace_--ScreenClipOpenUrlParser--ParseUriDecoder.c)
 * Callees:
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18003F9F4 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _anonymous_namespace_::HStringToLong @ 0x1801AD7D4 (_anonymous_namespace_--HStringToLong.c)
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::HandleCallbackFormat @ 0x1801AD83C (_anonymous_namespace_--ScreenClipOpenUrlParser--HandleCallbackFormat.c)
 */

__int64 __fastcall anonymous_namespace_::ScreenClipOpenUrlParser::HandleDecoderEntry(
        __int64 a1,
        Microsoft::WRL::Wrappers::Details **a2,
        Microsoft::WRL::Wrappers::Details **a3)
{
  HSTRING v6; // r8
  int v7; // eax
  HSTRING v8; // r8
  int v9; // eax
  HSTRING v11; // r8
  int v12; // ebx
  __int64 v13; // rdx
  HSTRING v14; // r8
  __int64 v15; // [rsp+20h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-28h] BYREF
  HSTRING v17; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v17 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"source", 7u, 6u);
  v7 = Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(*a2, v17, v6);
  v17 = 0LL;
  if ( !v7 )
  {
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ScreenSketch", 0xDu, 0xCu);
    v9 = Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(*a3, v17, v8);
    BYTE1(v15) = 1;
    LOBYTE(v15) = v9 == 0;
    *(_WORD *)(a1 + 16) = v15;
    return 0LL;
  }
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"delayInSeconds", 0xFu, 0xEu);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(*a2, v17, v11) )
  {
    v17 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"callbackformat", 0xFu, 0xEu);
    if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(*a2, v17, v14) )
      return 0LL;
    v12 = anonymous_namespace_::ScreenClipOpenUrlParser::HandleCallbackFormat((_OWORD *)a1, a3);
    if ( v12 >= 0 )
      return 0LL;
    v13 = 1736LL;
  }
  else
  {
    LODWORD(v15) = 0;
    if ( anonymous_namespace_::HStringToLong((HSTRING *)a3, (int *)&v15) && (int)v15 >= 0 )
    {
      BYTE4(v15) = 1;
      *(_QWORD *)(a1 + 20) = v15;
      return 0LL;
    }
    v12 = -2147024809;
    v13 = 1732LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
    (const char *)(unsigned int)v12);
  return (unsigned int)v12;
}
