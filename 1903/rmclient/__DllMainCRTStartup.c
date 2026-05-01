/*
 * XREFs of __DllMainCRTStartup @ 0x1000C6B6
 * Callers:
 *     __DllMainCRTStartup@12 @ 0x1000C680 (__DllMainCRTStartup@12.c)
 * Callees:
 *     __CRT_INIT@12 @ 0x1000C492 (__CRT_INIT@12.c)
 *     ___CppXcptFilter @ 0x1000C696 (___CppXcptFilter.c)
 *     __DllMainCRTStartup @ 0x1000C6B6 (__DllMainCRTStartup.c)
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 *     _DllMain@12 @ 0x1000D02C (_DllMain@12.c)
 */

int __stdcall _DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  int v4; // [esp+30h] [ebp-1Ch]

  v4 = 1;
  if ( fdwReason <= 1 )
    __native_dllmain_reason = fdwReason;
  if ( fdwReason || dword_100180B0 )
  {
    if ( fdwReason != 1 && fdwReason != 2 )
      goto LABEL_14;
    if ( _pRawDllMain )
    {
      if ( fdwReason == 1 )
        dword_100180B4 = 1;
      v4 = _pRawDllMain(_pRawDllMain, hinstDLL, fdwReason, lpvReserved);
    }
    if ( v4 )
    {
      v4 = _CRT_INIT((int)hinstDLL, fdwReason, (int)lpvReserved);
      if ( v4 )
      {
LABEL_14:
        v4 = DllMain(hinstDLL, fdwReason, lpvReserved);
        if ( fdwReason == 1 && !v4 )
        {
          DllMain(hinstDLL, 0, 0);
          _CRT_INIT((int)hinstDLL, 0, 0);
          if ( _pRawDllMain )
            _pRawDllMain(_pRawDllMain, hinstDLL, 0, 0);
        }
        if ( !fdwReason || fdwReason == 3 )
        {
          v4 = _CRT_INIT((int)hinstDLL, fdwReason, (int)lpvReserved);
          if ( _pRawDllMain )
          {
            if ( dword_100180B4 )
              v4 = _pRawDllMain(_pRawDllMain, hinstDLL, fdwReason, lpvReserved);
          }
        }
      }
    }
  }
  else
  {
    v4 = 0;
  }
  if ( fdwReason <= 1 )
    __native_dllmain_reason = -1;
  return v4;
}
