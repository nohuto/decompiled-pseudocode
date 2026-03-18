/*
 * XREFs of NtUserGetWindowBand @ 0x1C00E1B90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetWindowBand(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  _DWORD *v9; // rdx

  EnterSharedCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = 0;
  if ( v6 )
  {
    if ( a2 )
    {
      v9 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v9 = (_DWORD *)MmUserProbeAddress;
      *v9 = *v9;
      v5 = *(unsigned int *)(*(_QWORD *)(v6 + 40) + 236LL);
      *a2 = v5;
      v8 = 1;
    }
    else
    {
      UserSetLastError(87LL, v4, v6, v7);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v8;
}
