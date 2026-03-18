/*
 * XREFs of xxxFlashEnabledPopup @ 0x1C0133950
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0021D64 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxFlashWindow @ 0x1C006312C (xxxFlashWindow.c)
 *     DWP_GetEnabledPopup @ 0x1C0100E84 (DWP_GetEnabledPopup.c)
 *     xxxMessageBeep @ 0x1C01339F0 (xxxMessageBeep.c)
 */

__int64 __fastcall xxxFlashEnabledPopup(_QWORD *a1)
{
  __int64 v1; // rdx
  volatile signed __int32 *EnabledPopup; // rbx
  __int64 ThreadWin32Thread; // rax
  _DWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (HIDWORD(gSoundSentry) & 1) == 0 )
  {
    EnabledPopup = (volatile signed __int32 *)DWP_GetEnabledPopup(a1);
    if ( EnabledPopup )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1);
      v9[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v9;
      v9[1] = EnabledPopup;
      _InterlockedIncrement(EnabledPopup + 2);
      v4 = (_DWORD *)UPDWORDPointer(8196LL);
      xxxFlashWindow(
        (unsigned __int64 *)EnabledPopup,
        ((unsigned __int16)*v4 << 16) | 3,
        *(_DWORD *)(gpsi + 4984LL) >> 3);
      ThreadUnlock1(v6, v5, v7);
    }
  }
  return xxxMessageBeep(0LL);
}
