/*
 * XREFs of NtUserOpenWindowStation @ 0x1C00B8220
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000AD50 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _OpenWindowStation @ 0x1C00B9158 (_OpenWindowStation.c)
 *     RtlStringCbPrintfW @ 0x1C01F92D0 (RtlStringCbPrintfW.c)
 */

__int64 __fastcall NtUserOpenWindowStation(unsigned __int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 *v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  ULONG64 v12; // rdx
  ULONG64 v13; // rcx
  NTSTATUS ProcessLuid; // eax
  bool v16; // [rsp+30h] [rbp-A8h]
  volatile void *Address[2]; // [rsp+38h] [rbp-A0h]
  __int128 v18; // [rsp+60h] [rbp-78h]
  PUNICODE_STRING DestinationString[2]; // [rsp+70h] [rbp-68h]
  __int64 v20; // [rsp+F0h] [rbp+18h] BYREF
  __int64 v21; // [rsp+F8h] [rbp+20h]

  v20 = 0LL;
  v16 = 1;
  v4 = 0LL;
  EnterCrit(0LL, 1LL);
  v7 = (__int128 *)a1;
  v8 = a1 + 48;
  if ( a1 + 48 < a1 || v8 > MmUserProbeAddress )
    v7 = (__int128 *)MmUserProbeAddress;
  v18 = *v7;
  *(_OWORD *)DestinationString = v7[1];
  if ( PsGetCurrentProcessWow64Process(v8, v7, v5, v6) )
  {
    v21 = 1LL;
    v11 = 0LL;
  }
  else
  {
    v21 = 4LL;
    v11 = 3LL;
  }
  v12 = (ULONG64)DestinationString[0];
  if ( ((unsigned __int64)DestinationString[0] & v11) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = MmUserProbeAddress;
  if ( DestinationString[0] >= (PUNICODE_STRING)MmUserProbeAddress )
    v12 = MmUserProbeAddress;
  *(_BYTE *)v12 = *(_BYTE *)v12;
  *(_BYTE *)(v12 + 15) = *(_BYTE *)(v12 + 15);
  *(struct _UNICODE_STRING *)Address = *DestinationString[0];
  if ( *((_QWORD *)&v18 + 1) )
  {
    if ( Address[1] )
    {
      v12 = 58LL;
      if ( LODWORD(Address[0]) == 3801144 )
      {
        ProbeForWrite(Address[1], 0x3AuLL, 2u);
        if ( !_wcsicmp((const wchar_t *)Address[1], L"Service-0x00000000-00000000$") )
        {
          ProcessLuid = GetProcessLuid(0LL, &v20);
          v16 = ProcessLuid >= 0;
          if ( ProcessLuid < 0 )
          {
            UserSetLastStatus(ProcessLuid, 1);
          }
          else
          {
            RtlStringCbPrintfW((NTSTRSAFE_PWSTR)Address[1], 0x3AuLL, L"Service-0x%x-%x$", HIDWORD(v20), v20);
            RtlInitUnicodeString(DestinationString[0], (PCWSTR)Address[1]);
          }
        }
      }
    }
  }
  if ( v16 )
    v4 = OpenWindowStation(a1, a2);
  UserSessionSwitchLeaveCrit(v13, v12, v9, v10);
  return v4;
}
