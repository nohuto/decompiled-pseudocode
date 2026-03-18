/*
 * XREFs of RIMRetrieveAllLinkIndexUsages @ 0x1C013EDF8
 * Callers:
 *     RIMIsParallelDevice @ 0x1C013E7D4 (RIMIsParallelDevice.c)
 *     RIMValidateAllCollectionUsages @ 0x1C013F4AC (RIMValidateAllCollectionUsages.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0142C68 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0142CBC (rimHidP_GetSpecificValueCaps.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  int v16; // edx
  int v17; // r9d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int16 v21; // ax
  void *v22; // rax

  v9 = a1;
  if ( *a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *a6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v9, 0, 0LL, (__int64)a3, a2);
  if ( SpecificValueCaps == 1114112 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v13);
  if ( SpecificValueCaps != -1072627705 )
    goto LABEL_25;
  v14 = *a3;
  if ( !*a3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v13);
    v14 = *a3;
  }
  v15 = Win32AllocPoolZInit(72LL * v14, 1668707154LL);
  *a4 = (__int64)v15;
  if ( !v15 )
    goto LABEL_24;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v9, 0, (__int64)v15, (__int64)a3, a2);
  if ( SpecificValueCaps != 1114112 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v17 = 28;
    goto LABEL_23;
  }
  SpecificValueCaps = rimHidP_GetSpecificButtonCaps(0, 0, v9, 0, 0LL, (__int64)a5, a2);
  if ( SpecificValueCaps == 1114112 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
  if ( SpecificValueCaps != -1072627705 )
    goto LABEL_25;
  v21 = *a5;
  if ( !*a5 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
    v21 = *a5;
  }
  v22 = Win32AllocPoolZInit(72LL * v21, 1668707154LL);
  *a6 = (__int64)v22;
  if ( v22 )
  {
    SpecificValueCaps = rimHidP_GetSpecificButtonCaps(0, 0, v9, 0, (__int64)v22, (__int64)a5, a2);
    if ( SpecificValueCaps == 1114112 )
      return SpecificValueCaps;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 29;
LABEL_23:
      LOBYTE(v16) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v16, 1, v17, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids);
    }
  }
  else
  {
LABEL_24:
    SpecificValueCaps = -1073741801;
  }
LABEL_25:
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
