/*
 * XREFs of ?SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z @ 0x1803B46F0
 * Callers:
 *     s_OnDrawItem @ 0x1803B50DC (s_OnDrawItem.c)
 *     ?_GetDpiForMonitorFromPoint@ImmersiveContextMenuHelper@@YAIPEAUtagPOINT@@@Z @ 0x1803B6734 (-_GetDpiForMonitorFromPoint@ImmersiveContextMenuHelper@@YAIPEAUtagPOINT@@@Z.c)
 *     ?ScaleByPPI@DPIToPPIHelpers@@YAHHPEAUHWND__@@W4ScaleModifier@1@@Z @ 0x1803B70DC (-ScaleByPPI@DPIToPPIHelpers@@YAHHPEAUHWND__@@W4ScaleModifier@1@@Z.c)
 *     ?ScaleBySpecificDPI@DPIToPPIHelpers@@YAHHHW4ScaleModifier@1@@Z @ 0x1803B717C (-ScaleBySpecificDPI@DPIToPPIHelpers@@YAHHHW4ScaleModifier@1@@Z.c)
 * Callees:
 *     ?ComputeSystemDPI@@YAXPEAH0@Z @ 0x1803B4524 (-ComputeSystemDPI@@YAXPEAH0@Z.c)
 */

void __fastcall SHComputeDPI(HWND a1, int *a2, int *a3)
{
  HWND v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = a1;
  InitOnceExecuteOnce(&s_InitOnce, (PINIT_ONCE_FN)InitializeUserAPIs, 0LL, 0LL);
  ComputeSystemDPI((int *)&v5, &v6);
  if ( a2 )
    *a2 = (int)v5;
  if ( a3 )
    *a3 = v6;
}
