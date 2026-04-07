/*
 * XREFs of __DllMainCRTStartup @ 0x18004F128
 * Callers:
 *     _DllMainCRTStartup @ 0x18004F0E4 (_DllMainCRTStartup.c)
 * Callees:
 *     _CRT_INIT @ 0x18004EEAC (_CRT_INIT.c)
 *     _XcptFilter_0 @ 0x18004F37A (_XcptFilter_0.c)
 *     DllMain @ 0x18004F64C (DllMain.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _DllMainCRTStartup(HINSTANCE hinstDLL, __int64 fdwReason, void *a3)
{
  DWORD v3; // edi
  unsigned int v5; // ebx
  int v6; // eax

  v3 = fdwReason;
  v5 = 1;
  if ( (unsigned int)fdwReason <= 1 )
    _native_dllmain_reason = fdwReason;
  if ( (_DWORD)fdwReason || dword_1800DBD68 )
  {
    if ( (unsigned int)(fdwReason - 1) > 1 )
      goto LABEL_13;
    if ( pRawDllMain )
    {
      v6 = dword_1800DBD6C;
      if ( (_DWORD)fdwReason == 1 )
        v6 = 1;
      dword_1800DBD6C = v6;
      v5 = pRawDllMain(hinstDLL, fdwReason, a3);
    }
    if ( v5 )
    {
      v5 = CRT_INIT((__int64)hinstDLL, v3, (__int64)a3);
      if ( v5 )
      {
LABEL_13:
        v5 = DllMain(hinstDLL, v3, a3);
        if ( v3 == 1 && !v5 )
        {
          DllMain(hinstDLL, 0, 0LL);
          CRT_INIT((__int64)hinstDLL, 0, 0LL);
          if ( pRawDllMain )
            pRawDllMain(hinstDLL, 0LL, 0LL);
        }
        if ( !v3 || v3 == 3 )
        {
          v5 = CRT_INIT((__int64)hinstDLL, v3, (__int64)a3);
          if ( pRawDllMain )
          {
            if ( dword_1800DBD6C )
              v5 = pRawDllMain(hinstDLL, v3, a3);
          }
        }
      }
    }
  }
  else
  {
    v5 = 0;
  }
  if ( v3 <= 1 )
    _native_dllmain_reason = -1;
  return v5;
}
