/*
 * XREFs of rimFindOrCreateActiveContact @ 0x1C0155950
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C0156A14 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C011C508 (WPP_RECORDER_SF_Dd.c)
 *     rimHidP_GetUsageValue @ 0x1C0142D10 (rimHidP_GetUsageValue.c)
 *     RIMCmActivateContact @ 0x1C015924C (RIMCmActivateContact.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFindOrCreateActiveContact(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        char *a3,
        unsigned int a4,
        unsigned __int16 a5,
        _DWORD *a6)
{
  int v7; // edx
  __int64 v8; // r8
  _QWORD **v9; // rcx
  _QWORD *i; // rdx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // esi
  unsigned int v15; // ebp
  bool v16; // cf
  bool v17; // zf
  int v18; // edx
  unsigned int v20; // [rsp+60h] [rbp+8h] BYREF

  v20 = 0;
  if ( rimHidP_GetUsageValue(HidP_Input, 0xDu, a5, 0x51u, &v20, a2, a3, a4) < 0
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 37, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids);
  }
  v8 = v20;
  v9 = (_QWORD **)(*(_QWORD *)(a1 + 936) + 16LL * (v20 % *(_DWORD *)(a1 + 944)));
  for ( i = *v9; i != v9; i = (_QWORD *)*i )
  {
    v11 = (__int64)(i - 2);
    if ( *((_DWORD *)i - 4) == v20 && (*(_DWORD *)(v11 + 32) & 4) == 0 )
      goto LABEL_10;
  }
  v11 = 0LL;
LABEL_10:
  *a6 = v11 == 0;
  if ( !v11 )
  {
    v12 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v12 == 7 )
      v13 = (unsigned int)-__CFSHR__(*(_DWORD *)(*(_QWORD *)(a1 + 912) + 32LL), 2);
    else
      v13 = 0LL;
    v14 = *(_DWORD *)(a1 + 952) - 1;
    if ( !(_DWORD)v13 )
      v14 = *(_DWORD *)(a1 + 952);
    v15 = *(_DWORD *)(a1 + 720) - 1;
    if ( (_DWORD)v12 != 7 )
      v15 = *(_DWORD *)(a1 + 720);
    v16 = v14 < v15;
    v17 = v14 == v15;
    if ( v14 > v15 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v8);
      v8 = v20;
      v16 = v14 < v15;
      v17 = v14 == v15;
    }
    if ( v17 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_Dd(
          (_DWORD)gRimLog,
          v12,
          1,
          38,
          (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids,
          v14 + 1,
          v15);
      }
    }
    else
    {
      if ( !v16 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v8);
        LODWORD(v8) = v20;
      }
      v11 = RIMCmActivateContact(a1, (unsigned int)v8);
      if ( !v11 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = 2;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v18, 1, 39, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids);
      }
    }
  }
  return v11;
}
