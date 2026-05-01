/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_9127ed4c7f0b883365da4a18d16712eb_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x18025BB50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_9127ed4c7f0b883365da4a18d16712eb_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        __int64 a2)
{
  __int64 *ppv; // rbx
  HRESULT Instance; // eax
  __int64 result; // rax
  void *v5; // rbx
  _BYTE v6[32]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  ppv = (__int64 *)(**(_QWORD **)(a2 + 8) + 48LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(ppv);
  Instance = CoCreateInstance(
               &CLSID_XamlRuntimeSiteAggregator,
               0LL,
               1u,
               &GUID_00bb2761_6a77_11d0_a535_00c04fd7d062,
               (LPVOID *)ppv);
  try
  {
    if ( Instance < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        36LL,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
        (const char *)(unsigned int)Instance);
    result = 1LL;
  }
  catch ( ... )
  {
    v5 = *(void **)a2;
    __ExceptionPtrCreate(v6);
    __ExceptionPtrCurrentException(v6);
    __ExceptionPtrAssign(v5, v6);
    __ExceptionPtrDestroy(v6);
    return 0LL;
  }
  return result;
}
