/*
 * XREFs of ACPIBusIrpSurpriseRemoval @ 0x1C004BFA0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00028B0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002D8F4 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIFanStopDevice @ 0x1C0053904 (ACPIFanStopDevice.c)
 *     ACPIInternalIsReportedMissing @ 0x1C00550EC (ACPIInternalIsReportedMissing.c)
 *     ACPIThermalStopZone @ 0x1C005DF70 (ACPIThermalStopZone.c)
 *     ACPIInitStopDevice @ 0x1C008E718 (ACPIInitStopDevice.c)
 *     IsPciBus @ 0x1C0096BA0 (IsPciBus.c)
 *     EnableDisableRegions @ 0x1C009A358 (EnableDisableRegions.c)
 *     EnableDisableIPMIRegions @ 0x1C00AC2D4 (EnableDisableIPMIRegions.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1C00ACF68 (ACPIPepCleanupPlatformNotificationSupport.c)
 */

__int64 __fastcall ACPIBusIrpSurpriseRemoval(ULONG_PTR a1, IRP *a2)
{
  unsigned __int8 MinorFunction; // r14
  __int64 DeviceExtension; // rax
  ULONG_PTR v5; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rcx
  struct _DEVICE_OBJECT *v11; // rcx
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  const char *v19; // rcx
  const char *v20; // rdx
  __int64 v21; // rax

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = DeviceExtension;
  if ( *(_DWORD *)(DeviceExtension + 320) == 4 )
  {
    a2->IoStatus.Status = -1073741810;
    IofCompleteRequest(a2, 0);
    return 3221225486LL;
  }
  else
  {
    if ( (unsigned __int8)ACPIInternalIsReportedMissing(DeviceExtension) )
    {
      v9 = *(_QWORD *)(v5 + 952);
      if ( (v9 & 0x20000000) != 0 )
      {
        v10 = *(_QWORD *)(v5 + 744);
        if ( v10 )
        {
          v11 = *(struct _DEVICE_OBJECT **)(v10 + 736);
          if ( v11 )
          {
            IoInvalidateDeviceRelations(v11, BusRelations);
            v9 = *(_QWORD *)(v5 + 952);
          }
        }
      }
      v12 = v9 & 0x8000;
      if ( (unsigned __int8)IsPciBus(*(_QWORD *)(v5 + 720)) || v12 )
      {
        LOBYTE(v14) = v12 != 0;
        EnableDisableRegions(*(_QWORD *)(v5 + 712), 0LL, v14);
      }
      v15 = *(_QWORD *)(v5 + 8);
      if ( (v15 & 0x1000) != 0 )
      {
        EnableDisableIPMIRegions(*(_QWORD *)(v5 + 712), 0LL);
        v15 = *(_QWORD *)(v5 + 8);
      }
      if ( (v15 & 0x8000000) != 0 )
      {
        ACPIThermalStopZone(v5);
      }
      else
      {
        v16 = *(_QWORD *)(v5 + 952);
        if ( (v16 & 0x200000000LL) != 0 )
        {
          ACPIFanStopDevice(v5);
        }
        else if ( (v16 & 0x10000000000LL) != 0 )
        {
          ACPIPepCleanupPlatformNotificationSupport(v5);
        }
      }
      v17 = *(_DWORD *)(v5 + 952);
      *(_DWORD *)(v5 + 320) = 5;
      if ( (*(_QWORD *)&v17 & 0x800000LL) != 0 )
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 8), 0xFFFFFFFFFFFFF7FFuLL);
      else
        _InterlockedOr64((volatile signed __int64 *)(v5 + 8), 0x800uLL);
      LOBYTE(v13) = 1;
      ACPIInitStopDevice(v5, v13);
      ACPIBuildSurpriseRemovedExtension(v5);
      a2->IoStatus.Status = 0;
      a2->IoStatus.Information = 0LL;
      IofCompleteRequest(a2, 0);
      v18 = *(_QWORD *)(v5 + 8);
      v19 = (const char *)&unk_1C006E28A;
      v20 = (const char *)&unk_1C006E28A;
      if ( (v18 & 0x200000000000LL) != 0 )
      {
        v19 = *(const char **)(v5 + 560);
        if ( (v18 & 0x400000000000LL) != 0 )
          v20 = *(const char **)(v5 + 568);
      }
      v21 = MinorFunction;
      if ( MinorFunction >= 0x1Au )
        v21 = 26LL;
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xCu,
        0x3Fu,
        (__int64)&WPP_5ea0bed1d6f13f26cf29dd07beb1e62d_Traceguids,
        (char)a2,
        ACPIDispatchPnpTableNames[v21],
        0,
        v5,
        v19,
        v20);
    }
    else
    {
      if ( (*(_DWORD *)(v5 + 8) & 0x8000000) != 0 )
      {
        ACPIThermalStopZone(v5);
      }
      else
      {
        v7 = *(_QWORD *)(v5 + 952);
        if ( (v7 & 0x200000000LL) != 0 )
        {
          ACPIFanStopDevice(v5);
        }
        else if ( (v7 & 0x10000000000LL) != 0 )
        {
          ACPIPepCleanupPlatformNotificationSupport(v5);
        }
      }
      *(_DWORD *)(v5 + 320) = 0;
      a2->IoStatus.Status = 0;
      IofCompleteRequest(a2, 0);
      LOBYTE(v8) = 1;
      ACPIInitStopDevice(v5, v8);
    }
    return 0LL;
  }
}
