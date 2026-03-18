/*
 * XREFs of NtUserEnumDisplayMonitors @ 0x1C0038FB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     xxxEnumDisplayMonitors @ 0x1C0039060 (xxxEnumDisplayMonitors.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserEnumDisplayMonitors(HDC a1, __int128 *a2)
{
  __int128 *v2; // rdi
  int v4; // ebx
  _BYTE v6[24]; // [rsp+30h] [rbp-68h] BYREF
  __int128 *v7; // [rsp+48h] [rbp-50h]
  __int128 v8; // [rsp+58h] [rbp-40h] BYREF

  v2 = a2;
  v7 = a2;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v6);
  v4 = 0;
  if ( gbVideoInitialized )
  {
    if ( v2 )
    {
      if ( (unsigned __int64)v2 >= MmUserProbeAddress )
        v2 = (__int128 *)MmUserProbeAddress;
      v8 = *v2;
      v7 = &v8;
    }
    v4 = xxxEnumDisplayMonitors(a1, 0);
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
