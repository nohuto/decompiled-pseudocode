/*
 * XREFs of RIMRetrieveAllLinkIndexUsages @ 0x1C0118CAC
 * Callers:
 *     RIMIsParallelDevice @ 0x1C01186B4 (RIMIsParallelDevice.c)
 *     RIMValidateAllCollectionUsages @ 0x1C011930C (RIMValidateAllCollectionUsages.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C011C7F0 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C011C844 (rimHidP_GetSpecificValueCaps.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRetrieveAllLinkIndexUsages(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 *a4,
        unsigned __int16 *a5,
        __int64 *a6)
{
  unsigned __int16 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int SpecificValueCaps; // ebx
  __int64 v13; // r8
  unsigned __int16 v14; // ax
  void *v15; // rax
  unsigned __int16 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int16 v20; // ax
  void *v21; // rax

  v9 = a1;
  if ( *a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *a6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v9, 0, 0LL, (__int64)a3, a2);
  if ( SpecificValueCaps == 1114112 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v13);
  if ( SpecificValueCaps != -1072627705 )
    goto LABEL_23;
  v14 = *a3;
  if ( !*a3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v13);
    v14 = *a3;
  }
  v15 = Win32AllocPoolZInit(72LL * v14, 0x63767352u);
  *a4 = (__int64)v15;
  if ( v15 )
  {
    SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v9, 0, (__int64)v15, (__int64)a3, a2);
    if ( SpecificValueCaps != 1114112 )
    {
      v16 = 28;
LABEL_21:
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, v16, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids);
      goto LABEL_23;
    }
    SpecificValueCaps = rimHidP_GetSpecificButtonCaps(0, 0, v9, 0, 0LL, (__int64)a5, a2);
    if ( SpecificValueCaps == 1114112 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
    if ( SpecificValueCaps != -1072627705 )
      goto LABEL_23;
    v20 = *a5;
    if ( !*a5 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
      v20 = *a5;
    }
    v21 = Win32AllocPoolZInit(72LL * v20, 0x63767352u);
    *a6 = (__int64)v21;
    if ( v21 )
    {
      SpecificValueCaps = rimHidP_GetSpecificButtonCaps(0, 0, v9, 0, (__int64)v21, (__int64)a5, a2);
      if ( SpecificValueCaps == 1114112 )
        return SpecificValueCaps;
      v16 = 29;
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
