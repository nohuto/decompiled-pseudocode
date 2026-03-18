/*
 * XREFs of ACPIBuildMissingChildren @ 0x1C00239F8
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C000CF60 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C000D28C (ACPIDetectPdoDevices.c)
 * Callees:
 *     OSNotifyCreateOperationRegion @ 0x1C000CE20 (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreateDevice @ 0x1C000FFB4 (OSNotifyCreateDevice.c)
 *     AMLIIterateSiblingsNext @ 0x1C0023A90 (AMLIIterateSiblingsNext.c)
 *     AMLIGetFirstChild @ 0x1C0023FDC (AMLIGetFirstChild.c)
 *     OSNotifyCreateProcessor @ 0x1C002C634 (OSNotifyCreateProcessor.c)
 *     OSNotifyCreateThermalZone @ 0x1C002F62C (OSNotifyCreateThermalZone.c)
 *     WPP_RECORDER_SF_DD @ 0x1C004C5A4 (WPP_RECORDER_SF_DD.c)
 */

__int64 __fastcall ACPIBuildMissingChildren(__int64 a1)
{
  __int64 *i; // rax
  __int64 v2; // rbx
  __int64 v3; // rax
  int Device; // eax
  int v5; // edx

  if ( (*(_QWORD *)(a1 + 8) & 0x8000000000000LL) == 0 )
  {
    for ( i = (__int64 *)AMLIGetFirstChild(*(_QWORD *)(a1 + 712)); ; i = (__int64 *)AMLIIterateSiblingsNext(v2) )
    {
      v2 = (__int64)i;
      if ( !i )
        return 0LL;
      v3 = *i;
      if ( !*(_QWORD *)(v3 + 104) )
      {
        switch ( *(_WORD *)(v3 + 66) )
        {
          case 6:
            Device = OSNotifyCreateDevice(v2, 0x20000000000uLL);
            break;
          case 0xA:
            Device = OSNotifyCreateOperationRegion(v2);
            break;
          case 0xC:
            Device = OSNotifyCreateProcessor(v2, 0x20000000000LL);
            break;
          case 0xD:
            Device = OSNotifyCreateThermalZone(v2, 0x20000000000LL);
            break;
          default:
            continue;
        }
        if ( Device < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v5) = 2;
          WPP_RECORDER_SF_DD(
            WPP_GLOBAL_Control->DeviceExtension,
            v5,
            22,
            24,
            (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
            Device,
            v2);
        }
      }
    }
  }
  return 0LL;
}
