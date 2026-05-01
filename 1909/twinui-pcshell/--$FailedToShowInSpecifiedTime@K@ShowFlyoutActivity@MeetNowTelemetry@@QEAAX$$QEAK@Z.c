/*
 * XREFs of ??$FailedToShowInSpecifiedTime@K@ShowFlyoutActivity@MeetNowTelemetry@@QEAAX$$QEAK@Z @ 0x1800968A8
 * Callers:
 *     ?OnMessage@MeetNowExperienceManager@@UEAAJI_K_J@Z @ 0x180098F00 (-OnMessage@MeetNowExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@MeetNowTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180099CAC (-Provider@MeetNowTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 */

char __fastcall MeetNowTelemetry::ShowFlyoutActivity::FailedToShowInSpecifiedTime<unsigned long>(
        __int64 a1,
        __int64 a2)
{
  const struct _TlgProvider_t *v4; // rax
  const struct _TlgProvider_t *v5; // rcx
  __int64 v7; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  v4 = MeetNowTelemetryLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    LOBYTE(v4) = TlgKeywordOn(v4, 0x400000000000uLL);
    if ( (_BYTE)v4 )
    {
      v11 = 0;
      v14 = 0;
      v10 = 4;
      v12 = &v7;
      v9 = a2;
      v7 = 50331648LL;
      v13 = 8;
      LOBYTE(v4) = TlgWrite(v5, &unk_1804EACB7, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
    }
  }
  return (char)v4;
}
