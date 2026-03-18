/*
 * XREFs of NtUserSetImeInfoEx @ 0x1C00ED720
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     SetImeInfoEx @ 0x1C00ED828 (SetImeInfoEx.c)
 *     _GetProcessWindowStation @ 0x1C00EEB20 (_GetProcessWindowStation.c)
 */

__int64 __fastcall NtUserSetImeInfoEx(_OWORD *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  _OWORD *v4; // rax
  __int64 v5; // rcx
  __int64 ProcessWindowStation; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE v13[360]; // [rsp+30h] [rbp-168h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (*gpsi & 4) != 0 )
  {
    v4 = v13;
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
    v9 = SetImeInfoEx(ProcessWindowStation, v13);
  }
  else
  {
    UserSetLastError(120LL, gpsi, v2, v3);
    v9 = 0;
  }
  UserSessionSwitchLeaveCrit(v8, v7, v10, v11);
  return v9;
}
