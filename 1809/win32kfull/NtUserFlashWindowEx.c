/*
 * XREFs of NtUserFlashWindowEx @ 0x1C0213BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C006E0A0 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxFlashWindow @ 0x1C00DE38C (xxxFlashWindow.c)
 */

__int64 __fastcall NtUserFlashWindowEx(__int128 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v13; // [rsp+40h] [rbp-58h]
  _QWORD v14[3]; // [rsp+58h] [rbp-40h] BYREF
  __int128 v15; // [rsp+70h] [rbp-28h]
  __int128 v16; // [rsp+80h] [rbp-18h]
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  if ( a1 + 2 < a1 || (unsigned __int64)(a1 + 2) > MmUserProbeAddress )
    a1 = (__int128 *)MmUserProbeAddress;
  v13 = a1[1];
  v15 = *a1;
  v16 = v13;
  v5 = 0;
  if ( ValidateHWNDND(*((HWND *)&v15 + 1), (struct tagWND **)&BugCheckParameter2)
    && (_DWORD)v15 == 32
    && (v13 & 0xFFFFFFF0) == 0 )
  {
    v14[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v14;
    v14[1] = BugCheckParameter2;
    _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 8));
    v5 = xxxFlashWindow((unsigned __int64 *)BugCheckParameter2, (unsigned __int16)v13 | (WORD2(v13) << 16), DWORD2(v13));
    ThreadUnlock1(v7, v6);
  }
  else
  {
    UserSetLastError(87LL, v2, v3, v4);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v5;
}
