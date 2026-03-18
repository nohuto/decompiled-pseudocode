/*
 * XREFs of UsbhUpdateUxdSettings @ 0x1C002139C
 * Callers:
 *     UsbhSetupDevice @ 0x1C0020B00 (UsbhSetupDevice.c)
 *     UsbhIoctlCyclePort @ 0x1C004BF70 (UsbhIoctlCyclePort.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhFreeID @ 0x1C0020F94 (UsbhFreeID.c)
 *     UsbhAcquirePdoUxdLock @ 0x1C0021360 (UsbhAcquirePdoUxdLock.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C0022120 (UsbhGetGlobalUxdSettings.c)
 *     UsbhBuildDeviceID @ 0x1C0023DF0 (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x1C0024050 (UsbhBuildHardwareID.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0051C08 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_Sqd @ 0x1C0056DB0 (WPP_RECORDER_SF_Sqd.c)
 *     UsbhGetUxdDeviceKey @ 0x1C005C0CC (UsbhGetUxdDeviceKey.c)
 *     UsbhGetUxdPortKey @ 0x1C005C328 (UsbhGetUxdPortKey.c)
 *     UsbhReleasePdoUxdLock @ 0x1C005C80C (UsbhReleasePdoUxdLock.c)
 *     UsbhUpdateSqmFlags @ 0x1C0077008 (UsbhUpdateSqmFlags.c)
 */

__int64 __fastcall UsbhUpdateUxdSettings(__int64 a1, struct _DEVICE_OBJECT *a2, char a3, _BYTE *a4)
{
  _DWORD *v8; // rdi
  _DWORD *v9; // rsi
  __int64 v10; // rcx
  __int128 v11; // xmm0
  __int64 v12; // rcx
  _DWORD *v13; // rax
  __int64 v15; // rcx
  PDEVICE_OBJECT v16; // rcx
  int v17; // esi
  int v18; // edx
  int v19; // r8d
  int v20; // edx
  int v21; // r8d
  int v22; // r8d
  __int128 v23; // [rsp+40h] [rbp-99h] BYREF
  _OWORD Source1[5]; // [rsp+50h] [rbp-89h] BYREF
  _OWORD Source2[5]; // [rsp+A0h] [rbp-39h] BYREF

  v8 = PdoExt((__int64)a2);
  v9 = FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids);
  memset(Source1, 0, 0x44uLL);
  memset(Source2, 0, 0x44uLL);
  UsbhAcquirePdoUxdLock(v10, (__int64)a2);
  *a4 = 0;
  v11 = *(_OWORD *)(v8 + 650);
  v8[355] &= ~0x10000u;
  Source2[0] = v11;
  Source2[1] = *(_OWORD *)(v8 + 654);
  Source2[2] = *(_OWORD *)(v8 + 658);
  Source2[3] = *(_OWORD *)(v8 + 662);
  LODWORD(Source2[4]) = v8[666];
  UsbhGetGlobalUxdSettings(v12, v9 + 1294);
  if ( !v9[1297] || dword_1C006E62C )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        21,
        (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids);
    v13 = PdoExt((__int64)a2);
    KeReleaseSemaphore((PRKSEMAPHORE)(v13 + 642), 16, 1, 0);
    return 0LL;
  }
  if ( (int)UsbhGetUxdPortKey(a1, *((unsigned __int16 *)v8 + 714), Source1) < 0 )
  {
    if ( (int)UsbhGetUxdDeviceKey(v15, a2, Source1) < 0 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          24,
          (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids,
          *((_WORD *)v8 + 714));
      goto LABEL_17;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_DDD(
        WPP_GLOBAL_Control->DeviceExtension,
        *((unsigned __int16 *)v8 + 704),
        (_DWORD)WPP_GLOBAL_Control,
        23,
        (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids,
        *((_WORD *)v8 + 704),
        *((_WORD *)v8 + 705),
        *((_WORD *)v8 + 706));
  }
  else if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      22,
      (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids,
      *((_WORD *)v8 + 714));
  }
  v8[355] |= 0x10000u;
LABEL_17:
  *(_OWORD *)(v8 + 650) = Source1[0];
  *(_OWORD *)(v8 + 654) = Source1[1];
  *(_OWORD *)(v8 + 658) = Source1[2];
  *(_OWORD *)(v8 + 662) = Source1[3];
  v8[666] = Source1[4];
  if ( RtlCompareMemory(Source1, Source2, 0x44uLL) != 68 && (v8[355] & 4) == 0 )
    *a4 = 1;
  v17 = 0;
  if ( *a4 && a3 )
  {
    v17 = UsbhBuildHardwareID(a1, a2, &v23);
    if ( v17 < 0 )
    {
      v16 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          26,
          (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids);
    }
    else
    {
      UsbhFreeID((__int64)(v8 + 524));
      *((_OWORD *)v8 + 131) = v23;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_Sqd(
          WPP_GLOBAL_Control->DeviceExtension,
          v18,
          v19,
          25,
          (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids,
          *((__int64 *)&v23 + 1),
          SBYTE8(v23),
          SBYTE4(v23));
      v17 = UsbhBuildDeviceID(a1, a2, &v23);
      if ( v17 < 0 )
      {
        v16 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            28,
            (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids);
      }
      else
      {
        UsbhFreeID((__int64)(v8 + 520));
        *((_OWORD *)v8 + 130) = v23;
        v16 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_Sqd(
            WPP_GLOBAL_Control->DeviceExtension,
            v20,
            v21,
            27,
            (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids,
            *((__int64 *)&v23 + 1),
            SBYTE8(v23),
            SBYTE4(v23));
      }
    }
  }
  UsbhReleasePdoUxdLock(v16, a2);
  v22 = v8[701];
  if ( (v22 & 4) == 0 && (v8[355] & 0x10000) != 0 )
  {
    v8[701] = v22 | 4;
    UsbhUpdateSqmFlags(a2);
  }
  return (unsigned int)v17;
}
