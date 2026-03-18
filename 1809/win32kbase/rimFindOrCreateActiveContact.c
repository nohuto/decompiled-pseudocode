/*
 * XREFs of rimFindOrCreateActiveContact @ 0x1C012ADA8
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C012BC0C (rimProcessPointerDeviceContact.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0111B34 (WPP_RECORDER_SF_dd.c)
 *     rimHidP_GetUsageValue @ 0x1C011C898 (rimHidP_GetUsageValue.c)
 *     RIMCmActivateContact @ 0x1C012E460 (RIMCmActivateContact.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFindOrCreateActiveContact(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        char *a3,
        unsigned int a4,
        unsigned __int16 a5,
        _DWORD *a6)
{
  __int64 v7; // r8
  _QWORD **v8; // rcx
  _QWORD *i; // rdx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // esi
  unsigned int v14; // ebp
  bool v15; // zf
  __int64 v17; // [rsp+28h] [rbp-30h]
  __int64 v18; // [rsp+30h] [rbp-28h]
  unsigned int v19; // [rsp+60h] [rbp+8h] BYREF

  v19 = 0;
  if ( rimHidP_GetUsageValue(HidP_Input, 0xDu, a5, 0x51u, &v19, a2, a3, a4) < 0 )
    WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x25u, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
  v7 = v19;
  v8 = (_QWORD **)(*(_QWORD *)(a1 + 928) + 16LL * (v19 % *(_DWORD *)(a1 + 936)));
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    v10 = (__int64)(i - 2);
    if ( *((_DWORD *)i - 4) == v19 && (*(_DWORD *)(v10 + 32) & 4) == 0 )
      goto LABEL_9;
  }
  v10 = 0LL;
LABEL_9:
  *a6 = v10 == 0;
  if ( !v10 )
  {
    v11 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v11 == 7 )
      v12 = (unsigned int)-__CFSHR__(*(_DWORD *)(*(_QWORD *)(a1 + 904) + 32LL), 2);
    else
      v12 = 0LL;
    v13 = *(_DWORD *)(a1 + 944) - 1;
    if ( !(_DWORD)v12 )
      v13 = *(_DWORD *)(a1 + 944);
    v14 = *(_DWORD *)(a1 + 712) - 1;
    if ( (_DWORD)v11 != 7 )
      v14 = *(_DWORD *)(a1 + 712);
    v15 = v13 == v14;
    if ( v13 > v14 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v7);
      v7 = v19;
      v15 = v13 == v14;
    }
    if ( v15 )
    {
      LODWORD(v18) = v14;
      LODWORD(v17) = v13 + 1;
      WPP_RECORDER_SF_dd(gRimLog, 2u, 0x13u, 0x26u, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids, v17, v18);
    }
    else
    {
      if ( v13 >= v14 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v7);
        LODWORD(v7) = v19;
      }
      v10 = RIMCmActivateContact(a1, (unsigned int)v7);
      if ( !v10 )
        WPP_RECORDER_SF_(gRimLog, 2u, 0x13u, 0x27u, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
    }
  }
  return v10;
}
