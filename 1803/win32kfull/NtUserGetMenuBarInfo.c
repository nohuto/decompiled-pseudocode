/*
 * XREFs of NtUserGetMenuBarInfo @ 0x1C00C34F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxGetMenuBarInfo @ 0x1C00C36A8 (xxxGetMenuBarInfo.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall NtUserGetMenuBarInfo(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  ULONG_PTR v10; // r14
  _BYTE *v11; // rdx
  int MenuBarInfo; // edi
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _QWORD v20[9]; // [rsp+48h] [rbp-80h] BYREF

  memset(&v20[3], 0, 0x30uLL);
  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    v20[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v20;
    v20[1] = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    if ( (a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = (_BYTE *)a4;
    if ( a4 >= MmUserProbeAddress )
      v11 = (_BYTE *)MmUserProbeAddress;
    *v11 = *v11;
    v11[47] = v11[47];
    LODWORD(v20[3]) = *(_DWORD *)a4;
    MenuBarInfo = xxxGetMenuBarInfo(v10);
    v15 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13) + 472);
    if ( (*(_BYTE *)(v15 + 224) & 1) == 0 )
    {
      v15 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14) + 472);
      if ( (*(_BYTE *)(v15 + 224) & 0x20) == 0 )
      {
        v17 = *(_DWORD *)(*(_QWORD *)(v10 + 40) + 288LL);
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v15, v14);
        v15 = 511LL;
        if ( (((unsigned __int16)(v17 >> 8) ^ (unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8)) & 0x1FF) != 0 )
          TransformRectBetweenCoordinateSpaces((char *)&v20[3] + 4, (char *)&v20[3] + 4, 0LL, v10);
      }
    }
    if ( MenuBarInfo )
    {
      HIDWORD(v20[5]) = 0;
      HIDWORD(v20[8]) = 0;
      *(_OWORD *)a4 = *(_OWORD *)&v20[3];
      *(_OWORD *)(a4 + 16) = *(_OWORD *)&v20[5];
      *(_OWORD *)(a4 + 32) = *(_OWORD *)&v20[7];
    }
    ThreadUnlock1(v15, v14, v16);
  }
  else
  {
    MenuBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return MenuBarInfo;
}
