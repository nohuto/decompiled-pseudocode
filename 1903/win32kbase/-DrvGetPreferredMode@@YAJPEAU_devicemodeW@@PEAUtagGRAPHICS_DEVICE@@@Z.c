/*
 * XREFs of ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00A0934
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C003A320 (DrvEnumDisplaySettings.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00148AC (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     UpdateMonitorDevices @ 0x1C004D700 (UpdateMonitorDevices.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C004E650 (DrvDisplayConfigGetDeviceInfo.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall DrvGetPreferredMode(struct _devicemodeW *a1, struct tagGRAPHICS_DEVICE *a2)
{
  struct _devicemodeW *v3; // rdi
  unsigned int v4; // r12d
  int v5; // ebx
  unsigned int v6; // r14d
  _DWORD *v7; // rsi
  unsigned int v8; // r13d
  __int64 *v9; // rcx
  _OWORD *v10; // rax
  __int64 v11; // rdx
  int DeviceInfo; // ebx
  int v13; // eax
  unsigned int v14; // eax
  __int64 result; // rax
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-8D8h]
  __int64 v18; // [rsp+28h] [rbp-8D0h]
  _OWORD v20[5]; // [rsp+40h] [rbp-8B8h] BYREF
  _BYTE v21[944]; // [rsp+90h] [rbp-868h] BYREF
  _OWORD v22[13]; // [rsp+440h] [rbp-4B8h] BYREF
  __int64 v23; // [rsp+510h] [rbp-3E8h] BYREF
  __int64 v24; // [rsp+518h] [rbp-3E0h]
  __int128 v25; // [rsp+520h] [rbp-3D8h]
  __int128 v26; // [rsp+530h] [rbp-3C8h]
  __m128i v27; // [rsp+540h] [rbp-3B8h]
  __int128 v28; // [rsp+550h] [rbp-3A8h]
  __int64 v29; // [rsp+8A4h] [rbp-54h]

  v3 = a1;
  UpdateMonitorDevices();
  if ( (*((_DWORD *)a2 + 40) & 0x800000) == 0 )
    return 3221225711LL;
  v4 = 0x7FFF;
  v5 = 0x7FFF;
  v17 = 0x7FFF;
  v6 = 0x7FFF;
  v7 = PALLOCMEM2(0x100DBuLL, 0x76656447u, 1);
  if ( !v7 )
    return 3221225495LL;
  v8 = 0;
  if ( !*((_DWORD *)a2 + 54) )
    goto LABEL_16;
  do
  {
    v18 = *((_QWORD *)a2 + 28);
    if ( (*(_BYTE *)(v18 + 20LL * v8) & 3) == 3 )
    {
      memset(v21, 0, 0x3A8uLL);
      v9 = &v23;
      v10 = v21;
      v11 = 7LL;
      do
      {
        *(_OWORD *)v9 = *v10;
        *((_OWORD *)v9 + 1) = v10[1];
        *((_OWORD *)v9 + 2) = v10[2];
        *((_OWORD *)v9 + 3) = v10[3];
        *((_OWORD *)v9 + 4) = v10[4];
        *((_OWORD *)v9 + 5) = v10[5];
        *((_OWORD *)v9 + 6) = v10[6];
        v9 += 16;
        *((_OWORD *)v9 - 1) = v10[7];
        v10 += 8;
        --v11;
      }
      while ( v11 );
      *(_OWORD *)v9 = *v10;
      *((_OWORD *)v9 + 1) = v10[1];
      v9[4] = *((_QWORD *)v10 + 4);
      v23 = 0x3A8FFFFFFF9LL;
      v24 = *(_QWORD *)(v18 + 20LL * v8 + 8);
      LODWORD(v25) = *(_DWORD *)(v18 + 20LL * v8 + 4);
      DeviceInfo = DrvDisplayConfigGetDeviceInfo((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)&v23);
      memset(v22, 0, 0xC8uLL);
      if ( DeviceInfo < 0 )
      {
        memset(v20, 0, sizeof(v20));
        v24 = *((_QWORD *)&v20[0] + 1);
        v25 = v20[1];
        v26 = v20[2];
        v27 = (__m128i)v20[3];
        v28 = v20[4];
        v23 = 0x5000000003LL;
        v16 = *((_QWORD *)a2 + 28);
        v24 = *(_QWORD *)(v16 + 20LL * v8 + 8);
        LODWORD(v25) = *(_DWORD *)(v16 + 20LL * v8 + 4);
        if ( (int)DrvDisplayConfigGetDeviceInfo((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)&v23) < 0 )
          goto LABEL_23;
        v22[2] = v26;
        v22[3] = v27;
        v22[4] = v28;
        *((_QWORD *)&v22[5] + 1) = __PAIR64__(
                                     _mm_cvtsi128_si32(_mm_srli_si128(v27, 12)),
                                     _mm_cvtsi128_si32(_mm_srli_si128(v27, 8)));
        HIDWORD(v22[7]) = DWORD1(v25);
        v13 = DWORD2(v25);
      }
      else
      {
        *((_QWORD *)&v22[3] + 1) = v29;
        v13 = HIDWORD(v29);
        *(_QWORD *)&v22[3] = 0xFFFFFFFEFFFFFFFEuLL;
        HIDWORD(v22[4]) = 1;
        *((_QWORD *)&v22[5] + 1) = v29;
        HIDWORD(v22[7]) = v29;
      }
      LODWORD(v22[8]) = v13;
      *(_QWORD *)&v22[0] = 197511LL;
      LODWORD(v22[7]) = 1;
      DWORD2(v22[6]) = 1;
      LODWORD(v22[6]) = 21;
      if ( (int)((__int64 (__fastcall *)(_OWORD *, _DWORD *))qword_1C02152D8)(v22, v7) >= 0 )
      {
        v14 = v7[46];
        if ( v14 >= v6 )
          v14 = v6;
        v6 = v14;
        if ( v7[43] <= v4 )
        {
          v4 = v7[43];
          v5 = v7[44];
          v17 = v5;
          goto LABEL_14;
        }
      }
    }
LABEL_23:
    v5 = v17;
LABEL_14:
    ++v8;
  }
  while ( v8 < *((_DWORD *)a2 + 54) );
  v3 = a1;
LABEL_16:
  Win32FreePool((__int64)v7);
  result = 3221225713LL;
  if ( v4 != 0x7FFF )
    result = 0LL;
  v3->dmDisplayFrequency = v6;
  v3->dmPelsWidth = v4;
  v3->dmPelsHeight = v5;
  v3->dmFields = 5767168;
  return result;
}
