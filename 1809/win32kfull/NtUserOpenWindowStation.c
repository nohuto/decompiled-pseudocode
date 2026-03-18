/*
 * XREFs of NtUserOpenWindowStation @ 0x1C00EEB60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     UserSetLastStatus @ 0x1C00C8D04 (UserSetLastStatus.c)
 *     _OpenWindowStation @ 0x1C00EFCA8 (_OpenWindowStation.c)
 *     RtlStringCbPrintfW @ 0x1C022132C (RtlStringCbPrintfW.c)
 */

__int64 __fastcall NtUserOpenWindowStation(unsigned __int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int128 *v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  ULONG64 v10; // rcx
  ULONG64 v11; // rdx
  NTSTATUS ProcessLuid; // eax
  bool v14; // [rsp+30h] [rbp-A8h]
  volatile void *Address[2]; // [rsp+38h] [rbp-A0h]
  __int128 v16; // [rsp+60h] [rbp-78h]
  PUNICODE_STRING DestinationString[2]; // [rsp+70h] [rbp-68h]
  __int64 v18; // [rsp+F0h] [rbp+18h] BYREF
  __int64 v19; // [rsp+F8h] [rbp+20h]

  v18 = 0LL;
  v14 = 1;
  v4 = 0LL;
  EnterCrit(0LL, 1LL);
  v5 = (__int128 *)a1;
  v6 = a1 + 48;
  if ( a1 + 48 < a1 || v6 > MmUserProbeAddress )
    v5 = (__int128 *)MmUserProbeAddress;
  v16 = *v5;
  *(_OWORD *)DestinationString = v5[1];
  if ( PsGetCurrentProcessWow64Process(v6) )
  {
    v19 = 1LL;
    v9 = 0LL;
  }
  else
  {
    v19 = 4LL;
    v9 = 3LL;
  }
  if ( ((unsigned __int64)DestinationString[0] & v9) != 0 )
    ExRaiseDatatypeMisalignment();
  v10 = MmUserProbeAddress;
  v11 = (ULONG64)DestinationString[0];
  if ( DestinationString[0] >= (PUNICODE_STRING)MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  *(_BYTE *)v11 = *(_BYTE *)v11;
  *(_BYTE *)(v11 + 15) = *(_BYTE *)(v11 + 15);
  *(struct _UNICODE_STRING *)Address = *DestinationString[0];
  if ( *((_QWORD *)&v16 + 1) )
  {
    if ( Address[1] )
    {
      v11 = 58LL;
      if ( LODWORD(Address[0]) == 3801144 )
      {
        ProbeForWrite(Address[1], 0x3AuLL, 2u);
        if ( !_wcsicmp((const wchar_t *)Address[1], L"Service-0x00000000-00000000$") )
        {
          ProcessLuid = GetProcessLuid(0LL, &v18);
          v14 = ProcessLuid >= 0;
          if ( ProcessLuid < 0 )
          {
            UserSetLastStatus(ProcessLuid, 1);
          }
          else
          {
            RtlStringCbPrintfW((NTSTRSAFE_PWSTR)Address[1], 0x3AuLL, L"Service-0x%x-%x$", HIDWORD(v18), v18);
            RtlInitUnicodeString(DestinationString[0], (PCWSTR)Address[1]);
          }
        }
      }
    }
  }
  if ( v14 )
    v4 = OpenWindowStation(a1, a2);
  UserSessionSwitchLeaveCrit(v10, v11, v7, v8);
  return v4;
}
