/*
 * XREFs of rimFindOrCreateActiveContact @ 0x1C010263C
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C0102F30 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00E839C (WPP_RECORDER_SF_dd.c)
 *     rimHidP_GetUsageValue @ 0x1C00F0DA4 (rimHidP_GetUsageValue.c)
 *     RIMCmActivateContact @ 0x1C0106660 (RIMCmActivateContact.c)
 *     RIMCmGetActiveContactsCountNoButton @ 0x1C0106CA0 (RIMCmGetActiveContactsCountNoButton.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFindOrCreateActiveContact(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        char *a3,
        unsigned int a4,
        unsigned __int16 a5,
        _DWORD *a6)
{
  _QWORD **v7; // rcx
  _QWORD *i; // rdx
  __int64 v9; // rbx
  unsigned int ActiveContactsCountNoButton; // eax
  __int64 v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // rdx
  unsigned int v14; // esi
  unsigned int v15; // edi
  __int64 v17; // [rsp+28h] [rbp-30h]
  __int64 v18; // [rsp+30h] [rbp-28h]
  unsigned int v19; // [rsp+60h] [rbp+8h] BYREF

  v19 = 0;
  if ( rimHidP_GetUsageValue(HidP_Input, 0xDu, a5, 0x51u, &v19, a2, a3, a4) < 0 )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x20u,
      (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids);
  v7 = (_QWORD **)(*(_QWORD *)(a1 + 896) + 16LL * (v19 % *(_DWORD *)(a1 + 904)));
  for ( i = *v7; i != v7; i = (_QWORD *)*i )
  {
    v9 = (__int64)(i - 2);
    if ( *((_DWORD *)i - 4) == v19 && (*(_DWORD *)(v9 + 32) & 4) == 0 )
      goto LABEL_9;
  }
  v9 = 0LL;
LABEL_9:
  *a6 = v9 == 0;
  if ( !v9 )
  {
    ActiveContactsCountNoButton = RIMCmGetActiveContactsCountNoButton(a1);
    v13 = *(unsigned int *)(a1 + 680);
    v14 = ActiveContactsCountNoButton;
    v15 = v13 - 1;
    if ( *(_DWORD *)(a1 + 24) != 7 )
      v15 = *(_DWORD *)(a1 + 680);
    if ( ActiveContactsCountNoButton > v15 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v13);
      v12 = v19;
    }
    if ( v14 == v15 )
    {
      LODWORD(v18) = v15;
      LODWORD(v17) = v14 + 1;
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x12u,
        0x21u,
        (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids,
        v17,
        v18);
    }
    else
    {
      if ( v14 >= v15 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v13);
        v12 = v19;
      }
      v9 = RIMCmActivateContact(a1, v12);
      if ( !v9 )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x12u,
          0x22u,
          (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids);
    }
  }
  return v9;
}
