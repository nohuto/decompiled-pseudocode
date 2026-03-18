/*
 * XREFs of RIMGetQDCActivePathsData @ 0x1C0051848
 * Callers:
 *     ?_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ @ 0x1C0053880 (-_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ.c)
 *     RIMOnDisplayStateChange @ 0x1C0054E10 (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C00E15E0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFindMonitorForDigitizer @ 0x1C00E9050 (RIMFindMonitorForDigitizer.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C00EA954 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00F3160 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     DrvGetDisplayConfigBufferSizes @ 0x1C0042660 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C00426D0 (DrvQueryDisplayConfig.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     RIMFreeQDCActivePathsData @ 0x1C00535D4 (RIMFreeQDCActivePathsData.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

_QWORD *__fastcall RIMGetQDCActivePathsData(_QWORD *a1)
{
  __int64 v1; // rbx
  int DisplayConfigBufferSizes; // esi
  __int64 v4; // rax
  void *v5; // rax
  bool v6; // sf
  unsigned int v8; // edx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  int v14[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+88h] [rbp-78h]
  int v17; // [rsp+90h] [rbp-70h]
  const wchar_t *v18; // [rsp+98h] [rbp-68h]
  char *v19; // [rsp+A0h] [rbp-60h]
  int v20; // [rsp+A8h] [rbp-58h]
  int *v21; // [rsp+B0h] [rbp-50h]
  int v22; // [rsp+B8h] [rbp-48h]
  __int64 v23; // [rsp+C0h] [rbp-40h]
  int v24; // [rsp+C8h] [rbp-38h]
  const wchar_t *v25; // [rsp+D0h] [rbp-30h]
  int *v26; // [rsp+D8h] [rbp-28h]
  int v27; // [rsp+E0h] [rbp-20h]
  int *v28; // [rsp+E8h] [rbp-18h]
  int v29; // [rsp+F0h] [rbp-10h]
  __int64 v30; // [rsp+F8h] [rbp-8h]
  int v31; // [rsp+100h] [rbp+0h]
  const wchar_t *v32; // [rsp+108h] [rbp+8h]
  char *v33; // [rsp+110h] [rbp+10h]
  int v34; // [rsp+118h] [rbp+18h]
  int *v35; // [rsp+120h] [rbp+20h]
  int v36; // [rsp+128h] [rbp+28h]
  __int64 v37; // [rsp+130h] [rbp+30h]
  int v38; // [rsp+138h] [rbp+38h]
  _BYTE v39[40]; // [rsp+140h] [rbp+40h] BYREF

  v1 = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( gProtocolType )
    DisplayConfigBufferSizes = -1073741823;
  else
    DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(0x12u, (__int64)a1);
  if ( DisplayConfigBufferSizes >= 0 )
  {
    v4 = *(unsigned int *)a1;
    if ( !(_DWORD)v4 )
      goto LABEL_9;
    v5 = Win32AllocPoolZInit(200 * v4, 0x6D707352u);
    a1[1] = v5;
    if ( !v5 )
    {
      DisplayConfigBufferSizes = -1073741801;
      goto LABEL_9;
    }
    DisplayConfigBufferSizes = DrvQueryDisplayConfig(0x80000012, (__int64)a1, (__int64)v5, 0LL);
    if ( DisplayConfigBufferSizes >= 0 )
    {
      if ( *(_DWORD *)a1 )
      {
        v12 = 0;
        v13 = 0LL;
        *(_QWORD *)v14 = 0LL;
        QueryTable.Flags = 288;
        v17 = 288;
        QueryTable.Name = L"ScreenPosition.Left";
        QueryTable.EntryContext = &v13;
        QueryTable.DefaultData = &v12;
        v18 = L"ScreenPosition.Top";
        v19 = (char *)&v13 + 4;
        v21 = &v12;
        v25 = L"ScreenPosition.Right";
        v26 = v14;
        v28 = &v12;
        v32 = L"ScreenPosition.Bottom";
        v33 = (char *)&v14[1];
        v24 = 288;
        v31 = 288;
        QueryTable.DefaultType = 67108868;
        QueryTable.DefaultLength = 4;
        v20 = 67108868;
        v22 = 4;
        v27 = 67108868;
        v29 = 4;
        v34 = 67108868;
        v36 = 4;
        v35 = &v12;
        QueryTable.QueryRoutine = 0LL;
        v16 = 0LL;
        v23 = 0LL;
        v30 = 0LL;
        v37 = 0LL;
        v38 = 0;
        memset(v39, 0, sizeof(v39));
        if ( RtlQueryRegistryValues(3u, L"GRE_Initialize\\OverrideScreenLayout", &QueryTable, 0LL, 0LL) >= 0
          && (int)v13 < v14[0]
          && SHIDWORD(v13) < v14[1] )
        {
          v8 = 0;
          if ( *(_DWORD *)a1 )
          {
            v9 = a1[1] + 140LL;
            do
            {
              if ( *(_DWORD *)(v9 - 60) == 0x80000000 && *(_DWORD *)(v9 - 84) && *(_DWORD *)(v9 - 80) )
              {
                *(_QWORD *)v9 = 0LL;
                v10 = v14[0] - v13;
                *(_DWORD *)(v9 - 52) = v14[0] - v13;
                *(_DWORD *)(v9 - 84) = v10;
                *(_DWORD *)(v9 + 8) = v10;
                v11 = v14[1] - HIDWORD(v13);
                *(_DWORD *)(v9 - 48) = v14[1] - HIDWORD(v13);
                *(_DWORD *)(v9 - 80) = v11;
                *(_DWORD *)(v9 + 12) = v11;
              }
              ++v8;
              v9 += 200LL;
            }
            while ( v8 < *(_DWORD *)a1 );
          }
        }
      }
LABEL_9:
      v6 = DisplayConfigBufferSizes < 0;
      if ( DisplayConfigBufferSizes >= 0 )
        goto LABEL_10;
    }
  }
  RIMFreeQDCActivePathsData(a1);
  v6 = DisplayConfigBufferSizes < 0;
LABEL_10:
  if ( !v6 )
    return a1;
  return (_QWORD *)v1;
}
