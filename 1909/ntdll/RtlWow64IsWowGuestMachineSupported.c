/*
 * XREFs of RtlWow64IsWowGuestMachineSupported @ 0x18007F2B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtQuerySystemInformationEx @ 0x18009F9E0 (NtQuerySystemInformationEx.c)
 *     _alloca_probe @ 0x1800A1EE0 (_alloca_probe.c)
 */

NTSTATUS __cdecl RtlWow64IsWowGuestMachineSupported(USHORT NativeMachine, PBOOLEAN IsWowGuestMachineSupported)
{
  BOOLEAN v2; // bl
  NTSTATUS v5; // eax
  int v6; // ecx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  void *v10; // rsp
  ULONG v11; // eax
  __int64 v12; // r8
  int v13; // edx
  ULONG SystemInformation[2]; // [rsp+30h] [rbp+0h] BYREF
  __int64 InputBuffer; // [rsp+38h] [rbp+8h] BYREF

  v2 = 0;
  InputBuffer = 0LL;
  v5 = NtQuerySystemInformationEx(SystemSupportedProcessorArchitectures, &InputBuffer, 8u, 0LL, 0, SystemInformation);
  v6 = v5;
  if ( v5 == -1073741789 )
  {
    v7 = SystemInformation[0] + 15LL;
    if ( v7 <= SystemInformation[0] )
      v7 = 0xFFFFFFFFFFFFFF0LL;
    v8 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
    v9 = alloca(v8);
    v10 = alloca(v8);
    v6 = NtQuerySystemInformationEx(
           SystemSupportedProcessorArchitectures,
           &InputBuffer,
           8u,
           SystemInformation,
           SystemInformation[0],
           SystemInformation);
    if ( v6 >= 0 )
    {
      v11 = SystemInformation[0];
      LODWORD(v12) = 0;
      v13 = LOWORD(SystemInformation[0]);
      if ( LOWORD(SystemInformation[0]) )
      {
        while ( v13 != NativeMachine || (v11 & 0x60000) != 0x20000 )
        {
          v12 = (unsigned int)(v12 + 1);
          v11 = SystemInformation[v12];
          v13 = (unsigned __int16)v11;
          if ( !(_WORD)v11 )
            goto LABEL_9;
        }
        v2 = 1;
      }
LABEL_9:
      *IsWowGuestMachineSupported = v2;
    }
  }
  else if ( v5 >= 0 )
  {
    return -1073741823;
  }
  return v6;
}
