/*
 * XREFs of RIMDoOnPowerNotification @ 0x1C00B3880
 * Callers:
 *     RIMOnPowerNotification @ 0x1C00B40C0 (RIMOnPowerNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     RIMDeliverConfigRequest @ 0x1C014312C (RIMDeliverConfigRequest.c)
 *     RIMFindInputDeviceForConfig @ 0x1C01436CC (RIMFindInputDeviceForConfig.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C0144104 (RIMSendLatencyMgtDeviceRequest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDoOnPowerNotification(int a1, __int64 a2, char a3)
{
  _UNKNOWN **v6; // rdx
  int v7; // eax
  struct RIMDEV *v8; // rbx
  int v9; // esi
  int v10; // ebp
  char v11; // al
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  int v20; // [rsp+78h] [rbp+10h] BYREF
  int v21; // [rsp+80h] [rbp+18h] BYREF
  struct RIMDEV *v22; // [rsp+88h] [rbp+20h] BYREF

  v6 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)v6, 1, 10, (__int64)&WPP_3dad3ee8f2c63b1dd75b8c8399438bb6_Traceguids);
    v6 = &WPP_RECORDER_INITIALIZED;
  }
  v7 = *(_DWORD *)(a2 + 200);
  v8 = 0LL;
  v9 = 0;
  v22 = 0LL;
  v10 = 0;
  if ( (v7 & 0x80u) != 0 )
  {
    v8 = (struct RIMDEV *)a2;
    v10 = 1;
    v22 = (struct RIMDEV *)a2;
  }
  if ( (a3 & 1) == 0 )
    goto LABEL_8;
  v11 = *(_BYTE *)(a2 + 48);
  if ( v11 != 3 )
  {
    if ( !v11 && (*(_DWORD *)(a2 + 184) & 0x2000000) != 0 )
      *(_BYTE *)(a2 + 206) = 0;
    goto LABEL_8;
  }
  v13 = *(_QWORD *)(a2 + 464);
  if ( *(_WORD *)(v13 + 42) != 13 || *(_WORD *)(v13 + 40) != 14 )
    goto LABEL_8;
  v14 = *(_DWORD *)(a2 + 184);
  v21 = 0;
  v20 = 0;
  if ( (v14 & 0x800) != 0 )
  {
    if ( __CFSHR__(v14, 13) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(
        (unsigned int)-__CFSHR__(v14, 13),
        &WPP_RECORDER_INITIALIZED,
        &WPP_3dad3ee8f2c63b1dd75b8c8399438bb6_Traceguids);
  }
  else if ( !__CFSHR__(v14, 13) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)v6, 1, 11, (__int64)&WPP_3dad3ee8f2c63b1dd75b8c8399438bb6_Traceguids);
  }
  v9 = RIMDeliverConfigRequest((struct RIMDEV *)a2);
  if ( v9 >= 0 && (a3 & 4) == 0 )
  {
    v15 = RIMDeliverConfigRequest((struct RIMDEV *)a2);
    v9 = v15;
    if ( v15 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 3;
      WPP_RECORDER_SF_D((_DWORD)gRimLog, v16, 1, 12, (__int64)&WPP_3dad3ee8f2c63b1dd75b8c8399438bb6_Traceguids, v15);
    }
  }
  if ( !(unsigned int)RIMFindInputDeviceForConfig(
                        *(_QWORD *)(a2 + 464),
                        a1,
                        a2,
                        (unsigned int)&v21,
                        (__int64)&v20,
                        (__int64)&v22) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)v6, 1, 13, (__int64)&WPP_3dad3ee8f2c63b1dd75b8c8399438bb6_Traceguids);
    }
    if ( !v10 )
      goto LABEL_9;
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v6, v18);
    v8 = v22;
LABEL_8:
    if ( !v10 )
      goto LABEL_9;
    goto LABEL_29;
  }
  v8 = v22;
  if ( !v22 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v6, v18);
LABEL_29:
  v19 = RIMSendLatencyMgtDeviceRequest(v8);
  if ( v19 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v9;
    LOBYTE(v6) = 3;
    WPP_RECORDER_SF_D(
      (_DWORD)gRimLog,
      (_DWORD)v6,
      1,
      14,
      (__int64)&WPP_3dad3ee8f2c63b1dd75b8c8399438bb6_Traceguids,
      v19);
  }
LABEL_9:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, (_DWORD)v6, 1, 15, (__int64)&WPP_3dad3ee8f2c63b1dd75b8c8399438bb6_Traceguids, v9);
  }
  return (unsigned int)v9;
}
