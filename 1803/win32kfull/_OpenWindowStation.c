/*
 * XREFs of _OpenWindowStation @ 0x1C00B9158
 * Callers:
 *     NtUserOpenWindowStation @ 0x1C00B8220 (NtUserOpenWindowStation.c)
 *     xxxResolveDesktop @ 0x1C00B8640 (xxxResolveDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01B32EC (xxxResolveDesktopForWOW.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall OpenWindowStation(__int64 a1, int a2, __int64 a3)
{
  NTSTATUS v3; // eax
  ULONG v5; // eax
  __int64 v6; // rdx
  __int64 v7; // [rsp+78h] [rbp+20h] BYREF

  LOBYTE(a3) = 1;
  v3 = ObOpenObjectByName(a1, ExWindowStationObjectType, a3, 0LL, a2, 0LL, &v7);
  if ( v3 < 0 )
  {
    v5 = RtlNtStatusToDosError(v3);
    UserSetLastError(v5, v6);
    return 0LL;
  }
  return v7;
}
