/*
 * XREFs of NtUserGetInputContainerId @ 0x1C0118080
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0025E70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     isChildPartition @ 0x1C00323E8 (isChildPartition.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserGetInputContainerId(unsigned __int128 *a1, _DWORD *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  ULONG64 v9; // rcx
  int v10; // eax
  _DWORD v12[12]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int128 v13; // [rsp+50h] [rbp-38h]
  unsigned __int128 v14; // [rsp+60h] [rbp-28h] BYREF

  EnterCrit(0, 1);
  v14 = 0uLL;
  v4 = 0;
  v12[0] = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
  if ( isChildPartition() )
    goto LABEL_2;
  if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
    a1 = (unsigned __int128 *)MmUserProbeAddress;
  v13 = *a1;
  v14 = v13;
  if ( gpfnIVResolveContainerId )
    v10 = gpfnIVResolveContainerId((const struct _GUID *)&v14, (struct CONTAINER_ID *)v12);
  else
    v10 = -1073741637;
  if ( v10 < 0 )
  {
    v8 = 87LL;
    goto LABEL_3;
  }
  if ( (*(_WORD *)(CurrentProcessWin32Process + 1080) || *(_WORD *)(CurrentProcessWin32Process + 1082))
    && *(_DWORD *)(CurrentProcessWin32Process + 1080) != v12[0] )
  {
LABEL_2:
    v8 = 5LL;
LABEL_3:
    UserSetLastError(v8, v7);
    goto LABEL_18;
  }
  v9 = MmUserProbeAddress;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_DWORD *)MmUserProbeAddress;
  *a2 = v12[0];
  *(_DWORD *)(CurrentProcessWin32Process + 1080) = v12[0];
  v4 = 1;
LABEL_18:
  UserSessionSwitchLeaveCrit(v9, v7);
  return v4;
}
