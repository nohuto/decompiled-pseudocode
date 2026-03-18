/*
 * XREFs of AcpiPccEjectInterface @ 0x1C0030558
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C000B2A0 (ACPIBusIrpQueryInterface.c)
 *     ACPIRootIrpQueryInterface @ 0x1C00945B0 (ACPIRootIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     PciConfigPinToLine @ 0x1C0005880 (PciConfigPinToLine.c)
 */

__int64 __fastcall AcpiPccEjectInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 DeviceExtension; // rax
  __int64 v5; // rsi
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int v9; // ebx
  KIRQL v11; // al
  unsigned int v12; // ebp
  KIRQL v13; // cl
  __int64 v14; // rax

  v2 = *(_QWORD *)(a2 + 184);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( *(_WORD *)(v2 + 16) < 0x80u || !*(_WORD *)(v2 + 18) )
    return (unsigned int)-1073741811;
  v5 = *(_QWORD *)(v2 + 24);
  v6 = (*(_QWORD *)(DeviceExtension + 8) & 0x1000000000LL) == 0;
  v7 = *(unsigned int *)(v5 + 32);
  if ( v6 || (_DWORD)v7 != -1 )
  {
    if ( (unsigned int)v7 >= AcpiPccSubspaceCount )
      return (unsigned int)-1073741637;
    v8 = AcpiPccSubspaces + 528 * v7;
  }
  else
  {
    v8 = AcpiPccLegacySubspace;
  }
  v9 = 0;
  if ( !v8 || *(_QWORD *)(v5 + 40) && (*(_DWORD *)v8 & 2) == 0 )
    return (unsigned int)-1073741637;
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 520));
  v12 = *(_DWORD *)v8 & 0x3C;
  v13 = v11;
  if ( v12 == 8 )
  {
    *(_DWORD *)v8 = *(_DWORD *)v8 & 0xFFFFFFC3 | 0xC;
    v14 = *(_QWORD *)(v5 + 40);
    if ( v14 )
    {
      *(_QWORD *)(v8 + 144) = v14;
      *(_QWORD *)(v8 + 152) = *(_QWORD *)(v5 + 48);
      *(_QWORD *)(v8 + 160) = a1;
      _InterlockedAdd(&AcpiPccSciReferenceCount, 1u);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 520), v13);
    *(_DWORD *)v5 = 65664;
    *(_QWORD *)(v5 + 16) = PciConfigPinToLine;
    *(_QWORD *)(v5 + 24) = PciConfigPinToLine;
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_QWORD *)(v5 + 56) = v8;
    *(_DWORD *)(v5 + 64) = *(_DWORD *)(v8 + 4);
    *(_DWORD *)(v5 + 68) = *(_DWORD *)(v8 + 8);
    *(_QWORD *)(v5 + 72) = *(_QWORD *)(v8 + 16);
    *(_DWORD *)(v5 + 80) = *(_DWORD *)(v8 + 24);
    *(_DWORD *)(v5 + 84) ^= (*(_DWORD *)(v5 + 84) ^ (*(_DWORD *)v8 >> 1)) & 1;
    *(_QWORD *)(v5 + 88) = AcpiPccAcquireSubspace;
    *(_QWORD *)(v5 + 96) = AcpiPccAcquireSubspaceAsync;
    *(_QWORD *)(v5 + 104) = AcpiPccExecuteCommand;
    *(_QWORD *)(v5 + 112) = AcpiPccExecuteCommandAsync;
    *(_QWORD *)(v5 + 120) = AcpiPccReleaseSubspace;
    PciConfigPinToLine();
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 520), v11);
    return v12 < 8 ? -1073741823 : -1073740024;
  }
  return v9;
}
