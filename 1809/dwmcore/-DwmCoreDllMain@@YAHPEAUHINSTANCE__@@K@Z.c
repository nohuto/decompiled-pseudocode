/*
 * XREFs of ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x180084E48
 * Callers:
 *     DllMain @ 0x1800EDFAC (DllMain.c)
 * Callees:
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x180084B40 (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 *     ?FreeCurrent@CThreadContext@@SAXXZ @ 0x180084EAC (-FreeCurrent@CThreadContext@@SAXXZ.c)
 *     ?Startup@@YAJXZ @ 0x180084ED8 (-Startup@@YAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McGenEventUnregister @ 0x1801E0EE8 (McGenEventUnregister.c)
 *     ?CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ @ 0x1801E3FE4 (-CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ.c)
 */

__int64 __fastcall DwmCoreDllMain(HINSTANCE a1, int a2)
{
  unsigned int v2; // ebx
  int v3; // edx
  unsigned int v5; // ecx
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // ebx
  CD3DModuleLoaderInternal *v9; // rcx

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
      CThreadContext::s_dwTlsIndex = TlsAlloc();
      if ( CThreadContext::s_dwTlsIndex == -1 )
      {
        v8 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x49u);
      }
      else
      {
        v6 = Startup();
        v8 = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x4Bu);
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
    dword_180305E40 = 0;
    EventUnregister(qword_180305ED8);
    qword_180305ED8 = 0LL;
    dword_180305EB8 = 0;
    EventUnregister(qword_180305EA0);
    qword_180305EA0 = 0LL;
    dword_180305E80 = 0;
    EventUnregister(qword_180305E28);
    qword_180305E28 = 0LL;
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
