/*
 * XREFs of NtUserFlashWindowEx @ 0x1C01ED810
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0014654 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxFlashWindow @ 0x1C006312C (xxxFlashWindow.c)
 */

__int64 __fastcall NtUserFlashWindowEx(__int128 *a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v12; // [rsp+40h] [rbp-58h]
  _QWORD v13[3]; // [rsp+58h] [rbp-40h] BYREF
  __int128 v14; // [rsp+70h] [rbp-28h]
  __int128 v15; // [rsp+80h] [rbp-18h]
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  if ( a1 + 2 < a1 || (unsigned __int64)(a1 + 2) > MmUserProbeAddress )
    a1 = (__int128 *)MmUserProbeAddress;
  v12 = a1[1];
  v14 = *a1;
  v15 = v12;
  v3 = 0;
  if ( ValidateHWNDND(*((HWND *)&v14 + 1), (struct tagWND **)&BugCheckParameter2)
    && (_DWORD)v14 == 32
    && (v12 & 0xFFFFFFF0) == 0 )
  {
    v13[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v13;
    v13[1] = BugCheckParameter2;
    _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 8));
    v3 = xxxFlashWindow(
           (unsigned __int64 *)BugCheckParameter2,
           (unsigned __int16)v12 | (WORD2(v12) << 16),
           SDWORD2(v12));
    ThreadUnlock1(v5, v4, v6);
  }
  else
  {
    UserSetLastError(87LL, v2);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v3;
}
