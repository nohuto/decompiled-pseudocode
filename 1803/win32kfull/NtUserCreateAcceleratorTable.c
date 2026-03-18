/*
 * XREFs of NtUserCreateAcceleratorTable @ 0x1C01010D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _CreateAcceleratorTable @ 0x1C0101178 (_CreateAcceleratorTable.c)
 */

__int64 __fastcall NtUserCreateAcceleratorTable(void *Src, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 CurrentProcessWow64Process; // rax
  __int64 *AcceleratorTable; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx

  v2 = a2;
  EnterCrit(0LL, 1LL);
  if ( (unsigned int)(v2 - 1) > 0x7FFE )
  {
    v14 = 0LL;
    UserSetLastError(87LL, v4);
  }
  else
  {
    if ( v2 > 0x2AAAAAAAAAAAAAAALL )
      ExRaiseAccessViolation();
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5, v4, v6, v7);
    ProbeForRead(Src, 6 * v2, CurrentProcessWow64Process != 0 ? 1 : 4);
    AcceleratorTable = (__int64 *)CreateAcceleratorTable(Src, (unsigned int)(6 * v2));
    v14 = 0LL;
    if ( AcceleratorTable )
      v14 = *AcceleratorTable;
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v14;
}
