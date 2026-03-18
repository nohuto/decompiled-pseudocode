/*
 * XREFs of NtUserGetProp @ 0x1C00E99A0
 * Callers:
 *     <none>
 * Callees:
 *     GetSharedPropForFilteredProcesses @ 0x1C00E9AD8 (GetSharedPropForFilteredProcesses.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetProp(__int64 a1, unsigned __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 Prop; // rbx
  __int64 v12; // r14
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = v4;
  if ( v4 )
  {
    Prop = RealGetProp(*(_QWORD *)(v4 + 120), a2, 0LL);
    if ( !Prop )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 424LL);
      if ( v12 != PsGetCurrentProcessWin32Process(v6) && (*(_DWORD *)(v12 + 820) & 0x1000000) != 0 )
      {
        if ( a2 == 0xA914 )
        {
          Prop = 0LL;
        }
        else
        {
          KeStackAttachProcess(*(PRKPROCESS *)v12, &ApcState);
          Prop = GetSharedPropForFilteredProcesses(v9, a2);
          KeUnstackDetachProcess(&ApcState);
        }
      }
    }
  }
  else
  {
    Prop = 0LL;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return Prop;
}
