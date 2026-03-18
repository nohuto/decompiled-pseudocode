/*
 * XREFs of zzzStartSonar @ 0x1C01E9FA8
 * Callers:
 *     EditionHandleSonarKeyEvent @ 0x1C01240B0 (EditionHandleSonarKeyEvent.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E8748 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01E8CC0 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 *     StopFade @ 0x1C01E9690 (StopFade.c)
 *     zzzAnimateFade @ 0x1C01E9D48 (zzzAnimateFade.c)
 *     zzzStartFade @ 0x1C01E9ED0 (zzzStartFade.c)
 */

HDC __fastcall zzzStartSonar(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  HDC result; // rax
  _BYTE v6[8]; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v7; // [rsp+38h] [rbp-20h] BYREF

  gptSonarCenter = *(_QWORD *)(gpsi + 4960LL);
  if ( LODWORD(gfade[6]) )
    StopFade();
  giSonarRadius = 100;
  v7.left = gptSonarCenter - 100;
  v7.right = gptSonarCenter + 100;
  v7.top = HIDWORD(gptSonarCenter) - 100;
  v7.bottom = HIDWORD(gptSonarCenter) + 100;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(HIDWORD(gptSonarCenter), a2, a3, a4);
  result = CreateFadeInternal(0LL, &v7, 1000, 192, CurrentThreadDpiAwarenessContext);
  if ( result )
  {
    DrawSonar(result);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v6);
    zzzStartFade();
    zzzAnimateFade();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v6);
    return (HDC)1;
  }
  return result;
}
