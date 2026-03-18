/*
 * XREFs of NtUserSetImeInfoEx @ 0x1C007B880
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     SetImeInfoEx @ 0x1C007B988 (SetImeInfoEx.c)
 *     _GetProcessWindowStation @ 0x1C007D1B0 (_GetProcessWindowStation.c)
 */

__int64 __fastcall NtUserSetImeInfoEx(_OWORD *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  _OWORD *v4; // rax
  __int64 v5; // rcx
  __int64 ProcessWindowStation; // rax
  __int64 v7; // rcx
  int v8; // ebx
  _BYTE v10[360]; // [rsp+30h] [rbp-168h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (*gpsi & 4) != 0 )
  {
    v4 = v10;
    v5 = 2LL;
    do
    {
      *v4 = *a1;
      v4[1] = a1[1];
      v4[2] = a1[2];
      v4[3] = a1[3];
      v4[4] = a1[4];
      v4[5] = a1[5];
      v4[6] = a1[6];
      v4 += 8;
      *(v4 - 1) = a1[7];
      a1 += 8;
      --v5;
    }
    while ( v5 );
    *v4 = *a1;
    v4[1] = a1[1];
    v4[2] = a1[2];
    v4[3] = a1[3];
    v4[4] = a1[4];
    v4[5] = a1[5];
    ProcessWindowStation = GetProcessWindowStation(0LL);
    v8 = SetImeInfoEx(ProcessWindowStation, v10);
  }
  else
  {
    UserSetLastError(120LL, gpsi, v2, v3);
    v8 = 0;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
