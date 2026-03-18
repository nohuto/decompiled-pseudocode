/*
 * XREFs of xxxFlashEnabledPopup @ 0x1C0240090
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0023C6C (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     xxxFlashWindow @ 0x1C0015284 (xxxFlashWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     DWP_GetEnabledPopup @ 0x1C015A578 (DWP_GetEnabledPopup.c)
 *     xxxMessageBeep @ 0x1C015BA50 (xxxMessageBeep.c)
 */

__int64 __fastcall xxxFlashEnabledPopup(_QWORD *a1)
{
  __int64 v1; // rdx
  unsigned __int64 *EnabledPopup; // rbx
  __int64 v3; // r8
  __int64 ThreadWin32Thread; // rax
  _DWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 *v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( (HIDWORD(gSoundSentry) & 1) == 0 )
  {
    EnabledPopup = DWP_GetEnabledPopup(a1);
    if ( EnabledPopup )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1, v3);
      v10 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v10;
      v11 = EnabledPopup;
      HMLockObject(EnabledPopup);
      v5 = (_DWORD *)UPDWORDPointer(8196LL);
      xxxFlashWindow(EnabledPopup, ((unsigned __int16)*v5 << 16) | 3, *(_DWORD *)(gpsi + 4984LL) >> 3);
      ThreadUnlock1(v7, v6, v8);
    }
  }
  return xxxMessageBeep(0LL);
}
