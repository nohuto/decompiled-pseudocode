/*
 * XREFs of ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0061F34
 * Callers:
 *     WinSqmSetDWORD @ 0x1C0061DE0 (WinSqmSetDWORD.c)
 *     SqmPowerState @ 0x1C0061E10 (SqmPowerState.c)
 *     WinSqmIncrementDWORD @ 0x1C0061F10 (WinSqmIncrementDWORD.c)
 *     WinSqmAddToAverageDWORD @ 0x1C0120AF0 (WinSqmAddToAverageDWORD.c)
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C017B4C0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     WinSqmEventEnabled @ 0x1C0061FB4 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C006200C (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     WinSqmEventWrite @ 0x1C00A4150 (WinSqmEventWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
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
      v6 = (struct _GUID *)&unk_1C01D98B0;
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
      v11 = &unk_1C0218554;
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
