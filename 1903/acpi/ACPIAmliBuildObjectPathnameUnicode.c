/*
 * XREFs of ACPIAmliBuildObjectPathnameUnicode @ 0x1C000ABA0
 * Callers:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0006210 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     AcpiDiagTraceFanEvent @ 0x1C0007720 (AcpiDiagTraceFanEvent.c)
 *     AcpiDiagTraceTemperatureChange @ 0x1C0008050 (AcpiDiagTraceTemperatureChange.c)
 *     AcpiDiagTraceTemperatureTelemetry @ 0x1C00080F0 (AcpiDiagTraceTemperatureTelemetry.c)
 *     AcpiDiagTraceActiveCoolingDevicePower @ 0x1C0009E1C (AcpiDiagTraceActiveCoolingDevicePower.c)
 *     AcpiDiagTraceConstraintEvent @ 0x1C0009F64 (AcpiDiagTraceConstraintEvent.c)
 *     AcpiDiagTraceThermalNotification @ 0x1C000AAA4 (AcpiDiagTraceThermalNotification.c)
 *     AcpiDiagTraceDeviceActiveCooling @ 0x1C002C594 (AcpiDiagTraceDeviceActiveCooling.c)
 *     AcpiDiagTraceDeviceCoolingRundown @ 0x1C0049620 (AcpiDiagTraceDeviceCoolingRundown.c)
 *     AcpiDiagTraceDevicePassiveCooling @ 0x1C004977C (AcpiDiagTraceDevicePassiveCooling.c)
 *     AcpiDiagTraceThermalZoneRundown @ 0x1C0049CF0 (AcpiDiagTraceThermalZoneRundown.c)
 *     ACPIReserveDependencies @ 0x1C004C474 (ACPIReserveDependencies.c)
 *     ACPIProcessorContainerComputeIoctlPayloadSize @ 0x1C005CC80 (ACPIProcessorContainerComputeIoctlPayloadSize.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C005CEFC (ACPIProcessorContainerFillIoctlBuffer.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C00933B4 (ACPIThermalGetOverrideHandle.c)
 * Callees:
 *     ACPIAmliBuildObjectPathname @ 0x1C000BD28 (ACPIAmliBuildObjectPathname.c)
 */

__int64 __fastcall ACPIAmliBuildObjectPathnameUnicode(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // si
  __int16 *PoolWithTag; // rbx
  __int64 result; // rax
  char *v6; // r12
  int v7; // r15d
  unsigned int v8; // edi
  unsigned __int16 v9; // bp
  char *v10; // r8
  __int16 *v11; // r9
  char v12; // dl
  char v13; // cl
  __int16 v14; // ax
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  v3 = 0;
  PoolWithTag = 0LL;
  result = ACPIAmliBuildObjectPathname(a1, &P);
  if ( (int)result >= 0 )
  {
    v6 = (char *)P;
    v7 = 0;
    v8 = 0;
    while ( 2 )
    {
      v9 = 0;
      v10 = v6;
      v11 = PoolWithTag;
      v12 = 1;
      do
      {
        if ( v9 > 0xFFFDu )
        {
          v8 = -1073741675;
          goto LABEL_36;
        }
        v13 = *v10;
        v9 += 2;
        if ( v3 < v9 )
        {
          v12 = v13 != 0 ? v12 : 0;
        }
        else
        {
          if ( (unsigned __int8)(v13 - 97) <= 0x19u
            || (unsigned __int8)(v13 - 65) <= 0x19u
            || (unsigned __int8)(v13 - 48) <= 9u )
          {
            v14 = v13;
          }
          else if ( v13 == 95 )
          {
            v14 = 95;
          }
          else if ( v13 == 92 )
          {
            v14 = 92;
          }
          else
          {
            v14 = 46;
            if ( v13 != 46 )
            {
              if ( v13 )
              {
                v8 = -1073741811;
                goto LABEL_36;
              }
              v14 = 0;
              v12 = 0;
            }
          }
          *v11++ = v14;
        }
        ++v10;
      }
      while ( v12 );
      if ( v9 > v3 )
      {
        if ( PoolWithTag )
        {
          ExFreePoolWithTag(PoolWithTag, 0x53706341u);
          PoolWithTag = 0LL;
        }
        if ( !v7 )
        {
          PoolWithTag = (__int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x53706341u);
          if ( PoolWithTag )
          {
            v3 = v9;
            goto LABEL_24;
          }
          v8 = -1073741670;
LABEL_38:
          PoolWithTag = 0LL;
          *(_QWORD *)a2 = 0LL;
          v3 = 0;
          *(_QWORD *)(a2 + 8) = 0LL;
          goto LABEL_26;
        }
        v8 = -2147483643;
LABEL_36:
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0x53706341u);
        goto LABEL_38;
      }
LABEL_24:
      if ( ++v7 < 2 )
        continue;
      break;
    }
    *(_WORD *)a2 = v3 - 2;
LABEL_26:
    *(_WORD *)(a2 + 2) = v3;
    *(_QWORD *)(a2 + 8) = PoolWithTag;
    if ( v6 )
      ExFreePoolWithTag(v6, 0x53706341u);
    return v8;
  }
  return result;
}
