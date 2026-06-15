/*
 * XREFs of DllMain @ 0x180066C34
 * Callers:
 *     dllmain_dispatch @ 0x180063A3C (dllmain_dispatch.c)
 * Callees:
 *     ?Provider@AudioSrvTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x18001AC60 (-Provider@AudioSrvTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?AeWmiInitialize@@YAHPEBU_GUID@@@Z @ 0x18004F71C (-AeWmiInitialize@@YAHPEBU_GUID@@@Z.c)
 *     ?AERTMemoryInitialize@@YAJ_K00@Z @ 0x18004F78C (-AERTMemoryInitialize@@YAJ_K00@Z.c)
 *     ?SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z @ 0x18004F8CC (-SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z.c)
 *     ?VAD_DllProcessAttach@@YAHXZ @ 0x18004F900 (-VAD_DllProcessAttach@@YAHXZ.c)
 *     ?AeWmiShutdown@@YAXXZ @ 0x180112424 (-AeWmiShutdown@@YAXXZ.c)
 *     WppCleanupUm @ 0x18011271C (WppCleanupUm.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x18013BF74 (-AERTMemoryShutdown@@YAJXZ.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  int v3; // ebx
  const struct _GUID *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v7; // r8
  void (*v8)(bool, const struct wil::FailureInfo *); // rdx
  wil *v9; // rcx

  v3 = 1;
  if ( fdwReason == 1 )
  {
    DisableThreadLibraryCalls(hinstDLL);
    hHeap = GetProcessHeap();
    AeWmiInitialize(v4);
    if ( (int)AERTMemoryInitialize(v6, v5, v7) >= 0 )
    {
      wil::SetResultTelemetryFallback(v9, v8);
      g_SysFxUtilTlp = AudioSrvTelemetryProvider::Provider();
      dword_1801B81AC = 1;
      dword_1801B81A8 = VAD_DllProcessAttach();
      v3 = dword_1801B81A8;
      if ( !dword_1801B81A8 )
        dword_1801B81AC = 0;
    }
    else
    {
      return 0;
    }
  }
  else if ( !fdwReason && !lpvReserved )
  {
    dword_1801B81AC = 0;
    dword_1801B81A8 = 0;
    AERTMemoryShutdown();
    AeWmiShutdown();
    g_SysFxUtilTlp = 0LL;
    WppCleanupUm();
  }
  return v3;
}
