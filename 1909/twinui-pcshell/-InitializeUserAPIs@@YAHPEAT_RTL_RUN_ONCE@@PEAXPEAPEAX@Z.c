/*
 * XREFs of ?InitializeUserAPIs@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x180436440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializeUserAPIs(PINIT_ONCE InitOnce, PVOID Parameter, PVOID *Context)
{
  unsigned int v3; // ebx
  HMODULE ModuleHandleW; // rax
  HMODULE v5; // rdi
  int (*ProcAddress)(struct DPI_AWARENESS_CONTEXT__ *, struct DPI_AWARENESS_CONTEXT__ *); // rax

  v3 = 0;
  ModuleHandleW = GetModuleHandleW(L"User32");
  v5 = ModuleHandleW;
  if ( ModuleHandleW )
  {
    s_pfnGetDpiForWindow = (int (*)(HWND))GetProcAddress(ModuleHandleW, "GetDpiForWindow");
    s_pfnGetSystemMetricsForDpi = (int (*)(int, int))GetProcAddress(v5, "GetSystemMetricsForDpi");
    s_pfnGetWindowDpiAwarenessContext = (struct DPI_AWARENESS_CONTEXT__ *(*)(HWND))GetProcAddress(
                                                                                     v5,
                                                                                     "GetWindowDpiAwarenessContext");
    ProcAddress = (int (*)(struct DPI_AWARENESS_CONTEXT__ *, struct DPI_AWARENESS_CONTEXT__ *))GetProcAddress(
                                                                                                 v5,
                                                                                                 "AreDpiAwarenessContextsEqual");
    s_pfnAreDpiAwarenessContextsEqual = ProcAddress;
  }
  else
  {
    ProcAddress = s_pfnAreDpiAwarenessContextsEqual;
  }
  if ( s_pfnGetDpiForWindow && s_pfnGetSystemMetricsForDpi && s_pfnGetWindowDpiAwarenessContext && ProcAddress )
  {
    return 1;
  }
  else
  {
    s_pfnGetDpiForWindow = 0LL;
    s_pfnGetSystemMetricsForDpi = 0LL;
    s_pfnGetWindowDpiAwarenessContext = 0LL;
    s_pfnAreDpiAwarenessContextsEqual = 0LL;
  }
  return v3;
}
