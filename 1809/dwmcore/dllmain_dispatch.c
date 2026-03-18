/*
 * XREFs of dllmain_dispatch @ 0x1800ED540
 * Callers:
 *     _DllMainCRTStartup @ 0x1800ED67C (_DllMainCRTStartup.c)
 * Callees:
 *     __scrt_dllmain_exception_filter @ 0x1800EBB34 (__scrt_dllmain_exception_filter.c)
 *     dllmain_crt_dispatch @ 0x1800ED340 (dllmain_crt_dispatch.c)
 *     DllMain @ 0x1800EDFAC (DllMain.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall dllmain_dispatch(CMagnifierRenderTarget *hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  unsigned int v7; // ebx
  BOOL v8; // eax

  if ( !fdwReason && dword_180307DE0 <= 0 )
    return 0LL;
  if ( fdwReason - 1 > 1
    || (!pRawDllMain || (v7 = ((__int64 (*)(void))pRawDllMain)()) != 0)
    && (v7 = dllmain_crt_dispatch(hinstDLL, fdwReason, (__int64)lpvReserved)) != 0 )
  {
    v8 = DllMain((HINSTANCE)hinstDLL, fdwReason, lpvReserved);
    v7 = v8;
    if ( fdwReason == 1 && !v8 )
    {
      DllMain((HINSTANCE)hinstDLL, 0, lpvReserved);
      dllmain_crt_dispatch(hinstDLL, 0, (__int64)lpvReserved);
      if ( pRawDllMain )
        pRawDllMain(hinstDLL, 0LL, lpvReserved);
    }
    if ( !fdwReason || fdwReason == 3 )
    {
      v7 = dllmain_crt_dispatch(hinstDLL, fdwReason, (__int64)lpvReserved);
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
