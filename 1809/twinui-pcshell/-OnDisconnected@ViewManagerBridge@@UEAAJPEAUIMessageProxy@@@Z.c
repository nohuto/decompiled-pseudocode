/*
 * XREFs of ?OnDisconnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z @ 0x180232D50
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800DF27C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsShellInfraHostRunning@@YA_NXZ @ 0x1802321B8 (-IsShellInfraHostRunning@@YA_NXZ.c)
 *     ?ViewManagerDisconnectClientError@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18023B070 (-ViewManagerDisconnectClientError@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ?ViewManagerDisconnectServerError@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18023B154 (-ViewManagerDisconnectServerError@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ?ViewManagerDisconnectShutdown@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18023B238 (-ViewManagerDisconnectShutdown@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

__int64 __fastcall ViewManagerBridge::OnDisconnected(ViewManagerBridge *this, struct IUnknown *a2)
{
  void *v3; // rdi
  DWORD v4; // eax
  const char *v5; // r9
  HANDLE CurrentProcess; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)SHIsSameObject(*((struct IUnknown **)this + 12), a2) )
  {
    v3 = (void *)*((_QWORD *)this + 16);
    v4 = WaitForSingleObjectEx(v3, 0, 0);
    if ( v4 == 258 )
    {
      if ( !*((_BYTE *)this + 136) )
      {
        *((_BYTE *)this + 137) = 1;
        if ( IsShellInfraHostRunning() )
        {
          ViewManagerInteropTraceLogging::ViewManagerDisconnectClientError();
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0x8000FFFF);
        }
        else
        {
          ViewManagerInteropTraceLogging::ViewManagerDisconnectServerError();
        }
        goto LABEL_11;
      }
    }
    else if ( v4 || WaitForSingleObjectEx(v3, 0, 0) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(retaddr, 2559LL, (__int64)"internal\\sdk\\inc\\wil\\Resource.h", v5);
      __debugbreak();
    }
    ViewManagerInteropTraceLogging::ViewManagerDisconnectShutdown();
LABEL_11:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
  }
  return 0LL;
}
