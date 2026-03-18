/*
 * XREFs of NtUserSetWindowCompositionTransition @ 0x1C0103F70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000AD50 (UserSetLastStatus.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     DwmAsyncSetTransition @ 0x1C010419C (DwmAsyncSetTransition.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

_BOOL8 __fastcall NtUserSetWindowCompositionTransition(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        ULONG64 a5,
        ULONG64 a6,
        ULONG64 a7)
{
  __int128 *v10; // r15
  __int128 *v11; // r12
  __int128 *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  NTSTATUS v18; // edi
  void *v19; // rax
  BOOL v20; // ebx
  __int128 v22; // [rsp+98h] [rbp-80h] BYREF
  __int128 v23; // [rsp+A8h] [rbp-70h] BYREF
  __int128 v24; // [rsp+B8h] [rbp-60h] BYREF
  __int128 v25; // [rsp+C8h] [rbp-50h] BYREF

  v10 = (__int128 *)a5;
  v11 = (__int128 *)a6;
  v12 = (__int128 *)a7;
  EnterCrit(0LL, 1LL);
  v15 = ValidateHwnd(a1);
  if ( v15 )
  {
    v18 = 0;
    if ( (!a4 || a3) && (!a6 || a5) )
    {
      if ( a4 )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (__int128 *)MmUserProbeAddress;
        v22 = *a4;
        a4 = &v22;
      }
      if ( a5 )
      {
        if ( a5 >= MmUserProbeAddress )
          v10 = (__int128 *)MmUserProbeAddress;
        v23 = *v10;
        v10 = &v23;
      }
      if ( a6 )
      {
        if ( a6 >= MmUserProbeAddress )
          v11 = (__int128 *)MmUserProbeAddress;
        v24 = *v11;
        v11 = &v24;
      }
      if ( a7 )
      {
        if ( a7 >= MmUserProbeAddress )
          v12 = (__int128 *)MmUserProbeAddress;
        v25 = *v12;
        v12 = &v25;
      }
      if ( (unsigned int)IsTopLevelWindow(v15) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(v15) )
        {
          v19 = (void *)ReferenceDwmApiPort(v14, v13, v16);
          v18 = DwmAsyncSetTransition(v19, (__int64)a4, (__int64)v10, (__int64)v11, (__int64)v12);
        }
      }
      else
      {
        v18 = -1073741816;
      }
    }
    else
    {
      v18 = -1073741811;
    }
    v20 = v18 >= 0;
    if ( v18 < 0 )
    {
      v20 = 0;
      UserSetLastStatus(v18, 1);
    }
  }
  else
  {
    v20 = 0;
  }
  UserSessionSwitchLeaveCrit(v14, v13, v16, v17);
  return v20;
}
