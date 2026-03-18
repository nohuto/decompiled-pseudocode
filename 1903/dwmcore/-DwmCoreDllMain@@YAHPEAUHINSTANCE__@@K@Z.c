/*
 * XREFs of ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800A9258
 * Callers:
 *     DllMain @ 0x1800E964C (DllMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x1800A90DC (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 *     ?FreeCurrent@CThreadContext@@SAXXZ @ 0x1800A9380 (-FreeCurrent@CThreadContext@@SAXXZ.c)
 *     ?Startup@@YAJXZ @ 0x1800A93AC (-Startup@@YAJXZ.c)
 *     ?CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ @ 0x1800D8FC4 (-CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ.c)
 *     McGenEventUnregister @ 0x1800D9408 (McGenEventUnregister.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1801568F0 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
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
    McGenEventUnregister(a1);
    EventUnregister(RegHandle);
    RegHandle = 0LL;
    dword_18033A240 = 0;
    EventUnregister(qword_18033A228);
    qword_18033A228 = 0LL;
    dword_18033A208 = 0;
    EventUnregister(qword_18033A1F0);
    qword_18033A1F0 = 0LL;
    dword_18033A1D0 = 0;
    EventUnregister(qword_18033A1B0);
    qword_18033A1B0 = 0LL;
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
