/*
 * XREFs of ?dllmain_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x180039530
 * Callers:
 *     DllEntryPoint @ 0x180039670 (DllEntryPoint.c)
 * Callees:
 *     DllMain @ 0x180005830 (DllMain.c)
 *     ?dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x180039330 (-dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 *     __scrt_dllmain_exception_filter @ 0x180039A60 (__scrt_dllmain_exception_filter.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall dllmain_dispatch(HINSTANCE a1, DWORD a2, void *const a3)
{
  unsigned int v7; // ebx
  BOOL v8; // eax

  if ( !a2 && dword_18004F650 <= 0 )
    return 0LL;
  if ( a2 - 1 > 1 || (v7 = dllmain_crt_dispatch(a1, a2, a3)) != 0 )
  {
    v8 = DllMain(a1, a2, a3);
    v7 = v8;
    if ( a2 == 1 && !v8 )
    {
      DllMain(a1, 0, a3);
      dllmain_crt_dispatch(a1, 0, a3);
    }
    if ( !a2 || a2 == 3 )
      return (unsigned int)dllmain_crt_dispatch(a1, a2, a3) != 0;
  }
  return v7;
}
