/*
 * XREFs of ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C0152C70
 * Callers:
 *     zzzShowFade @ 0x1C0152B40 (zzzShowFade.c)
 *     zzzAnimateFade @ 0x1C0152BA8 (zzzAnimateFade.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     GreUpdateSprite @ 0x1C0076350 (GreUpdateSprite.c)
 *     zzzUpdateLayeredWindow @ 0x1C0077B50 (zzzUpdateLayeredWindow.c)
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
  _QWORD v15[4]; // [rsp+80h] [rbp-28h] BYREF

  v7 = a2;
  v9 = gfade[6];
  if ( (v9 & 8) != 0 )
  {
    LOBYTE(a2) = 1;
    v11 = HMValidateHandleNoSecure(gfade[0], (__int64)a2);
    if ( v11 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10);
      v15[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v15;
      v15[1] = v11;
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      zzzUpdateLayeredWindow((struct tagWND *)v11, 0LL, a1, v7, a3, a4, 0, a5, 2u, 0LL);
      ThreadUnlock1(v14, v13);
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
