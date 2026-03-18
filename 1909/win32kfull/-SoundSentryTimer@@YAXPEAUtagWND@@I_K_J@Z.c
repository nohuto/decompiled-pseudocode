/*
 * XREFs of ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0202380
 * Callers:
 *     <none>
 * Callees:
 *     xxxFlashWindow @ 0x1C0015284 (xxxFlashWindow.c)
 *     xxxRedrawWindow @ 0x1C0064FD8 (xxxRedrawWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     FindTimer @ 0x1C007A674 (FindTimer.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

void __fastcall SoundSentryTimer(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 *v6; // rbx
  struct tagRECT *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 *v16; // [rsp+38h] [rbp-20h]
  __int64 v17; // [rsp+40h] [rbp-18h]

  LOBYTE(a2) = 1;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v3 = HMValidateHandleNoSecure((unsigned __int64)ghwndSoundSentry, a2, a3);
  v6 = (unsigned __int64 *)v3;
  if ( !v3 )
    gdwCurrentEffect = 3;
  switch ( gdwCurrentEffect )
  {
    case 1u:
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5);
      v15 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v15;
      v16 = v6;
      if ( v6 )
        HMLockObject(v6);
      xxxFlashWindow(v6, 0, 0);
      goto LABEL_16;
    case 2u:
      if ( (unsigned int)IsWindowDesktopComposed(v3) )
      {
        v7 = &grcScreenFlash;
        goto LABEL_7;
      }
      v10 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9);
      v15 = *(_QWORD *)(v10 + 408);
      *(_QWORD *)(v10 + 408) = &v15;
      v16 = v6;
      if ( v6 )
        HMLockObject(v6);
      xxxRedrawWindow((struct tagWND *)v6, 0LL, 0LL, 645);
LABEL_16:
      ThreadUnlock1(v12, v11, v13);
      break;
    case 3u:
      v7 = 0LL;
LABEL_7:
      xxxRedrawWindow(0LL, (__int64)v7, 0LL, 66181);
      break;
  }
  gdwCurrentEffect = 0;
  ghwndSoundSentry = 0LL;
  FindTimer(0LL, gtmridSoundSentry, 4u, 1, 0LL);
  gtmridSoundSentry = 0LL;
}
