/*
 * XREFs of NtUserSetWindowCompositionTransition @ 0x1C0106E60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     DwmAsyncSetTransition @ 0x1C01070E0 (DwmAsyncSetTransition.c)
 *     UserSetLastStatus @ 0x1C010CF58 (UserSetLastStatus.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
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
  __int64 v13; // rcx
  __int64 v14; // rbx
  NTSTATUS v15; // edi
  __int64 v16; // rdx
  __int64 v17; // r8
  void *v18; // rax
  BOOL v19; // ebx
  __int128 v21; // [rsp+98h] [rbp-80h] BYREF
  __int128 v22; // [rsp+A8h] [rbp-70h] BYREF
  __int128 v23; // [rsp+B8h] [rbp-60h] BYREF
  __int128 v24; // [rsp+C8h] [rbp-50h] BYREF

  v10 = (__int128 *)a5;
  v11 = (__int128 *)a6;
  v12 = (__int128 *)a7;
  v21 = 0uLL;
  v22 = 0uLL;
  v23 = 0uLL;
  v24 = 0uLL;
  EnterCrit(0LL, 1LL);
  v14 = ValidateHwnd(a1);
  if ( v14 )
  {
    v15 = 0;
    if ( (!a4 || a3) && (!a6 || a5) )
    {
      if ( a4 )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (__int128 *)MmUserProbeAddress;
        v21 = *a4;
        a4 = &v21;
      }
      if ( a5 )
      {
        if ( a5 >= MmUserProbeAddress )
          v10 = (__int128 *)MmUserProbeAddress;
        v22 = *v10;
        v10 = &v22;
      }
      if ( a6 )
      {
        if ( a6 >= MmUserProbeAddress )
          v11 = (__int128 *)MmUserProbeAddress;
        v23 = *v11;
        v11 = &v23;
      }
      if ( a7 )
      {
        if ( a7 >= MmUserProbeAddress )
          v12 = (__int128 *)MmUserProbeAddress;
        v24 = *v12;
        v12 = &v24;
      }
      if ( (unsigned int)IsTopLevelWindow(v14) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(v14) )
        {
          v18 = (void *)ReferenceDwmApiPort(v13, v16, v17);
          v15 = DwmAsyncSetTransition(v18, (__int64)a4, (__int64)v10, (__int64)v11, (__int64)v12);
        }
      }
      else
      {
        v15 = -1073741816;
      }
    }
    else
    {
      v15 = -1073741811;
    }
    v19 = v15 >= 0;
    if ( v15 < 0 )
    {
      v19 = 0;
      UserSetLastStatus(v15);
    }
  }
  else
  {
    v19 = 0;
  }
  UserSessionSwitchLeaveCrit(v13);
  return v19;
}
