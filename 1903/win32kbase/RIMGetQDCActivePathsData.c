/*
 * XREFs of RIMGetQDCActivePathsData @ 0x1C0065EDC
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C00658F8 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     RIMOnDisplayStateChange @ 0x1C0068E58 (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0138210 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C013DBB8 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0141E50 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMFindMonitorForDigitizer @ 0x1C0146150 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0148F58 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     DrvQueryDisplayConfig @ 0x1C00500E0 (DrvQueryDisplayConfig.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C0050200 (DrvGetDisplayConfigBufferSizes.c)
 *     RIMFreeQDCActivePathsData @ 0x1C0065C28 (RIMFreeQDCActivePathsData.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

unsigned int *__fastcall RIMGetQDCActivePathsData(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int DisplayConfigBufferSizes; // esi
  __int64 v6; // rax
  void *v7; // rax
  bool v8; // sf
  unsigned int v10; // edx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+88h] [rbp-78h]
  int v19; // [rsp+90h] [rbp-70h]
  const wchar_t *v20; // [rsp+98h] [rbp-68h]
  char *v21; // [rsp+A0h] [rbp-60h]
  int v22; // [rsp+A8h] [rbp-58h]
  int *v23; // [rsp+B0h] [rbp-50h]
  int v24; // [rsp+B8h] [rbp-48h]
  __int64 v25; // [rsp+C0h] [rbp-40h]
  int v26; // [rsp+C8h] [rbp-38h]
  const wchar_t *v27; // [rsp+D0h] [rbp-30h]
  int *v28; // [rsp+D8h] [rbp-28h]
  int v29; // [rsp+E0h] [rbp-20h]
  int *v30; // [rsp+E8h] [rbp-18h]
  int v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  int v33; // [rsp+100h] [rbp+0h]
  const wchar_t *v34; // [rsp+108h] [rbp+8h]
  char *v35; // [rsp+110h] [rbp+10h]
  int v36; // [rsp+118h] [rbp+18h]
  int *v37; // [rsp+120h] [rbp+20h]
  int v38; // [rsp+128h] [rbp+28h]
  __int64 v39; // [rsp+130h] [rbp+30h]
  int v40; // [rsp+138h] [rbp+38h]
  _BYTE v41[40]; // [rsp+140h] [rbp+40h] BYREF

  v3 = 0LL;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  if ( gProtocolType )
    DisplayConfigBufferSizes = -1073741823;
  else
    DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(18LL, (__int64)a1, a3);
  if ( DisplayConfigBufferSizes >= 0 )
  {
    v6 = *a1;
    if ( !(_DWORD)v6 )
      goto LABEL_9;
    v7 = Win32AllocPoolZInit(200 * v6, 1836086098LL);
    *((_QWORD *)a1 + 1) = v7;
    if ( !v7 )
    {
      DisplayConfigBufferSizes = -1073741801;
      goto LABEL_9;
    }
    DisplayConfigBufferSizes = DrvQueryDisplayConfig(2147483666LL, a1, (__int64)v7, 0LL);
    if ( DisplayConfigBufferSizes >= 0 )
    {
      if ( *a1 )
      {
        v14 = 0;
        v15 = 0LL;
        *(_QWORD *)v16 = 0LL;
        QueryTable.Flags = 288;
        v19 = 288;
        QueryTable.Name = L"ScreenPosition.Left";
        QueryTable.EntryContext = &v15;
        QueryTable.DefaultData = &v14;
        v20 = L"ScreenPosition.Top";
        v21 = (char *)&v15 + 4;
        v23 = &v14;
        v27 = L"ScreenPosition.Right";
        v28 = v16;
        v30 = &v14;
        v34 = L"ScreenPosition.Bottom";
        v35 = (char *)&v16[1];
        v26 = 288;
        v33 = 288;
        QueryTable.DefaultType = 67108868;
        QueryTable.DefaultLength = 4;
        v22 = 67108868;
        v24 = 4;
        v29 = 67108868;
        v31 = 4;
        v36 = 67108868;
        v38 = 4;
        v37 = &v14;
        QueryTable.QueryRoutine = 0LL;
        v18 = 0LL;
        v25 = 0LL;
        v32 = 0LL;
        v39 = 0LL;
        v40 = 0;
        memset(v41, 0, sizeof(v41));
        if ( RtlQueryRegistryValues(3u, L"GRE_Initialize\\OverrideScreenLayout", &QueryTable, 0LL, 0LL) >= 0
          && (int)v15 < v16[0]
          && SHIDWORD(v15) < v16[1] )
        {
          v10 = 0;
          if ( *a1 )
          {
            v11 = *((_QWORD *)a1 + 1) + 140LL;
            do
            {
              if ( *(_DWORD *)(v11 - 60) == 0x80000000 && *(_DWORD *)(v11 - 84) && *(_DWORD *)(v11 - 80) )
              {
                *(_QWORD *)v11 = 0LL;
                v12 = v16[0] - v15;
                *(_DWORD *)(v11 - 52) = v16[0] - v15;
                *(_DWORD *)(v11 - 84) = v12;
                *(_DWORD *)(v11 + 8) = v12;
                v13 = v16[1] - HIDWORD(v15);
                *(_DWORD *)(v11 - 48) = v16[1] - HIDWORD(v15);
                *(_DWORD *)(v11 - 80) = v13;
                *(_DWORD *)(v11 + 12) = v13;
              }
              ++v10;
              v11 += 200LL;
            }
            while ( v10 < *a1 );
          }
        }
      }
LABEL_9:
      v8 = DisplayConfigBufferSizes < 0;
      if ( DisplayConfigBufferSizes >= 0 )
        goto LABEL_10;
    }
  }
  RIMFreeQDCActivePathsData(a1);
  v8 = DisplayConfigBufferSizes < 0;
LABEL_10:
  if ( !v8 )
    return a1;
  return (unsigned int *)v3;
}
