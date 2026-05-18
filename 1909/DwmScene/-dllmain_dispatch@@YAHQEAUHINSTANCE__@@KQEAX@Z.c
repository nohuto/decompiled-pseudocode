/*
 * XREFs of ?dllmain_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x1801264DC
 * Callers:
 *     DllEntryPoint @ 0x180126610 (DllEntryPoint.c)
 * Callees:
 *     DllMain @ 0x18000D450 (DllMain.c)
 *     __scrt_dllmain_exception_filter @ 0x180125D78 (__scrt_dllmain_exception_filter.c)
 *     ?dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x1801262E0 (-dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall dllmain_dispatch(HINSTANCE a1, DWORD a2, void *const a3)
{
  unsigned int v7; // ebx
  BOOL v8; // eax

  if ( !a2 && dword_18026C414 <= 0 )
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
