/*
 * XREFs of _CloseWindowStation @ 0x1C00DD12C
 * Callers:
 *     NtUserCloseWindowStation @ 0x1C00DD090 (NtUserCloseWindowStation.c)
 * Callees:
 *     _GetProcessWindowStation @ 0x1C00DD4C0 (_GetProcessWindowStation.c)
 */

NTSTATUS __fastcall CloseWindowStation(unsigned __int64 Handle)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  GetProcessWindowStation(&v3);
  if ( ((Handle ^ v3) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    return ObCloseHandle((HANDLE)Handle, 1);
  else
    return -2147483631;
}
