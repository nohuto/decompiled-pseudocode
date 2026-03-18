/*
 * XREFs of ACPICheckModuleStarted @ 0x1C0058588
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C0007460 (ACPIProcessorStartDevice.c)
 *     ACPIBusIrpStartDeviceCompletion @ 0x1C0030440 (ACPIBusIrpStartDeviceCompletion.c)
 * Callees:
 *     ACPIInternalEvaluateOST @ 0x1C00568FC (ACPIInternalEvaluateOST.c)
 */

void __fastcall ACPICheckModuleStarted(__int64 a1, int a2)
{
  KIRQL v4; // al
  KIRQL v5; // r8
  _QWORD *i; // rcx
  __int64 v7; // rax
  char v8; // bl

  while ( 1 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v5 = v4;
    if ( *(_BYTE *)(a1 + 185) )
      break;
    if ( a2 >= 0 )
    {
      for ( i = *(_QWORD **)(a1 + 752); i != (_QWORD *)(a1 + 752); i = (_QWORD *)*i )
      {
        v7 = *(i - 95);
        if ( (v7 & 0x2000000000LL) != 0 && !*((_BYTE *)i - 583)
          || (v7 & 0x100) == 0 && (unsigned int)(*((_DWORD *)i - 112) - 2) > 1 )
        {
          v8 = 0;
          goto LABEL_11;
        }
      }
    }
    *(_BYTE *)(a1 + 185) = 1;
    v8 = 1;
LABEL_11:
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
    if ( v8 )
    {
      ACPIInternalEvaluateOST(a1, 0, (a2 >> 31) & 0xA3);
      a1 = *(_QWORD *)(a1 + 744);
      if ( (*(_QWORD *)(a1 + 8) & 0x2000000000LL) != 0 )
        continue;
    }
    return;
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
}
