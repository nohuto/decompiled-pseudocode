/*
 * XREFs of xxxFlashEnabledPopup @ 0x1C02406B0
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C002E54C (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxFlashWindow @ 0x1C0083E54 (xxxFlashWindow.c)
 *     DWP_GetEnabledPopup @ 0x1C01595C8 (DWP_GetEnabledPopup.c)
 *     xxxMessageBeep @ 0x1C015AAA0 (xxxMessageBeep.c)
 */

__int64 __fastcall xxxFlashEnabledPopup(_QWORD *a1)
{
  __int64 v1; // rdx
  unsigned __int64 *EnabledPopup; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 ThreadWin32Thread; // rax
  _DWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 *v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( (HIDWORD(gSoundSentry) & 1) == 0 )
  {
    EnabledPopup = DWP_GetEnabledPopup(a1);
    if ( EnabledPopup )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1, v3, v4);
      v11 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v11;
      v12 = EnabledPopup;
      HMLockObject(EnabledPopup);
      v6 = (_DWORD *)UPDWORDPointer(8196LL);
      xxxFlashWindow(EnabledPopup, ((unsigned __int16)*v6 << 16) | 3, *(_DWORD *)(gpsi + 4984LL) >> 3);
      ThreadUnlock1(v8, v7, v9);
    }
  }
  return xxxMessageBeep(0LL);
}
