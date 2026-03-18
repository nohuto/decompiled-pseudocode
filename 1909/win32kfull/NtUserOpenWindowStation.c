/*
 * XREFs of NtUserOpenWindowStation @ 0x1C007D1F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _OpenWindowStation @ 0x1C007E2D4 (_OpenWindowStation.c)
 *     UserSetLastStatus @ 0x1C010CF58 (UserSetLastStatus.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C022933C (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

__int64 __fastcall NtUserOpenWindowStation(unsigned __int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int128 *v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // rax
  _BYTE *v8; // rdx
  ULONG64 v9; // rcx
  NTSTATUS ProcessLuid; // eax
  bool v12; // [rsp+30h] [rbp-A8h]
  volatile void *Address[2]; // [rsp+38h] [rbp-A0h]
  __int128 v14; // [rsp+60h] [rbp-78h]
  PUNICODE_STRING DestinationString[2]; // [rsp+70h] [rbp-68h]
  __int128 v16; // [rsp+80h] [rbp-58h]
  _OWORD v17[3]; // [rsp+90h] [rbp-48h] BYREF
  __int64 v18; // [rsp+F0h] [rbp+18h] BYREF
  __int64 v19; // [rsp+F8h] [rbp+20h]

  v4 = 0LL;
  v18 = 0LL;
  memset(v17, 0, sizeof(v17));
  v12 = 1;
  EnterCrit(0LL, 1LL);
  v5 = (__int128 *)a1;
  v6 = a1 + 48;
  if ( a1 + 48 < a1 || v6 > MmUserProbeAddress )
    v5 = (__int128 *)MmUserProbeAddress;
  v14 = *v5;
  *(_OWORD *)DestinationString = v5[1];
  v16 = v5[2];
  v17[0] = *v5;
  v17[1] = *(_OWORD *)DestinationString;
  v17[2] = v16;
  if ( PsGetCurrentProcessWow64Process(v6) )
  {
    v19 = 1LL;
    v7 = 0LL;
  }
  else
  {
    v19 = 4LL;
    v7 = 3LL;
  }
  v8 = DestinationString[0];
  if ( ((unsigned __int64)DestinationString[0] & v7) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = MmUserProbeAddress;
  if ( DestinationString[0] >= (PUNICODE_STRING)MmUserProbeAddress )
    v8 = (_BYTE *)MmUserProbeAddress;
  *v8 = *v8;
  v8[15] = v8[15];
  *(struct _UNICODE_STRING *)Address = *DestinationString[0];
  if ( *((_QWORD *)&v14 + 1) )
  {
    if ( Address[1] )
    {
      if ( LODWORD(Address[0]) == 3801144 )
      {
        ProbeForWrite(Address[1], 0x3AuLL, 2u);
        if ( !_wcsicmp((const wchar_t *)Address[1], L"Service-0x00000000-00000000$") )
        {
          ProcessLuid = GetProcessLuid(0LL, &v18);
          v12 = ProcessLuid >= 0;
          if ( ProcessLuid < 0 )
          {
            UserSetLastStatus(ProcessLuid);
          }
          else
          {
            RtlStringCbPrintfW((wchar_t *)Address[1], 0x3AuLL, L"Service-0x%x-%x$", HIDWORD(v18), v18);
            RtlInitUnicodeString(DestinationString[0], (PCWSTR)Address[1]);
          }
        }
      }
    }
  }
  if ( v12 )
    v4 = OpenWindowStation(a1, a2);
  UserSessionSwitchLeaveCrit(v9);
  return v4;
}
