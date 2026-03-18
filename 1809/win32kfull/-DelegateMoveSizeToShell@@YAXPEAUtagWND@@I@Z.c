/*
 * XREFs of ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C01FB15C
 * Callers:
 *     xxxSysCommand @ 0x1C00DF300 (xxxSysCommand.c)
 * Callees:
 *     PostInputMessage @ 0x1C00D3F4C (PostInputMessage.c)
 *     INPUTDEST_FROM_PWND @ 0x1C013207C (INPUTDEST_FROM_PWND.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C0157414 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall DelegateMoveSizeToShell(struct tagWND *a1, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // r8
  BOOL v6; // edx
  __int64 v7; // rcx
  __int128 *v8; // rax
  _BYTE v9[8]; // [rsp+60h] [rbp-188h] BYREF
  _DWORD v10[46]; // [rsp+68h] [rbp-180h] BYREF
  __int128 v11; // [rsp+120h] [rbp-C8h]
  __int128 v12; // [rsp+130h] [rbp-B8h]
  __int128 v13; // [rsp+140h] [rbp-A8h]
  __int128 v14; // [rsp+150h] [rbp-98h]
  __int128 v15; // [rsp+160h] [rbp-88h]
  __int128 v16; // [rsp+170h] [rbp-78h]
  __int128 v17; // [rsp+180h] [rbp-68h]
  __int128 v18; // [rsp+190h] [rbp-58h]
  __int128 v19; // [rsp+1A0h] [rbp-48h]
  __int128 v20; // [rsp+1B0h] [rbp-38h]
  __int128 v21; // [rsp+1C0h] [rbp-28h]

  v3 = *((_QWORD *)a1 + 2);
  v4 = a2;
  v5 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 328LL);
  v6 = a2 && a2 != 10;
  v7 = *(_QWORD *)(v5 + 16);
  if ( *(_QWORD *)(v3 + 432) != *(_QWORD *)(v7 + 432) )
    *(_DWORD *)(v7 + 488) |= 0x20u;
  if ( v6 )
  {
    v8 = (__int128 *)INPUTDEST_FROM_PWND(v10, v5);
    v11 = *v8;
    v12 = v8[1];
    v13 = v8[2];
    v14 = v8[3];
    v15 = v8[4];
    v16 = v8[5];
    v17 = v8[6];
    v18 = v8[7];
    v19 = v8[8];
    v20 = v8[9];
    v21 = v8[10];
    ForceCapture(1LL);
    SetSystemInputSource(v9);
    PostInputMessage(
      *(_QWORD *)(v3 + 432),
      (__int64)a1,
      0x202u,
      0LL,
      (*(unsigned __int16 *)(v3 + 768) << 16) | *(unsigned __int16 *)(v3 + 764),
      0,
      0LL,
      0LL,
      0,
      v9,
      0LL,
      0LL);
  }
  anonymous_namespace_::NotifyShellSimplePayload(*(_QWORD *)a1, 4, v4, 0LL);
}
