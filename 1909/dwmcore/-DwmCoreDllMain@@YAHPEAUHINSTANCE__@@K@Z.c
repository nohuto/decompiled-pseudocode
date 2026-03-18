/*
 * XREFs of ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800B2D70
 * Callers:
 *     DllMain @ 0x1800EA46C (DllMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McGenEventUnregister @ 0x1800B0264 (McGenEventUnregister.c)
 *     ?FreeCurrent@CThreadContext@@SAXXZ @ 0x1800B2E98 (-FreeCurrent@CThreadContext@@SAXXZ.c)
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x1800B2EC4 (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 *     ?Startup@@YAJXZ @ 0x1800B5930 (-Startup@@YAJXZ.c)
 *     ?CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ @ 0x1800D9764 (-CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180155210 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

__int64 __fastcall DwmCoreDllMain(HINSTANCE a1, int a2)
{
  unsigned int v2; // ebx
  int v3; // edx
  __int64 v5; // rcx
  signed int v6; // eax
  __int64 v7; // rcx
  int v8; // ebx
  CD3DModuleLoaderInternal *v9; // rcx
  const struct wil::FailureInfo *v10; // rdx
  _BYTE v11[152]; // [rsp+30h] [rbp-98h] BYREF

  v2 = 1;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      if ( v3 == 2 )
        CThreadContext::FreeCurrent();
    }
    else
    {
      if ( wil::details::g_pfnLoggingCallback
        && (char *)wil::details::g_pfnLoggingCallback != (char *)lambda_b5f577a36749d08817efa9d9ab2e0790_::_lambda_invoker_cdecl_ )
      {
        memset_0(v11, 0, 0x90uLL);
        wil::details::WilFailFast((wil::details *)v11, v10);
      }
      wil::details::g_pfnLoggingCallback = (void (*)(const struct wil::FailureInfo *))lambda_b5f577a36749d08817efa9d9ab2e0790_::_lambda_invoker_cdecl_;
      CThreadContext::s_dwTlsIndex = TlsAlloc();
      if ( CThreadContext::s_dwTlsIndex == -1 )
      {
        v8 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x8007000E, 0x49u, 0LL);
      }
      else
      {
        v6 = Startup();
        v8 = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x4Bu, 0LL);
        }
        else
        {
          v8 = 0;
          RegisterDwmGuidWithEtw();
        }
      }
      return v8 >= 0;
    }
  }
  else
  {
    McGenEventUnregister();
    EventUnregister(RegHandle);
    RegHandle = 0LL;
    dword_180337240 = 0;
    EventUnregister(qword_180337228);
    qword_180337228 = 0LL;
    dword_180337208 = 0;
    EventUnregister(qword_1803371F0);
    qword_1803371F0 = 0LL;
    dword_1803371D0 = 0;
    EventUnregister(qword_1803371B0);
    qword_1803371B0 = 0LL;
    hProvider = 0;
    CD3DModuleLoaderInternal::CleanupD3DReferences(v9);
    if ( CThreadContext::s_dwTlsIndex != -1 )
    {
      CThreadContext::FreeCurrent();
      TlsFree(CThreadContext::s_dwTlsIndex);
      CThreadContext::s_dwTlsIndex = -1;
    }
  }
  return v2;
}
