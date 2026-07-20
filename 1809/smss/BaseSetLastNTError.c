/*
 * XREFs of BaseSetLastNTError @ 0x14001008C
 * Callers:
 *     BasepGetFileNameInformation @ 0x14000DF28 (BasepGetFileNameInformation.c)
 *     BasepGetObjectNTName @ 0x14000E02C (BasepGetObjectNTName.c)
 *     DeviceIoControl @ 0x14000E470 (DeviceIoControl.c)
 *     GetFileAttributesW @ 0x14000EA04 (GetFileAttributesW.c)
 *     CreateFileInternal @ 0x14000EB2C (CreateFileInternal.c)
 *     SetErrorMode @ 0x14000F0C0 (SetErrorMode.c)
 *     CloseHandle @ 0x14000F15C (CloseHandle.c)
 *     SetStdHandleEx @ 0x14000F8C0 (SetStdHandleEx.c)
 *     FindClose @ 0x14000FA40 (FindClose.c)
 *     FindFirstFileExW @ 0x14000FB4C (FindFirstFileExW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BaseSetLastNTError(NTSTATUS a1)
{
  ULONG v1; // ebx

  v1 = RtlNtStatusToDosError(a1);
  RtlSetLastWin32Error(v1);
  return v1;
}
