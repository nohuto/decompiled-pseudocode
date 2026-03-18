/*
 * XREFs of RIMDoOnPowerNotification @ 0x1C00F1744
 * Callers:
 *     RIMOnPowerNotification @ 0x1C00E3AD0 (RIMOnPowerNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMDeliverConfigRequest @ 0x1C00EF068 (RIMDeliverConfigRequest.c)
 *     RIMFindInputDeviceForConfig @ 0x1C00EF58C (RIMFindInputDeviceForConfig.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C00F0344 (RIMSendLatencyMgtDeviceRequest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDoOnPowerNotification(__int64 a1, __int64 a2, char a3)
{
  int v6; // eax
  __int64 v7; // rbx
  int v8; // esi
  int v9; // r14d
  char v10; // al
  __int64 v11; // rax
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v21; // [rsp+28h] [rbp-40h]
  int v22; // [rsp+78h] [rbp+10h] BYREF
  int v23; // [rsp+80h] [rbp+18h] BYREF
  __int64 v24; // [rsp+88h] [rbp+20h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0xAu,
    (__int64)&WPP_558ab43dada4395364e05253c1ca4677_Traceguids);
  v6 = *(_DWORD *)(a2 + 200);
  v7 = 0LL;
  v8 = 0;
  v24 = 0LL;
  v9 = 0;
  if ( (v6 & 0x80u) != 0 )
  {
    v7 = a2;
    v9 = 1;
    v24 = a2;
  }
  if ( (a3 & 1) == 0 )
  {
LABEL_26:
    if ( !v9 )
      goto LABEL_29;
    goto LABEL_27;
  }
  v10 = *(_BYTE *)(a2 + 48);
  if ( v10 != 3 )
  {
    if ( !v10 && (*(_DWORD *)(a2 + 184) & 0x4000000) != 0 )
      *(_BYTE *)(a2 + 206) = 0;
    goto LABEL_26;
  }
  v11 = *(_QWORD *)(a2 + 464);
  if ( *(_WORD *)(v11 + 42) != 13 || *(_WORD *)(v11 + 40) != 14 )
    goto LABEL_26;
  v12 = *(_DWORD *)(a2 + 184);
  v13 = 0;
  v23 = 0;
  v22 = 0;
  if ( (v12 & 0x400) != 0 )
  {
    if ( __CFSHR__(v12, 12) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)-__CFSHR__(v12, 12), 14LL);
    v13 = 2;
  }
  else if ( __CFSHR__(v12, 12) )
  {
    v13 = 3;
  }
  else
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x12u,
      0xBu,
      (__int64)&WPP_558ab43dada4395364e05253c1ca4677_Traceguids);
  }
  v8 = RIMDeliverConfigRequest(a2, *(_QWORD *)(a2 + 464), 0x52u, v13);
  if ( v8 >= 0 && (a3 & 4) == 0 )
  {
    v14 = RIMDeliverConfigRequest(a2, *(_QWORD *)(a2 + 464), 0x57u, 0);
    v8 = v14;
    if ( v14 < 0 )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0xCu,
        (__int64)&WPP_558ab43dada4395364e05253c1ca4677_Traceguids,
        v14);
  }
  if ( !(unsigned int)RIMFindInputDeviceForConfig(*(_QWORD *)(a2 + 464), a1, a2, &v23, &v22, &v24) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0xDu,
      (__int64)&WPP_558ab43dada4395364e05253c1ca4677_Traceguids);
    if ( !v9 )
      goto LABEL_29;
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17);
    v7 = v24;
    goto LABEL_26;
  }
  v7 = v24;
  if ( !v24 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15);
LABEL_27:
  v19 = RIMSendLatencyMgtDeviceRequest((struct _UNICODE_STRING *)v7, *(_QWORD *)(v7 + 464), !(a3 & 1));
  if ( v19 < 0 )
  {
    LODWORD(v21) = v19;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0xEu,
      (__int64)&WPP_558ab43dada4395364e05253c1ca4677_Traceguids,
      v21);
  }
LABEL_29:
  LODWORD(v21) = v8;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0xFu,
    (__int64)&WPP_558ab43dada4395364e05253c1ca4677_Traceguids,
    v21);
  return (unsigned int)v8;
}
