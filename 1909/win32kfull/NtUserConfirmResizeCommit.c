/*
 * XREFs of NtUserConfirmResizeCommit @ 0x1C022A0E0
 * Callers:
 *     <none>
 * Callees:
 *     GreConfirmWindowResizeCommit @ 0x1C026C4D0 (GreConfirmWindowResizeCommit.c)
 */

__int64 __fastcall NtUserConfirmResizeCommit(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rcx
  HWND *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+28h] [rbp-20h]
  __int64 v17; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v3 = ValidateHwnd(a1);
  v5 = (HWND *)v3;
  if ( v3 )
  {
    v4 = (*(_WORD *)(*(_QWORD *)(v3 + 40) + 42LL) & 0x3FFFu) - 669;
    if ( (v4 & 0xFFFFFFFD) != 0 )
    {
      v15 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v15;
      v16 = v3;
      HMLockObject(v3);
      CurrentProcess = PsGetCurrentProcess(v7, v6, v8, v9);
      if ( (unsigned int)IsProcessDwm(CurrentProcess) )
        v2 = GreConfirmWindowResizeCommit(*v5);
      ThreadUnlock1(v12, v11, v13);
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
