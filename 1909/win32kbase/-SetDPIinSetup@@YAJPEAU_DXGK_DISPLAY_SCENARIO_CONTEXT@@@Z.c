/*
 * XREFs of ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01101FC
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C005EBE8 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     DrvSetDisplayConfig @ 0x1C0048030 (DrvSetDisplayConfig.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C004FC2C (DrvGetCurrentDpiInfoFromHDev.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C006388C (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     GreReinitializeStockFonts @ 0x1C00A8920 (GreReinitializeStockFonts.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall SetDPIinSetup(struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a1)
{
  int CurrentDpiInfoFromHDev; // edi
  unsigned int v4; // kr00_4
  unsigned int v5; // ebx
  struct _MDEV *v6; // rdx
  __int64 v7; // rcx
  UNICODE_STRING String2; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v11; // [rsp+D8h] [rbp-28h]
  int v12; // [rsp+E0h] [rbp-20h]
  __int64 v13; // [rsp+E8h] [rbp-18h]
  __int64 v14; // [rsp+F0h] [rbp-10h]
  int v15; // [rsp+F8h] [rbp-8h]
  __int64 v16; // [rsp+100h] [rbp+0h]
  int v17; // [rsp+108h] [rbp+8h]
  _DWORD v18[32]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v19; // [rsp+1A8h] [rbp+A8h] BYREF
  int v20; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _MDEV *v21; // [rsp+1B8h] [rbp+B8h] BYREF

  QueryTable.Flags = 292;
  v20 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  QueryTable.Name = L"ImageState";
  QueryTable.EntryContext = &DestinationString;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.DefaultType = 16777217;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v11 = 0LL;
  v12 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v16 = 0LL;
  v17 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( RtlQueryRegistryValues(
         0,
         L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\State",
         &QueryTable,
         0LL,
         0LL) < 0 )
    goto LABEL_4;
  RtlInitUnicodeString(&String2, L"IMAGE_STATE_SPECIALIZE_RESEAL_TO_OOBE");
  if ( RtlCompareUnicodeString(&DestinationString, &String2, 1u) )
  {
    RtlInitUnicodeString(&String2, L"IMAGE_STATE_COMPLETE");
    if ( RtlCompareUnicodeString(&DestinationString, &String2, 1u) )
      return 3221225474LL;
LABEL_4:
    RtlDeleteRegistryValue(
      0,
      L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\DPI",
      L"Overrode");
    return 3221225474LL;
  }
  QueryTable.Flags |= 0x80u;
  QueryTable.Name = L"Upgrade";
  QueryTable.EntryContext = &v20;
  if ( RtlQueryRegistryValues(0, L"\\Registry\\Machine\\SYSTEM\\Setup", &QueryTable, 0LL, 0LL) >= 0 )
    return 3221225474LL;
  QueryTable.Name = L"Overrode";
  if ( RtlQueryRegistryValues(
         0,
         L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\DPI",
         &QueryTable,
         0LL,
         0LL) >= 0 )
    return 3221225474LL;
  memset(v18, 0, 0x60uLL);
  CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(*(_QWORD *)(*(_QWORD *)(gpDispInfo + 96) + 232LL), (__int64)v18);
  v4 = 96 * v18[2] + 50;
  v5 = v4 / 0x64;
  if ( CurrentDpiInfoFromHDev >= 0 )
  {
    gbSetupDPIInitialized = 1;
    if ( (int)IsGetDpiSettingSupported() >= 0 )
      GetDpiSetting(1LL, &v20);
    if ( v20 != v5
      && (int)IsSetDpiSettingSupported() >= 0
      && (int)SetDpiSetting(1LL, v5) >= 0
      && (int)IsSetDpiScalingSettingSupported() >= 0
      && (int)SetDpiScalingSetting(1LL, v4 / 0x64 > 0x78) >= 0 )
    {
      gDrvDpiWin8Style = 0;
      LOBYTE(v19) = 0;
      gDrvDpiAdjusted = 0;
      if ( (int)DrvSetDisplayConfig(
                  0,
                  0LL,
                  2191LL,
                  0,
                  0LL,
                  0,
                  0LL,
                  0LL,
                  *(struct _MDEV **)(gpDispInfo + 16),
                  &v21,
                  0LL,
                  0LL,
                  (char *)&v19,
                  0LL,
                  (__int64)a1) >= 0
        && !(_BYTE)v19 )
      {
        GreReinitializeStockFonts(v5, 1);
        v6 = v21;
        *(_QWORD *)(gpDispInfo + 40) = *(_QWORD *)v21;
        *(_QWORD *)(gpDispInfo + 16) = v6;
        v19 = *(_QWORD *)(gpDispInfo + 40);
        vGetDeviceCaps((struct PDEVOBJ *)&v19, gpGdiDevCaps);
        *((_WORD *)gpsi + 3499) = v5;
        *(_WORD *)(PsGetCurrentProcessWin32Process(v7) + 284) = *((_WORD *)gpsi + 3499);
      }
    }
  }
  return (unsigned int)CurrentDpiInfoFromHDev;
}
