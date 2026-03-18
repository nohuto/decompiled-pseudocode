/*
 * XREFs of xxxFlashEnabledPopup @ 0x1C02282F8
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0069EDC (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxFlashWindow @ 0x1C00DE38C (xxxFlashWindow.c)
 *     xxxMessageBeep @ 0x1C0154B50 (xxxMessageBeep.c)
 *     DWP_GetEnabledPopup @ 0x1C0228108 (DWP_GetEnabledPopup.c)
 */

__int64 __fastcall xxxFlashEnabledPopup(_QWORD *a1)
{
  __int64 v1; // rdx
  volatile signed __int32 *EnabledPopup; // rbx
  __int64 ThreadWin32Thread; // rax
  _DWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (HIDWORD(gSoundSentry) & 1) == 0 )
  {
    EnabledPopup = (volatile signed __int32 *)DWP_GetEnabledPopup(a1);
    if ( EnabledPopup )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1);
      v8[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v8;
      v8[1] = EnabledPopup;
      _InterlockedIncrement(EnabledPopup + 2);
      v4 = (_DWORD *)UPDWORDPointer(8196LL);
      xxxFlashWindow(
        (unsigned __int64 *)EnabledPopup,
        ((unsigned __int16)*v4 << 16) | 3,
        *(_DWORD *)(gpsi + 4984LL) >> 3);
      ThreadUnlock1(v6, v5);
    }
  }
  return xxxMessageBeep(0LL);
}
