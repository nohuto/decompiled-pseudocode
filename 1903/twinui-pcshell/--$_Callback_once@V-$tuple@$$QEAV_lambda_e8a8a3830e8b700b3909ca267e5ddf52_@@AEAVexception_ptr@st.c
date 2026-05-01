/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_e8a8a3830e8b700b3909ca267e5ddf52_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180336150
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1803357C8 (--$ActivateInstance@V-$ComPtr@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windo.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_e8a8a3830e8b700b3909ca267e5ddf52_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 result; // rax
  void *v5; // rbx
  int v6[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+30h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-30h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v7 = -2LL;
  *(_QWORD *)v6 = a2;
  v2 = *(_QWORD *)(a2 + 8);
  v9 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Shell.Multitasking.Desktop.DesktopThumbnailDevice",
    0x43u,
    0x42u);
  v3 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice>>(
         v9,
         (__int64 *)(*(_QWORD *)v2 + 48LL));
  try
  {
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        95LL,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
        (const char *)(unsigned int)v3);
    result = 1LL;
  }
  catch ( ... )
  {
    v5 = **(void ***)v6;
    __ExceptionPtrCreate(v6);
    __ExceptionPtrCurrentException(v6);
    __ExceptionPtrAssign(v5, v6);
    __ExceptionPtrDestroy(v6);
    return 0LL;
  }
  return result;
}
