/*
 * XREFs of NtUserGetImeInfoEx @ 0x1C00B7EC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     GetImeInfoEx @ 0x1C00B80A4 (GetImeInfoEx.c)
 *     _GetProcessWindowStation @ 0x1C00B81E0 (_GetProcessWindowStation.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetImeInfoEx(_OWORD *a1, unsigned int a2)
{
  __int64 v4; // rdx
  _BYTE *v5; // rdx
  _OWORD *v6; // rax
  _OWORD *v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 ProcessWindowStation; // rax
  __int64 v11; // rdx
  int ImeInfo; // edi
  __int64 v13; // r8
  __int64 v14; // r9
  _OWORD *v15; // rcx
  _BYTE v17[352]; // [rsp+40h] [rbp-178h] BYREF

  EnterSharedCrit(0LL, 1LL);
  if ( (*gpsi & 4) != 0 )
  {
    v5 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v5 = (_BYTE *)MmUserProbeAddress;
    *v5 = *v5;
    v5[351] = v5[351];
    v6 = a1;
    v7 = v17;
    v8 = 2LL;
    v9 = 2LL;
    do
    {
      *v7 = *v6;
      v7[1] = v6[1];
      v7[2] = v6[2];
      v7[3] = v6[3];
      v7[4] = v6[4];
      v7[5] = v6[5];
      v7[6] = v6[6];
      v7 += 8;
      *(v7 - 1) = v6[7];
      v6 += 8;
      --v9;
    }
    while ( v9 );
    *v7 = *v6;
    v7[1] = v6[1];
    v7[2] = v6[2];
    v7[3] = v6[3];
    v7[4] = v6[4];
    v7[5] = v6[5];
    ProcessWindowStation = GetProcessWindowStation(0LL);
    ImeInfo = GetImeInfoEx(ProcessWindowStation, v17, a2);
    v15 = v17;
    do
    {
      *a1 = *v15;
      a1[1] = v15[1];
      a1[2] = v15[2];
      a1[3] = v15[3];
      a1[4] = v15[4];
      a1[5] = v15[5];
      a1[6] = v15[6];
      a1 += 8;
      *(a1 - 1) = v15[7];
      v15 += 8;
      --v8;
    }
    while ( v8 );
    *a1 = *v15;
    a1[1] = v15[1];
    a1[2] = v15[2];
    a1[3] = v15[3];
    a1[4] = v15[4];
    a1[5] = v15[5];
  }
  else
  {
    UserSetLastError(120LL, v4);
    ImeInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v15, v11, v13, v14);
  return ImeInfo;
}
