/*
 * XREFs of NtUserEnumDisplayMonitors @ 0x1C003EB60
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0025E70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     xxxEnumDisplayMonitors @ 0x1C003E730 (xxxEnumDisplayMonitors.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserEnumDisplayMonitors(HDC a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  __int128 v12; // [rsp+50h] [rbp-48h] BYREF

  v12 = 0uLL;
  EnterCrit(0, 1);
  v10 = 0;
  if ( gbVideoInitialized )
  {
    if ( a2 )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (int *)MmUserProbeAddress;
      v12 = *(_OWORD *)a2;
      a2 = (int *)&v12;
    }
    v10 = xxxEnumDisplayMonitors(a1, a2, a3, a4, 0);
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v10;
}
