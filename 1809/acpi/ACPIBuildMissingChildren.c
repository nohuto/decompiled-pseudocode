/*
 * XREFs of ACPIBuildMissingChildren @ 0x1C0017160
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C0018C64 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0018F84 (ACPIDetectPdoDevices.c)
 * Callees:
 *     OSNotifyCreateProcessor @ 0x1C0015E8C (OSNotifyCreateProcessor.c)
 *     AMLIGetFirstChild @ 0x1C00162A8 (AMLIGetFirstChild.c)
 *     AMLIIterateSiblingsNext @ 0x1C0017200 (AMLIIterateSiblingsNext.c)
 *     OSNotifyCreateOperationRegion @ 0x1C0017F78 (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreateDevice @ 0x1C001AF60 (OSNotifyCreateDevice.c)
 *     OSNotifyCreateThermalZone @ 0x1C002EAB0 (OSNotifyCreateThermalZone.c)
 *     WPP_RECORDER_SF_DD @ 0x1C004AE34 (WPP_RECORDER_SF_DD.c)
 */

__int64 __fastcall ACPIBuildMissingChildren(__int64 a1)
{
  volatile signed __int32 *i; // rax
  ULONG_PTR v2; // rbx
  __int64 v3; // rax
  int Device; // eax
  int v5; // edx

  if ( (*(_QWORD *)(a1 + 8) & 0x8000000000000LL) == 0 )
  {
    for ( i = AMLIGetFirstChild(*(_QWORD **)(a1 + 712)); ; i = (volatile signed __int32 *)AMLIIterateSiblingsNext(v2) )
    {
      v2 = (ULONG_PTR)i;
      if ( !i )
        return 0LL;
      v3 = *(_QWORD *)i;
      if ( !*(_QWORD *)(v3 + 104) )
      {
        switch ( *(_WORD *)(v3 + 66) )
        {
          case 6:
            Device = OSNotifyCreateDevice(v2);
            break;
          case 0xA:
            Device = OSNotifyCreateOperationRegion(v2);
            break;
          case 0xC:
            Device = OSNotifyCreateProcessor(v2, 0x20000000000uLL);
            break;
          case 0xD:
            Device = OSNotifyCreateThermalZone(v2, 0x20000000000LL);
            break;
          default:
            continue;
        }
        if ( Device < 0 )
        {
          LOBYTE(v5) = 2;
          WPP_RECORDER_SF_DD(
            WPP_GLOBAL_Control->DeviceExtension,
            v5,
            22,
            24,
            (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
            Device,
            v2);
        }
      }
    }
  }
  return 0LL;
}
