/*
 * XREFs of NtUserCreateAcceleratorTable @ 0x1C01241E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _CreateAcceleratorTable @ 0x1C01242A4 (_CreateAcceleratorTable.c)
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
  __int64 v10; // rcx
  __int64 v11; // rbx

  v2 = a2;
  EnterCrit(0LL, 1LL);
  if ( (unsigned int)(v2 - 1) > 0x7FFE )
  {
    v11 = 0LL;
    UserSetLastError(87LL, v4, v6, v7);
  }
  else
  {
    if ( v2 > 0x2AAAAAAAAAAAAAAALL )
      ExRaiseAccessViolation();
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5);
    ProbeForRead(Src, 6 * v2, CurrentProcessWow64Process != 0 ? 1 : 4);
    AcceleratorTable = (__int64 *)CreateAcceleratorTable(Src, (unsigned int)(6 * v2));
    v11 = 0LL;
    if ( AcceleratorTable )
      v11 = *AcceleratorTable;
  }
  UserSessionSwitchLeaveCrit(v10);
  return v11;
}
