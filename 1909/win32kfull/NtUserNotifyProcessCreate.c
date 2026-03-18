/*
 * XREFs of NtUserNotifyProcessCreate @ 0x1C001CF90
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxUserNotifyProcessCreate@@YAJKK_KK@Z @ 0x1C001D034 (-xxxUserNotifyProcessCreate@@YAJKK_KK@Z.c)
 */

__int64 __fastcall NtUserNotifyProcessCreate(signed int a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentProcess; // rax
  __int64 v14; // rcx
  unsigned int v15; // ebx

  if ( a4 )
  {
    EnterCrit(0LL, 1LL);
    CurrentProcess = PsGetCurrentProcess(v10, v9, v11, v12);
    v14 = gpepCSRSS;
    if ( CurrentProcess == gpepCSRSS )
      v15 = xxxUserNotifyProcessCreate(a1, a2, a3, a4);
    else
      v15 = -1073741790;
    UserSessionSwitchLeaveCrit(v14);
    return v15;
  }
  else
  {
    GiveForegroundActivateRight(a1);
    return 0LL;
  }
}
