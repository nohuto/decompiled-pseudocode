/*
 * XREFs of NtUserEnumDisplayMonitors @ 0x1C0057380
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     xxxEnumDisplayMonitors @ 0x1C0057430 (xxxEnumDisplayMonitors.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserEnumDisplayMonitors(HDC a1, __int128 *a2)
{
  __int128 *v2; // rdi
  __int64 v4; // rcx
  int v5; // ebx
  _BYTE v7[24]; // [rsp+30h] [rbp-68h] BYREF
  __int128 *v8; // [rsp+48h] [rbp-50h]
  __int128 v9; // [rsp+58h] [rbp-40h] BYREF

  v2 = a2;
  v8 = a2;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v7);
  v5 = 0;
  if ( gbVideoInitialized )
  {
    if ( v2 )
    {
      if ( (unsigned __int64)v2 >= MmUserProbeAddress )
        v2 = (__int128 *)MmUserProbeAddress;
      v9 = *v2;
      v8 = &v9;
    }
    v5 = xxxEnumDisplayMonitors(a1, 0);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
