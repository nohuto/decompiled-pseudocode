/*
 * XREFs of ACPIQueryGedDeviceInterface @ 0x1C00564A8
 * Callers:
 *     ACPIFilterIrpStartDevice @ 0x1C0093BE0 (ACPIFilterIrpStartDevice.c)
 *     ACPIBusIrpStartDevice @ 0x1C00A2450 (ACPIBusIrpStartDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_qqss @ 0x1C0017224 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_qss @ 0x1C001AA84 (WPP_RECORDER_SF_qss.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C0096C64 (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIQueryGedDeviceInterface(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  const char *v4; // rax
  const char *v5; // r8
  __int64 result; // rax
  __int64 v7; // r10
  __int64 v8; // rdx
  const char *v9; // rax
  const char *v10; // r8
  struct _DEVICE_OBJECT *v11; // rcx
  _QWORD v12[14]; // [rsp+50h] [rbp-19h] BYREF

  memset(v12, 0, sizeof(v12));
  v2 = a1[115];
  if ( *(_WORD *)(*(_QWORD *)v2 + 66LL) == 6 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)v2 + 104LL);
    if ( *(_DWORD *)(v7 + 16) == 1599293264 )
    {
      v11 = *(struct _DEVICE_OBJECT **)(v7 + 720);
      v12[9] = 0LL;
      v12[6] = &GUID_GED_INTERFACE_STANDARD;
      LOWORD(v12[5]) = 2075;
      v12[8] = v12;
      LODWORD(v12[7]) = 65576;
      result = ACPIInternalSendSynchronousIrp(v11);
      if ( (int)result >= 0 )
      {
        a1[117] = v12[4];
        a1[118] = v12[1];
      }
    }
    else
    {
      v8 = a1[1];
      v9 = (const char *)&unk_1C006FE7D;
      v10 = (const char *)&unk_1C006FE7D;
      if ( (v8 & 0x200000000000LL) != 0 )
      {
        v9 = (const char *)a1[70];
        if ( (v8 & 0x400000000000LL) != 0 )
          v10 = (const char *)a1[71];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0xAu,
          0x29u,
          (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
          v7,
          (char)a1,
          v9,
          v10);
      return 3221225473LL;
    }
  }
  else
  {
    v3 = a1[1];
    v4 = (const char *)&unk_1C006FE7D;
    v5 = (const char *)&unk_1C006FE7D;
    if ( (v3 & 0x200000000000LL) != 0 )
    {
      v4 = (const char *)a1[70];
      if ( (v3 & 0x400000000000LL) != 0 )
        v5 = (const char *)a1[71];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xAu,
        0x28u,
        (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
        (char)a1,
        v4,
        v5);
    return 3221225480LL;
  }
  return result;
}
