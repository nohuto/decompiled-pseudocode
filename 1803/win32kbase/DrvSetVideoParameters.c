/*
 * XREFs of DrvSetVideoParameters @ 0x1C00D5D64
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C004C440 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     DrvGetDeviceFromName @ 0x1C0045200 (DrvGetDeviceFromName.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0052BF4 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 */

__int64 __fastcall DrvSetVideoParameters(UNICODE_STRING *a1, __int64 a2, __int64 a3, _OWORD *a4, int a5, int a6)
{
  int v7; // r12d
  unsigned int v10; // esi
  wchar_t *DeviceFromName; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  bool v14; // zf
  __int64 v15; // rax
  __int64 v17; // rcx
  _DWORD *v18; // rbx
  __int64 v19; // rax
  _OWORD *v20; // rcx
  _OWORD *v21; // rax
  __int64 v22; // r15
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // eax
  _OWORD *v26; // rax
  unsigned int v27; // [rsp+80h] [rbp+8h] BYREF
  _DWORD *v28; // [rsp+88h] [rbp+10h]

  v7 = a3;
  v10 = -5;
  DeviceFromName = 0LL;
  v12 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v12 + 24) = a1;
  *(_QWORD *)(v12 + 32) = a2;
  WdLogEvent5_WdEvent(v12);
  if ( a1 )
  {
    DeviceFromName = DrvGetDeviceFromName(a1, v7);
    v14 = DeviceFromName == 0LL;
  }
  else
  {
    if ( a2 )
      DeviceFromName = *(wchar_t **)(a2 + 2568);
    v14 = DeviceFromName == 0LL;
  }
  if ( v14 || DeviceFromName == (wchar_t *)-4LL )
  {
    v15 = WdLogNewEntry5_WdTrace(v13);
LABEL_33:
    WdLogEvent5_WdTrace(v15);
    return v10;
  }
  if ( !DeviceFromName )
  {
LABEL_32:
    v15 = WdLogNewEntry5_WdTrace(v13);
    *(_QWORD *)(v15 + 24) = (int)v10;
    goto LABEL_33;
  }
  if ( a4 )
  {
    if ( a6 && (*((_DWORD *)DeviceFromName + 40) & 0x800000) == 0 )
      return 0xFFFFFFFFLL;
    v18 = PALLOCMEM2(0x2C8uLL, 0x73726447u, 0);
    v28 = v18;
    if ( !v18 )
    {
      v19 = WdLogNewEntry5_WdTrace(v17);
      WdLogEvent5_WdTrace(v19);
      return 0xFFFFFFFFLL;
    }
    v20 = v18;
    v21 = a4;
    v22 = 2LL;
    v23 = 2LL;
    do
    {
      *v20 = *v21;
      v20[1] = v21[1];
      v20[2] = v21[2];
      v20[3] = v21[3];
      v20[4] = v21[4];
      v20[5] = v21[5];
      v20[6] = v21[6];
      v20 += 8;
      *(v20 - 1) = v21[7];
      v21 += 8;
      --v23;
    }
    while ( v23 );
    *v20 = *v21;
    v20[1] = v21[1];
    v20[2] = v21[2];
    v20[3] = v21[3];
    v20[4] = v21[4];
    v20[5] = v21[5];
    *((_DWORD *)v20 + 24) = *((_DWORD *)v21 + 24);
    if ( a5 )
    {
      v24 = v18[5];
      if ( v24 != 1
        && (v24 != 2 || ((v18[6] & 0x100) == 0 || v18[21] != 2) && ((v18[6] & 0x100) == 0 || v18[21] != 4 || v18[24])) )
      {
        Win32FreePool((__int64)v18);
        return v10;
      }
    }
    v25 = GreDeviceIoControlImpl(
            *((PDEVICE_OBJECT *)DeviceFromName + 17),
            0x230020u,
            v18,
            0x164u,
            v18,
            0x164u,
            &v27,
            0,
            1);
    if ( v25 )
      v25 = -5;
    v10 = v25;
    v26 = v18;
    do
    {
      *a4 = *v26;
      a4[1] = v26[1];
      a4[2] = v26[2];
      a4[3] = v26[3];
      a4[4] = v26[4];
      a4[5] = v26[5];
      a4[6] = v26[6];
      a4 += 8;
      *(a4 - 1) = v26[7];
      v26 += 8;
      --v22;
    }
    while ( v22 );
    *a4 = *v26;
    a4[1] = v26[1];
    a4[2] = v26[2];
    a4[3] = v26[3];
    a4[4] = v26[4];
    a4[5] = v26[5];
    *((_DWORD *)a4 + 24) = *((_DWORD *)v26 + 24);
    Win32FreePool((__int64)v18);
    goto LABEL_32;
  }
  return v10;
}
