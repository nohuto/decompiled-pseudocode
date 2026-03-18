/*
 * XREFs of NtUserSetWindowFNID @ 0x1C0048540
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0048A98 (IsWindowBeingDestroyed.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetWindowFNID(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rcx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5);
    v6 = *(_QWORD *)(v8 + 16);
    if ( *(_QWORD *)(v6 + 416) != CurrentProcessWin32Process )
    {
      v11 = 5LL;
      goto LABEL_12;
    }
    if ( a2 == 0x4000 )
    {
LABEL_8:
      v7 = 1LL;
      *(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) |= a2;
      goto LABEL_9;
    }
    if ( !(unsigned int)IsWindowBeingDestroyed(v8) )
    {
      if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
      {
        if ( a2 == 681 )
        {
LABEL_7:
          v6 = *(unsigned __int16 *)(*(_QWORD *)(v8 + 40) + 42LL);
          if ( (v6 & 0xFFFF3FFF) == 0 )
            goto LABEL_8;
        }
      }
      else if ( (unsigned __int16)(a2 - 673) <= 9u )
      {
        goto LABEL_7;
      }
    }
    v11 = 87LL;
LABEL_12:
    UserSetLastError(v11);
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
