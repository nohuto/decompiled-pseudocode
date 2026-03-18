/*
 * XREFs of ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C00645E4
 * Callers:
 *     WinSqmSetDWORD @ 0x1C0064490 (WinSqmSetDWORD.c)
 *     SqmPowerState @ 0x1C00644C0 (SqmPowerState.c)
 *     WinSqmIncrementDWORD @ 0x1C00645C0 (WinSqmIncrementDWORD.c)
 *     WinSqmAddToAverageDWORD @ 0x1C011E180 (WinSqmAddToAverageDWORD.c)
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01792D0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     WinSqmEventEnabled @ 0x1C0064664 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C00646BC (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     WinSqmEventWrite @ 0x1C00A3090 (WinSqmEventWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

void __fastcall _WinSqmDWORDEvent(PCEVENT_DESCRIPTOR EventDescriptor, struct _GUID *a2, int a3, int a4)
{
  struct _GUID *v6; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-58h] BYREF
  int *v8; // [rsp+30h] [rbp-48h]
  int v9; // [rsp+38h] [rbp-40h]
  int v10; // [rsp+3Ch] [rbp-3Ch]
  void *v11; // [rsp+40h] [rbp-38h]
  int v12; // [rsp+48h] [rbp-30h]
  int v13; // [rsp+4Ch] [rbp-2Ch]
  int *v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+58h] [rbp-20h]
  int v16; // [rsp+5Ch] [rbp-1Ch]
  int v17; // [rsp+B0h] [rbp+38h] BYREF
  int v18; // [rsp+B8h] [rbp+40h] BYREF

  if ( a2 != (struct _GUID *)-1LL )
  {
    v18 = a4;
    v17 = a3;
    if ( (unsigned int)IsExtendedWinSqmHandle(a2) )
    {
      v6 = (struct _GUID *)((char *)a2 + 24);
    }
    else
    {
      v6 = (struct _GUID *)&unk_1C01D7DA0;
      if ( a2 )
        v6 = a2;
    }
    if ( (unsigned int)WinSqmEventEnabled(EventDescriptor, v6) )
    {
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      v16 = 0;
      v8 = &v17;
      v11 = &unk_1C0215554;
      v14 = &v18;
      UserData.Ptr = (ULONGLONG)v6;
      UserData.Size = 16;
      v9 = 4;
      v12 = 4;
      v15 = 4;
      WinSqmEventWrite(EventDescriptor, 4u, &UserData);
    }
  }
}
