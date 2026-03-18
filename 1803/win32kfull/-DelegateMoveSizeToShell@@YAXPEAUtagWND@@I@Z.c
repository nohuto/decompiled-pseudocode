/*
 * XREFs of ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C01D64DC
 * Callers:
 *     xxxSysCommand @ 0x1C00F50F8 (xxxSysCommand.c)
 * Callees:
 *     PostInputMessage @ 0x1C0019B84 (PostInputMessage.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00602A4 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     INPUTDEST_FROM_PWND @ 0x1C00E78F0 (INPUTDEST_FROM_PWND.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall DelegateMoveSizeToShell(struct tagWND *a1, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // r8
  BOOL v6; // edx
  __int64 v7; // rcx
  __int128 *v8; // rax
  __int64 v9; // rax
  _BYTE v10[8]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v11[44]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v12[7]; // [rsp+118h] [rbp+18h] BYREF
  __int128 v13; // [rsp+150h] [rbp+50h]
  __int128 v14; // [rsp+160h] [rbp+60h]
  __int128 v15; // [rsp+170h] [rbp+70h]
  __int128 v16; // [rsp+180h] [rbp+80h]
  __int128 v17; // [rsp+190h] [rbp+90h]
  __int128 v18; // [rsp+1A0h] [rbp+A0h]
  __int128 v19; // [rsp+1B0h] [rbp+B0h]
  __int128 v20; // [rsp+1C0h] [rbp+C0h]
  __int128 v21; // [rsp+1D0h] [rbp+D0h]
  __int128 v22; // [rsp+1E0h] [rbp+E0h]
  __int128 v23; // [rsp+1F0h] [rbp+F0h]

  v3 = *((_QWORD *)a1 + 2);
  v4 = a2;
  v5 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 328LL);
  v6 = a2 && a2 != 10;
  v7 = *(_QWORD *)(v5 + 16);
  if ( *(_QWORD *)(v3 + 424) != *(_QWORD *)(v7 + 424) )
    *(_DWORD *)(v7 + 480) |= 0x20u;
  if ( v6 )
  {
    v8 = (__int128 *)INPUTDEST_FROM_PWND(v11, v5);
    v13 = *v8;
    v14 = v8[1];
    v15 = v8[2];
    v16 = v8[3];
    v17 = v8[4];
    v18 = v8[5];
    v19 = v8[6];
    v20 = v8[7];
    v21 = v8[8];
    v22 = v8[9];
    v23 = v8[10];
    ForceCapture(1LL);
    SetSystemInputSource(v10);
    PostInputMessage(
      *(_QWORD *)(v3 + 424),
      (__int64)a1,
      0x202u,
      0LL,
      (*(unsigned __int16 *)(v3 + 752) << 16) | *(unsigned __int16 *)(v3 + 748),
      0,
      0LL,
      0LL,
      0,
      v10,
      0LL,
      0LL);
  }
  memset(v12, 0, sizeof(v12));
  v9 = *(_QWORD *)a1;
  v12[3] = 0LL;
  v12[0] = v9;
  LODWORD(v12[1]) = 4;
  v12[2] = v4;
  xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v12);
}
