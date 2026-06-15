/*
 * XREFs of dllmain_dispatch @ 0x18003412C
 * Callers:
 *     _DllMainCRTStartup @ 0x180034270 (_DllMainCRTStartup.c)
 * Callees:
 *     DllMain @ 0x180004C88 (DllMain.c)
 *     dllmain_crt_dispatch @ 0x180033F20 (dllmain_crt_dispatch.c)
 *     __scrt_dllmain_exception_filter @ 0x180034660 (__scrt_dllmain_exception_filter.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall dllmain_dispatch(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  unsigned int v7; // ebx
  BOOL v8; // eax

  if ( !fdwReason && dword_18004D350 <= 0 )
    return 0LL;
  if ( fdwReason - 1 > 1
    || (!pRawDllMain || (v7 = ((__int64 (*)(void))pRawDllMain)()) != 0)
    && (v7 = dllmain_crt_dispatch((__int64)hinstDLL, fdwReason, (__int64)lpvReserved)) != 0 )
  {
    v8 = DllMain(hinstDLL, fdwReason, lpvReserved);
    v7 = v8;
    if ( fdwReason == 1 && !v8 )
    {
      DllMain(hinstDLL, 0, lpvReserved);
      dllmain_crt_dispatch((__int64)hinstDLL, 0, (__int64)lpvReserved);
      if ( pRawDllMain )
        pRawDllMain(hinstDLL, 0LL, lpvReserved);
    }
    if ( !fdwReason || fdwReason == 3 )
    {
      v7 = dllmain_crt_dispatch((__int64)hinstDLL, fdwReason, (__int64)lpvReserved);
      if ( v7 )
      {
        if ( pRawDllMain )
          return (unsigned int)pRawDllMain(hinstDLL, fdwReason, lpvReserved);
        else
          return 1;
      }
    }
  }
  return v7;
}
