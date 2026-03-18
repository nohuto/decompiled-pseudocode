/*
 * XREFs of _DllMainStartup @ 0x1800773D0
 * Callers:
 *     <none>
 * Callees:
 *     _DllMainCRTStartup @ 0x1800ED67C (_DllMainCRTStartup.c)
 */

BOOL __stdcall DllMainStartup(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  void *v3; // rdi
  HINSTANCE v4; // rsi
  BOOL v5; // ebx
  int v6; // eax

  v3 = lpReserved;
  v4 = hinstDLL;
  v5 = 1;
  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      ++avalonutil_proc_attached;
      WPF::g_processHeap = GetProcessHeap();
      lpReserved = v3;
      fdwReason = 1;
      hinstDLL = v4;
    }
    else if ( fdwReason - 2 > 1 )
    {
      return v5;
    }
    return DllMainCRTStartup(hinstDLL, fdwReason, lpReserved);
  }
  if ( !g_fAlwaysDetach && lpReserved )
    return v5;
  if ( avalonutil_proc_attached > 0 )
  {
    --avalonutil_proc_attached;
    v6 = DllMainCRTStartup(hinstDLL, 0, lpReserved);
    WPF::g_processHeap = 0LL;
    return v6;
  }
  return 0;
}
