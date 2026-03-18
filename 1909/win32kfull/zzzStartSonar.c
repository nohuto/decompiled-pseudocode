/*
 * XREFs of zzzStartSonar @ 0x1C01E9E28
 * Callers:
 *     EditionHandleSonarKeyEvent @ 0x1C00FE9E0 (EditionHandleSonarKeyEvent.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E85C8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01E8B40 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 *     StopFade @ 0x1C01E9510 (StopFade.c)
 *     zzzAnimateFade @ 0x1C01E9BC8 (zzzAnimateFade.c)
 *     zzzStartFade @ 0x1C01E9D50 (zzzStartFade.c)
 */

HDC __fastcall zzzStartSonar(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  HDC result; // rax
  _BYTE v5[8]; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v6; // [rsp+38h] [rbp-20h] BYREF

  gptSonarCenter = *(_QWORD *)(gpsi + 4960LL);
  if ( LODWORD(gfade[6]) )
    StopFade();
  giSonarRadius = 100;
  v6.left = gptSonarCenter - 100;
  v6.right = gptSonarCenter + 100;
  v6.top = HIDWORD(gptSonarCenter) - 100;
  v6.bottom = HIDWORD(gptSonarCenter) + 100;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(HIDWORD(gptSonarCenter), a2, a3);
  result = CreateFadeInternal(0LL, &v6, 1000, 192, CurrentThreadDpiAwarenessContext);
  if ( result )
  {
    DrawSonar(result);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v5);
    zzzStartFade();
    zzzAnimateFade();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v5);
    return (HDC)1;
  }
  return result;
}
