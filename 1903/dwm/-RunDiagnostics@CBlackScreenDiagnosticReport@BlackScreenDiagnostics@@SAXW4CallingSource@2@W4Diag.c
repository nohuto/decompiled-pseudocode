/*
 * XREFs of ?RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x140008088
 * Callers:
 *     ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x140001410 (-NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 *     ?RunDiagnosticsFromLongPowerButtonHold@BlackScreenDiagnostics@@YAXXZ @ 0x140008220 (-RunDiagnosticsFromLongPowerButtonHold@BlackScreenDiagnostics@@YAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140003000 (__security_check_cookie.c)
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x140007BC0 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 *     TraceLoggingRegisterEx @ 0x140008494 (TraceLoggingRegisterEx.c)
 *     _TlgWrite @ 0x1400085D0 (_TlgWrite.c)
 */

void __fastcall BlackScreenDiagnostics::CBlackScreenDiagnosticReport::RunDiagnostics(int a1, int a2)
{
  void (__stdcall *v4)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v5; // r8
  __int64 v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  int v9; // [rsp+30h] [rbp-88h] BYREF
  int v10; // [rsp+34h] [rbp-84h] BYREF
  __int64 v11; // [rsp+38h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-78h] BYREF
  __int64 *v13; // [rsp+60h] [rbp-58h]
  __int64 v14; // [rsp+68h] [rbp-50h]
  UUID *v15; // [rsp+70h] [rbp-48h]
  __int64 v16; // [rsp+78h] [rbp-40h]
  int *v17; // [rsp+80h] [rbp-38h]
  __int64 v18; // [rsp+88h] [rbp-30h]
  int *v19; // [rsp+90h] [rbp-28h]
  __int64 v20; // [rsp+98h] [rbp-20h]

  if ( TryAcquireSRWLockExclusive(&BlackScreenDiagnostics::CBlackScreenDiagnosticReport::s_srwLock) )
  {
    TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, v4, v5);
    UuidCreate(&Uuid);
    if ( hProvider > 5u
      && (qword_140010010 & 0x800000000000LL) != 0
      && (qword_140010018 & 0x800000000000LL) == qword_140010018 )
    {
      v11 = 50331648LL;
      v13 = &v11;
      v17 = &v9;
      v19 = &v10;
      v14 = 8LL;
      v15 = &Uuid;
      v16 = 16LL;
      v9 = a1;
      v18 = 4LL;
      v10 = a2;
      v20 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_14000B851, v7, v8, 6u, &pData);
    }
    BlackScreenDiagnostics::CBlackScreenDiagnosticReport::Run(v6, a1, a2);
    EventUnregister(RegHandle);
    RegHandle = 0LL;
    hProvider = 0;
    ReleaseSRWLockExclusive(&BlackScreenDiagnostics::CBlackScreenDiagnosticReport::s_srwLock);
  }
}
