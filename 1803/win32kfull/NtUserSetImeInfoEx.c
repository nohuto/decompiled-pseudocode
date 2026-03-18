/*
 * XREFs of NtUserSetImeInfoEx @ 0x1C00B6E60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     SetImeInfoEx @ 0x1C00B6F5C (SetImeInfoEx.c)
 *     _GetProcessWindowStation @ 0x1C00B81E0 (_GetProcessWindowStation.c)
 */

__int64 __fastcall NtUserSetImeInfoEx(_OWORD *a1)
{
  _OWORD *v2; // rax
  __int64 v3; // rcx
  __int64 ProcessWindowStation; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE v11[360]; // [rsp+30h] [rbp-168h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (*gpsi & 4) != 0 )
  {
    v2 = v11;
    v3 = 2LL;
    do
    {
      *v2 = *a1;
      v2[1] = a1[1];
      v2[2] = a1[2];
      v2[3] = a1[3];
      v2[4] = a1[4];
      v2[5] = a1[5];
      v2[6] = a1[6];
      v2 += 8;
      *(v2 - 1) = a1[7];
      a1 += 8;
      --v3;
    }
    while ( v3 );
    *v2 = *a1;
    v2[1] = a1[1];
    v2[2] = a1[2];
    v2[3] = a1[3];
    v2[4] = a1[4];
    v2[5] = a1[5];
    ProcessWindowStation = GetProcessWindowStation(0LL);
    v7 = SetImeInfoEx(ProcessWindowStation, v11);
  }
  else
  {
    UserSetLastError(120LL, gpsi);
    v7 = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return v7;
}
