/*
 * XREFs of ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0068884
 * Callers:
 *     WinSqmIncrementDWORD @ 0x1C0068860 (WinSqmIncrementDWORD.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00A3780 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     SqmPowerState @ 0x1C00A5330 (SqmPowerState.c)
 *     WinSqmAddToAverageDWORD @ 0x1C00BDA50 (WinSqmAddToAverageDWORD.c)
 *     WinSqmSetDWORD @ 0x1C00BE260 (WinSqmSetDWORD.c)
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C0125B30 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     WinSqmEventEnabled @ 0x1C0068910 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C0068960 (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     WinSqmEventWrite @ 0x1C00BE09C (WinSqmEventWrite.c)
 */

void __fastcall _WinSqmDWORDEvent(PCEVENT_DESCRIPTOR EventDescriptor, struct _GUID *a2, int a3, int a4)
{
  struct _GUID *v6; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData[4]; // [rsp+20h] [rbp-58h] BYREF
  int v8; // [rsp+B0h] [rbp+38h] BYREF
  int v9; // [rsp+B8h] [rbp+40h] BYREF

  v9 = a4;
  v8 = a3;
  memset(UserData, 0, sizeof(UserData));
  if ( a2 != (struct _GUID *)-1LL )
  {
    if ( (unsigned int)IsExtendedWinSqmHandle(a2) )
    {
      v6 = (struct _GUID *)((char *)a2 + 24);
    }
    else
    {
      v6 = (struct _GUID *)&unk_1C017ACE8;
      if ( a2 )
        v6 = a2;
    }
    if ( (unsigned int)WinSqmEventEnabled(EventDescriptor, v6) )
    {
      UserData[0].Reserved = 0;
      UserData[1].Reserved = 0;
      UserData[2].Reserved = 0;
      UserData[3].Reserved = 0;
      UserData[1].Ptr = (ULONGLONG)&v8;
      UserData[2].Ptr = (ULONGLONG)&unk_1C01A62B4;
      UserData[3].Ptr = (ULONGLONG)&v9;
      UserData[0].Ptr = (ULONGLONG)v6;
      UserData[0].Size = 16;
      UserData[1].Size = 4;
      UserData[2].Size = 4;
      UserData[3].Size = 4;
      WinSqmEventWrite(EventDescriptor, 4u, UserData);
    }
  }
}
