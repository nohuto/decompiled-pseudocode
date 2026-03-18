/*
 * XREFs of RIMRetrieveAllLinkIndexUsages @ 0x1C00ED92C
 * Callers:
 *     RIMIsParallelDevice @ 0x1C00ED2E8 (RIMIsParallelDevice.c)
 *     RIMValidateAllCollectionUsages @ 0x1C00EDF7C (RIMValidateAllCollectionUsages.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C004DA3C (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C004DD00 (rimHidP_GetSpecificValueCaps.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRetrieveAllLinkIndexUsages(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        unsigned __int16 *a3,
        __int64 *a4,
        unsigned __int16 *a5,
        __int64 *a6)
{
  unsigned __int16 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int SpecificValueCaps; // ebx
  unsigned __int16 v13; // ax
  struct _HIDP_VALUE_CAPS *v14; // rax
  unsigned __int16 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int16 v18; // ax
  struct _HIDP_BUTTON_CAPS *v19; // rax

  v9 = a1;
  if ( *a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( *a6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Input, 0, v9, 0, 0LL, a3, a2);
  if ( SpecificValueCaps == 1114112 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
  if ( SpecificValueCaps != -1072627705 )
    goto LABEL_23;
  v13 = *a3;
  if ( !*a3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
    v13 = *a3;
  }
  v14 = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolZInit(72LL * v13, 0x63767352u);
  *a4 = (__int64)v14;
  if ( v14 )
  {
    SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Input, 0, v9, 0, v14, a3, a2);
    if ( SpecificValueCaps != 1114112 )
    {
      v15 = 28;
LABEL_21:
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        v15,
        (__int64)&WPP_d24afaddbe1632fa9c89c4aae49a04f3_Traceguids);
      goto LABEL_23;
    }
    SpecificValueCaps = rimHidP_GetSpecificButtonCaps(HidP_Input, 0, v9, 0, 0LL, a5, a2);
    if ( SpecificValueCaps == 1114112 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16);
    if ( SpecificValueCaps != -1072627705 )
      goto LABEL_23;
    v18 = *a5;
    if ( !*a5 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16);
      v18 = *a5;
    }
    v19 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPoolZInit(72LL * v18, 0x63767352u);
    *a6 = (__int64)v19;
    if ( v19 )
    {
      SpecificValueCaps = rimHidP_GetSpecificButtonCaps(HidP_Input, 0, v9, 0, v19, a5, a2);
      if ( SpecificValueCaps == 1114112 )
        return SpecificValueCaps;
      v15 = 29;
      goto LABEL_21;
    }
  }
  SpecificValueCaps = -1073741801;
LABEL_23:
  if ( SpecificValueCaps != 1114112 )
  {
    if ( *a4 )
    {
      Win32FreePool(*a4);
      *a4 = 0LL;
    }
    if ( *a6 )
    {
      Win32FreePool(*a6);
      *a6 = 0LL;
    }
  }
  return SpecificValueCaps;
}
