/*
 * XREFs of DeleteFadeSprite @ 0x1C01B15F0
 * Callers:
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01B0B28 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     StopFade @ 0x1C01B18B0 (StopFade.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     UnsetLayeredWindow @ 0x1C00C3C58 (UnsetLayeredWindow.c)
 *     GreDeleteSprite @ 0x1C00C4078 (GreDeleteSprite.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DeleteFadeSprite(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax

  v2 = 0LL;
  if ( (gfade[6] & 8) != 0 )
  {
    LOBYTE(a2) = 1;
    v3 = HMValidateHandleNoSecure(gfade[0], a2);
    v2 = v3;
    if ( v3 && (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 26LL) & 8) != 0 )
      UnsetLayeredWindow((struct tagWND *)v3, 0);
  }
  else
  {
    GreDeleteSprite(*(HDEV *)(gpDispInfo + 40LL), 0LL, (void *)gfade[0], 1);
  }
  gfade[0] = 0LL;
  return v2;
}
