/*
 * XREFs of NtUserFlashWindowEx @ 0x1C015D940
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C002DD40 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     xxxFlashWindow @ 0x1C0083E54 (xxxFlashWindow.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall NtUserFlashWindowEx(_OWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ebx
  unsigned __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v12; // [rsp+30h] [rbp-68h] BYREF
  struct tagWND *v13; // [rsp+38h] [rbp-60h]
  __int64 v14; // [rsp+40h] [rbp-58h]
  HWND v15[2]; // [rsp+48h] [rbp-50h]
  __int128 v16; // [rsp+58h] [rbp-40h]
  _OWORD v17[2]; // [rsp+70h] [rbp-28h] BYREF
  struct tagWND *v18; // [rsp+A8h] [rbp+10h] BYREF

  memset(v17, 0, sizeof(v17));
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a1 + 2 < a1 || (unsigned __int64)(a1 + 2) > MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v15 = *a1;
  v16 = a1[1];
  v17[0] = *(_OWORD *)v15;
  v17[1] = v16;
  v5 = 0;
  if ( ValidateHWNDND(v15[1], &v18) && LODWORD(v15[0]) == 32 && (v16 & 0xFFFFFFF0) == 0 )
  {
    v12 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v12;
    v6 = (unsigned __int64 *)v18;
    v13 = v18;
    HMLockObject(v18);
    v5 = xxxFlashWindow(v6, (unsigned __int16)v16 | (WORD2(v16) << 16), SDWORD2(v16));
    ThreadUnlock1(v8, v7, v9);
  }
  else
  {
    UserSetLastError(87LL, v2, v3, v4);
  }
  UserSessionSwitchLeaveCrit(v10);
  return v5;
}
