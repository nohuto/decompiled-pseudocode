/*
 * XREFs of CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C001F53C
 * Callers:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C001F400 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreGetStockObject @ 0x1C001F590 (GreGetStockObject.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C00543B0 (W32SetCurrentThreadDpiAwarenessContext.c)
 * Callees:
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C005C468 (IsValidKernelDpiAwarenessContext.c)
 */

void __fastcall CaptureAndValidateUserModeDpiAwarenessContext(__int64 a1)
{
  __int64 v1; // r9
  unsigned int *v2; // rdx
  unsigned int v3; // r10d
  unsigned int v4; // r8d

  v1 = a1;
  v2 = *(unsigned int **)(a1 + 360);
  v3 = 0;
  if ( v2[1] )
  {
    v4 = *v2;
    if ( !*v2 || (unsigned int)IsValidKernelDpiAwarenessContext(v4) )
      *(_DWORD *)(v1 + 340) = v4;
    else
      *v2 = v3;
    v2[1] = v3;
  }
}
