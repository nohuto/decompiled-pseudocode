/*
 * XREFs of DrvSetVideoParameters @ 0x1C01054CC
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C004B98C (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     DrvGetDeviceFromName @ 0x1C0015070 (DrvGetDeviceFromName.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0041E08 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 */

__int64 __fastcall DrvSetVideoParameters(PCUNICODE_STRING String1, __int64 a2, _OWORD *a3, int a4, int a5)
{
  _OWORD *v6; // rdi
  unsigned int v9; // esi
  wchar_t *DeviceFromName; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  bool v13; // zf
  __int64 v14; // rax
  __int64 v16; // rcx
  _DWORD *v17; // rbx
  __int64 v18; // rax
  _OWORD *v19; // rcx
  _OWORD *v20; // rax
  __int64 v21; // r15
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // eax
  _OWORD *v25; // rax
  unsigned int v26; // [rsp+80h] [rbp+8h] BYREF
  _DWORD *v27; // [rsp+88h] [rbp+10h]

  v6 = a3;
  v9 = -5;
  DeviceFromName = 0LL;
  v11 = WdLogNewEntry5_WdEvent(String1, a2, a3);
  *(_QWORD *)(v11 + 24) = String1;
  *(_QWORD *)(v11 + 32) = a2;
  WdLogEvent5_WdEvent(v11);
  if ( String1 )
  {
    DeviceFromName = DrvGetDeviceFromName(String1);
    v13 = DeviceFromName == 0LL;
  }
  else
  {
    if ( a2 )
      DeviceFromName = *(wchar_t **)(a2 + 2576);
    v13 = DeviceFromName == 0LL;
  }
  if ( v13 || DeviceFromName == (wchar_t *)-4LL )
  {
    v14 = WdLogNewEntry5_WdTrace(v12);
LABEL_33:
    WdLogEvent5_WdTrace(v14);
    return v9;
  }
  if ( !DeviceFromName )
  {
LABEL_32:
    v14 = WdLogNewEntry5_WdTrace(v12);
    *(_QWORD *)(v14 + 24) = (int)v9;
    goto LABEL_33;
  }
  if ( v6 )
  {
    if ( a5 && (*((_DWORD *)DeviceFromName + 40) & 0x800000) == 0 )
      return 0xFFFFFFFFLL;
    v17 = PALLOCMEM2(0x2C8uLL, 1936876615LL, 0);
    v27 = v17;
    if ( !v17 )
    {
      v18 = WdLogNewEntry5_WdTrace(v16);
      WdLogEvent5_WdTrace(v18);
      return 0xFFFFFFFFLL;
    }
    v19 = v17;
    v20 = v6;
    v21 = 2LL;
    v22 = 2LL;
    do
    {
      *v19 = *v20;
      v19[1] = v20[1];
      v19[2] = v20[2];
      v19[3] = v20[3];
      v19[4] = v20[4];
      v19[5] = v20[5];
      v19[6] = v20[6];
      v19 += 8;
      *(v19 - 1) = v20[7];
      v20 += 8;
      --v22;
    }
    while ( v22 );
    *v19 = *v20;
    v19[1] = v20[1];
    v19[2] = v20[2];
    v19[3] = v20[3];
    v19[4] = v20[4];
    v19[5] = v20[5];
    *((_DWORD *)v19 + 24) = *((_DWORD *)v20 + 24);
    if ( a4 )
    {
      v23 = v17[5];
      if ( v23 != 1
        && (v23 != 2 || ((v17[6] & 0x100) == 0 || v17[21] != 2) && ((v17[6] & 0x100) == 0 || v17[21] != 4 || v17[24])) )
      {
        Win32FreePool((__int64)v17);
        return v9;
      }
    }
    v24 = GreDeviceIoControlImpl(
            *((PDEVICE_OBJECT *)DeviceFromName + 17),
            0x230020u,
            v17,
            0x164u,
            v17,
            0x164u,
            &v26,
            0,
            1);
    if ( v24 )
      v24 = -5;
    v9 = v24;
    v25 = v17;
    do
    {
      *v6 = *v25;
      v6[1] = v25[1];
      v6[2] = v25[2];
      v6[3] = v25[3];
      v6[4] = v25[4];
      v6[5] = v25[5];
      v6[6] = v25[6];
      v6 += 8;
      *(v6 - 1) = v25[7];
      v25 += 8;
      --v21;
    }
    while ( v21 );
    *v6 = *v25;
    v6[1] = v25[1];
    v6[2] = v25[2];
    v6[3] = v25[3];
    v6[4] = v25[4];
    v6[5] = v25[5];
    *((_DWORD *)v6 + 24) = *((_DWORD *)v25 + 24);
    Win32FreePool((__int64)v17);
    goto LABEL_32;
  }
  return v9;
}
