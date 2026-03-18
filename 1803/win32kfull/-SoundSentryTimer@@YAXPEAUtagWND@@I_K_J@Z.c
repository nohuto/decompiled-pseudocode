/*
 * XREFs of ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01C8440
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     xxxRedrawWindow @ 0x1C002AA30 (xxxRedrawWindow.c)
 *     xxxFlashWindow @ 0x1C006312C (xxxFlashWindow.c)
 *     FindTimer @ 0x1C00BA330 (FindTimer.c)
 */

void __fastcall SoundSentryTimer(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  struct tagRECT *v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h]

  LOBYTE(a2) = 1;
  v3 = HMValidateHandleNoSecure((unsigned __int64)ghwndSoundSentry, a2);
  if ( !v3 )
    gdwCurrentEffect = 3;
  switch ( gdwCurrentEffect )
  {
    case 1u:
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2);
      v11 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v11;
      v12 = v3;
      if ( v3 )
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      xxxFlashWindow((unsigned __int64 *)v3, 0, 0);
      goto LABEL_16;
    case 2u:
      if ( (unsigned int)IsWindowDesktopComposed(v3) )
      {
        v4 = &grcScreenFlash;
        goto LABEL_7;
      }
      v6 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
      v11 = *(_QWORD *)(v6 + 408);
      *(_QWORD *)(v6 + 408) = &v11;
      v12 = v3;
      if ( v3 )
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      xxxRedrawWindow((struct tagWND *)v3, 0LL, 0LL, 645);
LABEL_16:
      ThreadUnlock1(v8, v7, v9);
      break;
    case 3u:
      v4 = 0LL;
LABEL_7:
      xxxRedrawWindow(0LL, (__int64)v4, 0LL, 66181);
      break;
  }
  gdwCurrentEffect = 0;
  ghwndSoundSentry = 0LL;
  FindTimer(0LL, gtmridSoundSentry, 4u, 1, 0LL);
  gtmridSoundSentry = 0LL;
}
