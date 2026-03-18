/*
 * XREFs of _GetLayeredWindowAttributes @ 0x1C01462B8
 * Callers:
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C0146010 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     zzzUpdateShadowAlpha @ 0x1C0146168 (zzzUpdateShadowAlpha.c)
 *     NtUserGetLayeredWindowAttributes @ 0x1C022D4E0 (NtUserGetLayeredWindowAttributes.c)
 * Callees:
 *     GetRedirectionFlags @ 0x1C002B3F0 (GetRedirectionFlags.c)
 *     GreGetSpriteAttributes @ 0x1C003DB44 (GreGetSpriteAttributes.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall GetLayeredWindowAttributes(__int64 a1, unsigned int *a2, BYTE *a3, unsigned int *a4)
{
  unsigned int SpriteAttributes; // edi
  int v9; // eax
  _DWORD *v10; // r8
  struct _BLENDFUNCTION v12; // [rsp+60h] [rbp+8h] BYREF

  SpriteAttributes = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 26LL) & 8) != 0 )
  {
    if ( (GetRedirectionFlags(a1) & 1) != 0 )
    {
      v12 = 0;
      v9 = IsWindowDesktopComposed(a1);
      SpriteAttributes = GreGetSpriteAttributes(
                           *(HDEV *)(gpDispInfo + 40LL),
                           *(struct PDEVOBJ **)a1,
                           v10,
                           a2,
                           &v12,
                           a4,
                           v9);
      if ( SpriteAttributes )
        *a3 = v12.SourceConstantAlpha;
    }
  }
  else
  {
    UserSetLastError(87LL, (__int64)a2, (__int64)a3, (__int64)a4);
  }
  return SpriteAttributes;
}
