/*
 * XREFs of ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01E9004
 * Callers:
 *     zzzAnimateFade @ 0x1C01E9BC8 (zzzAnimateFade.c)
 *     zzzShowFade @ 0x1C01E9CE8 (zzzShowFade.c)
 * Callees:
 *     zzzUpdateLayeredWindow @ 0x1C002F248 (zzzUpdateLayeredWindow.c)
 *     GreUpdateSprite @ 0x1C0031328 (GreUpdateSprite.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

void __fastcall zzzUpdateFade(
        struct tagPOINT *a1,
        struct tagSIZE *a2,
        HDC a3,
        struct tagPOINT *a4,
        struct _BLENDFUNCTION *a5)
{
  const struct tagSIZE *v7; // r14
  int v9; // eax
  __int64 v10; // rdx
  struct tagWND *v11; // rdi
  __int64 v12; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // [rsp+80h] [rbp-28h] BYREF
  struct tagWND *v18; // [rsp+88h] [rbp-20h]
  __int64 v19; // [rsp+90h] [rbp-18h]

  v17 = 0LL;
  v7 = a2;
  v18 = 0LL;
  v19 = 0LL;
  v9 = gfade[6];
  if ( (v9 & 8) != 0 )
  {
    LOBYTE(a2) = 1;
    v11 = (struct tagWND *)HMValidateHandleNoSecure(gfade[0], (__int64)a2, gfade[0]);
    if ( v11 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v12);
      v17 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v17;
      v18 = v11;
      HMLockObject(v11);
      zzzUpdateLayeredWindow(v11, 0LL, a1, v7, (__int64)a3, (__int64)a4, 0, (__int64)a5, 2u, 0LL);
      ThreadUnlock1(v15, v14, v16);
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
