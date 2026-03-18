/*
 * XREFs of NtUserGetImeInfoEx @ 0x1C00EE7F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     GetImeInfoEx @ 0x1C00EE9E0 (GetImeInfoEx.c)
 *     _GetProcessWindowStation @ 0x1C00EEB20 (_GetProcessWindowStation.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetImeInfoEx(_OWORD *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r9
  _BYTE *v6; // rdx
  _OWORD *v7; // rax
  _OWORD *v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 ProcessWindowStation; // rax
  __int64 v12; // rdx
  int ImeInfo; // edi
  __int64 v14; // r8
  __int64 v15; // r9
  _OWORD *v16; // rcx
  _BYTE v18[352]; // [rsp+40h] [rbp-178h] BYREF

  EnterSharedCrit(0LL, 1LL);
  if ( (*gpsi & 4) != 0 )
  {
    v6 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v6 = (_BYTE *)MmUserProbeAddress;
    *v6 = *v6;
    v6[351] = v6[351];
    v7 = a1;
    v8 = v18;
    v9 = 2LL;
    v10 = 2LL;
    do
    {
      *v8 = *v7;
      v8[1] = v7[1];
      v8[2] = v7[2];
      v8[3] = v7[3];
      v8[4] = v7[4];
      v8[5] = v7[5];
      v8[6] = v7[6];
      v8 += 8;
      *(v8 - 1) = v7[7];
      v7 += 8;
      --v10;
    }
    while ( v10 );
    *v8 = *v7;
    v8[1] = v7[1];
    v8[2] = v7[2];
    v8[3] = v7[3];
    v8[4] = v7[4];
    v8[5] = v7[5];
    ProcessWindowStation = GetProcessWindowStation(0LL);
    ImeInfo = GetImeInfoEx(ProcessWindowStation, v18, a2);
    v16 = v18;
    do
    {
      *a1 = *v16;
      a1[1] = v16[1];
      a1[2] = v16[2];
      a1[3] = v16[3];
      a1[4] = v16[4];
      a1[5] = v16[5];
      a1[6] = v16[6];
      a1 += 8;
      *(a1 - 1) = v16[7];
      v16 += 8;
      --v9;
    }
    while ( v9 );
    *a1 = *v16;
    a1[1] = v16[1];
    a1[2] = v16[2];
    a1[3] = v16[3];
    a1[4] = v16[4];
    a1[5] = v16[5];
  }
  else
  {
    UserSetLastError(120LL, v4, gpsi, v5);
    ImeInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v16, v12, v14, v15);
  return ImeInfo;
}
