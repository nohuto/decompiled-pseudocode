/*
 * XREFs of DeleteFadeSprite @ 0x1C01E93A0
 * Callers:
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E8748 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     StopFade @ 0x1C01E9690 (StopFade.c)
 * Callees:
 *     UnsetLayeredWindow @ 0x1C0044CD4 (UnsetLayeredWindow.c)
 *     GreDeleteSprite @ 0x1C0045134 (GreDeleteSprite.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DeleteFadeSprite(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax

  v4 = 0LL;
  if ( (gfade[6] & 8) != 0 )
  {
    LOBYTE(a2) = 1;
    v5 = HMValidateHandleNoSecure(gfade[0], a2, gfade[0], a4);
    v4 = v5;
    if ( v5 && (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 26LL) & 8) != 0 )
      UnsetLayeredWindow((struct tagWND *)v5, 0);
  }
  else
  {
    GreDeleteSprite(*(HDEV *)(gpDispInfo + 40LL), 0LL, (void *)gfade[0], 1);
  }
  gfade[0] = 0LL;
  return v4;
}
