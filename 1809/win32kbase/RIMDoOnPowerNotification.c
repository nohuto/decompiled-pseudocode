/*
 * XREFs of RIMDoOnPowerNotification @ 0x1C00A4674
 * Callers:
 *     RIMOnPowerNotification @ 0x1C00A41C0 (RIMOnPowerNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RIMDeliverConfigRequest @ 0x1C011A884 (RIMDeliverConfigRequest.c)
 *     RIMFindInputDeviceForConfig @ 0x1C011ADBC (RIMFindInputDeviceForConfig.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C011B7F4 (RIMSendLatencyMgtDeviceRequest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDoOnPowerNotification(int a1, __int64 a2, char a3)
{
  __int64 v6; // r8
  int v7; // eax
  __int64 v8; // rbx
  int v9; // esi
  int v10; // r14d
  char v11; // al
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // [rsp+28h] [rbp-40h]
  int v24; // [rsp+78h] [rbp+10h] BYREF
  int v25; // [rsp+80h] [rbp+18h] BYREF
  __int64 v26; // [rsp+88h] [rbp+20h] BYREF

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0xAu, (__int64)&WPP_77fb14f46d7939977b038ac27e79c1db_Traceguids);
  v7 = *(_DWORD *)(a2 + 200);
  v8 = 0LL;
  v9 = 0;
  v26 = 0LL;
  v10 = 0;
  if ( (v7 & 0x80u) != 0 )
  {
    v8 = a2;
    v10 = 1;
    v26 = a2;
  }
  if ( (a3 & 1) == 0 )
    goto LABEL_6;
  v11 = *(_BYTE *)(a2 + 48);
  if ( v11 != 3 )
  {
    if ( !v11 && (*(_DWORD *)(a2 + 184) & 0x2000000) != 0 )
      *(_BYTE *)(a2 + 206) = 0;
    goto LABEL_6;
  }
  v13 = *(_QWORD *)(a2 + 464);
  if ( *(_WORD *)(v13 + 42) != 13 || *(_WORD *)(v13 + 40) != 14 )
    goto LABEL_6;
  v14 = *(_DWORD *)(a2 + 184);
  v25 = 0;
  v24 = 0;
  if ( (v14 & 0x800) != 0 )
  {
    if ( __CFSHR__(v14, 13) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)-__CFSHR__(v14, 13), 14LL, v6);
  }
  else if ( !__CFSHR__(v14, 13) )
  {
    WPP_RECORDER_SF_(gRimLog, 2u, 0x13u, 0xBu, (__int64)&WPP_77fb14f46d7939977b038ac27e79c1db_Traceguids);
  }
  v9 = RIMDeliverConfigRequest((struct RIMDEV *)a2);
  if ( v9 >= 0 && (a3 & 4) == 0 )
  {
    v15 = RIMDeliverConfigRequest((struct RIMDEV *)a2);
    v9 = v15;
    if ( v15 < 0 )
      WPP_RECORDER_SF_d(gRimLog, 3u, 0x14u, 0xCu, (__int64)&WPP_77fb14f46d7939977b038ac27e79c1db_Traceguids, v15);
  }
  if ( !(unsigned int)RIMFindInputDeviceForConfig(
                        *(_QWORD *)(a2 + 464),
                        a1,
                        a2,
                        (unsigned int)&v25,
                        (__int64)&v24,
                        (__int64)&v26) )
  {
    WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0xDu, (__int64)&WPP_77fb14f46d7939977b038ac27e79c1db_Traceguids);
    if ( !v10 )
      goto LABEL_7;
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
    v8 = v26;
LABEL_6:
    if ( !v10 )
      goto LABEL_7;
    goto LABEL_23;
  }
  v8 = v26;
  if ( !v26 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
LABEL_23:
  v19 = RIMSendLatencyMgtDeviceRequest(v8, *(_QWORD *)(v8 + 464), !(a3 & 1));
  if ( v19 < 0 )
  {
    LODWORD(v23) = v19;
    WPP_RECORDER_SF_d(gRimLog, 3u, 0x14u, 0xEu, (__int64)&WPP_77fb14f46d7939977b038ac27e79c1db_Traceguids, v23);
  }
LABEL_7:
  LODWORD(v23) = v9;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0xFu, (__int64)&WPP_77fb14f46d7939977b038ac27e79c1db_Traceguids, v23);
  return (unsigned int)v9;
}
