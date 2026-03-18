/*
 * XREFs of NtUserDisableThreadIme @ 0x1C0125EF0
 * Callers:
 *     <none>
 * Callees:
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 */

__int64 __fastcall NtUserDisableThreadIme(unsigned int a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 i; // rdi
  __int64 *v9; // rax
  __int64 *v10; // rax

  EnterCrit(0LL, 1LL);
  v4 = gpsi;
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120LL, gpsi, v2, v3);
    v6 = 0LL;
    goto LABEL_3;
  }
  v6 = 0LL;
  if ( a1 == -1 )
  {
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) |= 0x800000u;
    for ( i = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 328LL); i; i = *(_QWORD *)(i + 664) )
    {
      *(_DWORD *)(i + 488) |= 0x2000000u;
      if ( i != gptiCurrent )
      {
        v9 = *(__int64 **)(i + 784);
        if ( v9 )
          PostEventMessageEx((struct tagTHREADINFO *)i, *(_QWORD *)(i + 432), 8u, 0LL, 0, *v9, 0LL, 0LL);
      }
    }
LABEL_11:
    v5 = *(_QWORD *)(gptiCurrent + 784LL);
    if ( v5 )
      xxxDestroyWindow((volatile signed __int32 *)v5);
LABEL_13:
    v6 = 1LL;
    goto LABEL_3;
  }
  if ( !a1 )
  {
    *(_DWORD *)(gptiCurrent + 488LL) |= 0x2000000u;
    goto LABEL_11;
  }
  v5 = PtiFromThreadId(a1);
  if ( v5 && *(_QWORD *)(v5 + 424) == *(_QWORD *)(gptiCurrent + 424LL) )
  {
    *(_DWORD *)(v5 + 488) |= 0x2000000u;
    v10 = *(__int64 **)(v5 + 784);
    if ( v10 )
      PostEventMessageEx((struct tagTHREADINFO *)v5, *(_QWORD *)(v5 + 432), 8u, 0LL, 0, *v10, 0LL, 0LL);
    goto LABEL_13;
  }
LABEL_3:
  UserSessionSwitchLeaveCrit(v5, v4, v2, v3);
  return v6;
}
