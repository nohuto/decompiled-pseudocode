/*
 * XREFs of ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01B13E4
 * Callers:
 *     zzzAnimateFade @ 0x1C01B1F5C (zzzAnimateFade.c)
 *     zzzShowFade @ 0x1C01B2084 (zzzShowFade.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     GreUpdateSprite @ 0x1C007B280 (GreUpdateSprite.c)
 *     zzzUpdateLayeredWindow @ 0x1C007CD40 (zzzUpdateLayeredWindow.c)
 */

void __fastcall zzzUpdateFade(
        struct tagPOINT *a1,
        struct tagSIZE *a2,
        HDC a3,
        struct tagPOINT *a4,
        struct _BLENDFUNCTION *a5)
{
  struct tagSIZE *v7; // r14
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD v16[4]; // [rsp+80h] [rbp-28h] BYREF

  v7 = a2;
  v9 = gfade[6];
  if ( (v9 & 8) != 0 )
  {
    LOBYTE(a2) = 1;
    v11 = HMValidateHandleNoSecure(gfade[0], (__int64)a2);
    if ( v11 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10);
      v16[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v16;
      v16[1] = v11;
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      zzzUpdateLayeredWindow((struct tagWND *)v11, 0LL, a1, v7, a3, a4, 0, a5, 2u, 0LL);
      ThreadUnlock1(v14, v13, v15);
    }
  }
  else
  {
    GreUpdateSprite(
      *(HDEV *)(gpDispInfo + 40LL),
      0LL,
      (void *)gfade[0],
      0LL,
      a1,
      a2,
      a3,
      a4,
      HIDWORD(gfade[6]),
      a5,
      2 - ((v9 & 0x40) != 0),
      0LL,
      0LL,
      1,
      0);
  }
}
