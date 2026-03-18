/*
 * XREFs of ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0202630
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxFlashWindow @ 0x1C0083E54 (xxxFlashWindow.c)
 *     xxxRedrawWindow @ 0x1C00C3908 (xxxRedrawWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     FindTimer @ 0x1C00DA984 (FindTimer.c)
 */

void __fastcall SoundSentryTimer(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 *v8; // rbx
  struct tagRECT *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 *v19; // [rsp+38h] [rbp-20h]
  __int64 v20; // [rsp+40h] [rbp-18h]

  LOBYTE(a2) = 1;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v4 = HMValidateHandleNoSecure((unsigned __int64)ghwndSoundSentry, a2, a3, a4);
  v8 = (unsigned __int64 *)v4;
  if ( !v4 )
    gdwCurrentEffect = 3;
  switch ( gdwCurrentEffect )
  {
    case 1u:
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
      v18 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v18;
      v19 = v8;
      if ( v8 )
        HMLockObject(v8);
      xxxFlashWindow(v8, 0, 0);
      goto LABEL_16;
    case 2u:
      if ( (unsigned int)IsWindowDesktopComposed(v4) )
      {
        v9 = &grcScreenFlash;
        goto LABEL_7;
      }
      v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12);
      v18 = *(_QWORD *)(v13 + 408);
      *(_QWORD *)(v13 + 408) = &v18;
      v19 = v8;
      if ( v8 )
        HMLockObject(v8);
      xxxRedrawWindow((struct tagWND *)v8, 0LL, 0LL, 645LL);
LABEL_16:
      ThreadUnlock1(v15, v14, v16);
      break;
    case 3u:
      v9 = 0LL;
LABEL_7:
      xxxRedrawWindow(0LL, (__int64)v9, 0LL, 66181LL);
      break;
  }
  gdwCurrentEffect = 0;
  ghwndSoundSentry = 0LL;
  FindTimer(0LL, gtmridSoundSentry, 4u, 1, 0LL);
  gtmridSoundSentry = 0LL;
}
