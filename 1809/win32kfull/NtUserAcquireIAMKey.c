/*
 * XREFs of NtUserAcquireIAMKey @ 0x1C0134560
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserAcquireIAMKey(_QWORD *Address)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  EnterCrit(0LL, 1LL);
  v4 = *(_QWORD *)(gptiCurrent + 456LL);
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v5 + 176);
  v7 = 0;
  if ( v6
    && *(_QWORD *)(v5 + 168)
    && *(_QWORD *)(gptiCurrent + 424LL) == v6
    && !*(_QWORD *)(v4 + 288)
    && *(_DWORD *)(v4 + 272) )
  {
    ProbeForWrite(Address, 8uLL, 4u);
    *Address = *(_QWORD *)(v4 + 280);
    *(_DWORD *)(v4 + 272) = 0;
    *(_QWORD *)(v4 + 288) = gptiCurrent;
    v7 = 1;
  }
  else
  {
    UserSetLastError(5LL, v5, v2, v3);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v7;
}
