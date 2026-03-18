/*
 * XREFs of zzzStartSonar @ 0x1C01D479C
 * Callers:
 *     EditionHandleSonarKeyEvent @ 0x1C011C3B0 (EditionHandleSonarKeyEvent.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     zzzStartFade @ 0x1C0152A68 (zzzStartFade.c)
 *     zzzAnimateFade @ 0x1C0152BA8 (zzzAnimateFade.c)
 *     StopFade @ 0x1C0152D60 (StopFade.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C0155FC8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01D3B58 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 */

HDC __fastcall zzzStartSonar(__int64 a1, __int64 a2)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  HDC result; // rax
  _BYTE v4[8]; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v5; // [rsp+38h] [rbp-20h] BYREF

  gptSonarCenter = *(_QWORD *)(gpsi + 4960LL);
  if ( LODWORD(gfade[6]) )
    StopFade();
  giSonarRadius = 100;
  v5.left = gptSonarCenter - 100;
  v5.right = gptSonarCenter + 100;
  v5.top = HIDWORD(gptSonarCenter) - 100;
  v5.bottom = HIDWORD(gptSonarCenter) + 100;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(HIDWORD(gptSonarCenter), a2);
  result = CreateFadeInternal(0LL, &v5, 1000LL, 192, CurrentThreadDpiAwarenessContext);
  if ( result )
  {
    DrawSonar(result);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v4);
    zzzStartFade();
    zzzAnimateFade();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v4);
    return (HDC)1;
  }
  return result;
}
