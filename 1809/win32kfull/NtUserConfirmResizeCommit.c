/*
 * XREFs of NtUserConfirmResizeCommit @ 0x1C02129A0
 * Callers:
 *     <none>
 * Callees:
 *     GreConfirmWindowResizeCommit @ 0x1C0253500 (GreConfirmWindowResizeCommit.c)
 */

__int64 __fastcall NtUserConfirmResizeCommit(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  HWND *v8; // rbx
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  EnterCrit(0LL, 1LL);
  v3 = ValidateHwnd(a1);
  v8 = (HWND *)v3;
  if ( v3 )
  {
    v5 = (*(_WORD *)(*(_QWORD *)(v3 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v5 & 0xFFFFFFFD) != 0 )
    {
      v13[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v13;
      v13[1] = v3;
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      CurrentProcess = PsGetCurrentProcess(gptiCurrent, v4, v6, v7);
      if ( (unsigned int)IsProcessDwm(CurrentProcess) )
        v2 = GreConfirmWindowResizeCommit(*v8);
      ThreadUnlock1(v11, v10);
    }
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v2;
}
