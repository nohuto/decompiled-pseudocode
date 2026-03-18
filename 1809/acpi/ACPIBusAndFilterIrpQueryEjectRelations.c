/*
 * XREFs of ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C00A9CDC
 * Callers:
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C008D050 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C008D7E0 (ACPIFilterIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C00170BC (ACPIDockFindCorrespondingDock.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIDockIsDockDevice @ 0x1C00206B0 (ACPIDockIsDockDevice.c)
 *     WPP_RECORDER_SF_qqqss @ 0x1C0049214 (WPP_RECORDER_SF_qqqss.c)
 *     ACPIDetectEjectDevices @ 0x1C004D880 (ACPIDetectEjectDevices.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryEjectRelations(ULONG_PTR a1, char a2, PVOID *a3)
{
  __int64 DeviceExtension; // rax
  _QWORD *v6; // rbx
  __int64 *v7; // rcx
  __int64 v8; // r8
  const char *v9; // rax
  const char *v10; // r10
  __int64 CorrespondingDock; // rax
  int v13; // edi
  __int64 v14; // r8
  char *v15; // rax
  char *v16; // rdx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = (_QWORD *)DeviceExtension;
  v7 = *(__int64 **)(DeviceExtension + 712);
  if ( v7 )
  {
    if ( ACPIDockIsDockDevice(v7) )
      CorrespondingDock = ACPIDockFindCorrespondingDock((__int64)v6);
    else
      CorrespondingDock = 0LL;
    v13 = ACPIDetectEjectDevices((__int64)v6, a3, CorrespondingDock);
    if ( v13 < 0 )
    {
      v14 = v6[1];
      v15 = byte_1C006E28A;
      v16 = byte_1C006E28A;
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v15 = (char *)v6[70];
        if ( (v14 & 0x400000000000LL) != 0 )
          v16 = (char *)v6[71];
      }
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x11u,
        (__int64)&WPP_5ea0bed1d6f13f26cf29dd07beb1e62d_Traceguids,
        v13,
        (char)v6,
        (__int64)v15,
        (__int64)v16);
    }
    return (unsigned int)v13;
  }
  else
  {
    v8 = *(_QWORD *)(DeviceExtension + 8);
    v9 = byte_1C006E28A;
    v10 = byte_1C006E28A;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v9 = (const char *)v6[70];
      if ( (v8 & 0x400000000000LL) != 0 )
        v10 = (const char *)v6[71];
    }
    WPP_RECORDER_SF_qqqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0x10u,
      (__int64)&WPP_5ea0bed1d6f13f26cf29dd07beb1e62d_Traceguids,
      a2,
      0,
      (char)v6,
      v9,
      v10);
    return 3221225485LL;
  }
}
