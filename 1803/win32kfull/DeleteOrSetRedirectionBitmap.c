/*
 * XREFs of DeleteOrSetRedirectionBitmap @ 0x1C00C4EA8
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0008494 (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C0008660 (xxxDwmStopRedirection.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C002E6CC (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     SetRedirectedWindow @ 0x1C0075334 (SetRedirectedWindow.c)
 *     zzzUpdateLayeredWindow @ 0x1C007CD40 (zzzUpdateLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1C00C4B08 (UnsetRedirectedWindow.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00C4BEC (DeleteOldRedirectionBitmap.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00E7FA8 (zzzUpdateWindowsAfterModeChange.c)
 *     RecreateRedirectionBitmap @ 0x1C00E8330 (RecreateRedirectionBitmap.c)
 *     UserReleaseRedirectionBitmap @ 0x1C01B1A80 (UserReleaseRedirectionBitmap.c)
 * Callees:
 *     GreSetRedirection @ 0x1C00C4E48 (GreSetRedirection.c)
 *     GreDereferenceObject @ 0x1C00C5650 (GreDereferenceObject.c)
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
