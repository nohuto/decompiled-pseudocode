/*
 * XREFs of DeleteOrSetRedirectionBitmap @ 0x1C0089084
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0010444 (zzzDwmStartRedirection.c)
 *     zzzUpdateLayeredWindow @ 0x1C002F248 (zzzUpdateLayeredWindow.c)
 *     SetRedirectedWindow @ 0x1C0032388 (SetRedirectedWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006AB94 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     UnsetRedirectedWindow @ 0x1C00894C0 (UnsetRedirectedWindow.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00895A0 (DeleteOldRedirectionBitmap.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00CBC74 (zzzUpdateWindowsAfterModeChange.c)
 *     RecreateRedirectionBitmap @ 0x1C00CC328 (RecreateRedirectionBitmap.c)
 *     xxxDwmStopRedirection @ 0x1C015F2D0 (xxxDwmStopRedirection.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E9710 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     GreSetRedirection @ 0x1C0089018 (GreSetRedirection.c)
 *     GreDereferenceObject @ 0x1C0089FA4 (GreDereferenceObject.c)
 */

__int64 __fastcall DeleteOrSetRedirectionBitmap(__int64 a1, HSURF a2, int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( !a3 && (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x3FFF) == 0x29D )
  {
    result = *(_QWORD *)(v3 + 40);
    *(_QWORD *)(result + 88) = a2;
  }
  else
  {
    GreSetRedirection((__int64)a2, 0LL);
    GreMarkDeletableBitmap(a2);
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreDereferenceObject(a2);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    result = *(_QWORD *)(v3 + 40);
    if ( a2 == *(HSURF *)(result + 88) )
      *(_QWORD *)(result + 88) = 0LL;
  }
  return result;
}
