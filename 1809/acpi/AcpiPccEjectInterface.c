/*
 * XREFs of AcpiPccEjectInterface @ 0x1C00115F0
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C0010840 (ACPIBusIrpQueryInterface.c)
 *     ACPIRootIrpQueryInterface @ 0x1C0095F20 (ACPIRootIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     PciConfigPinToLine @ 0x1C000C8B0 (PciConfigPinToLine.c)
 */

__int64 __fastcall AcpiPccEjectInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 DeviceExtension; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  unsigned int v7; // ebx
  __int64 v9; // rax
  KIRQL v10; // al
  unsigned int v11; // ebp
  KIRQL v12; // cl
  __int64 v13; // rax

  v2 = *(_QWORD *)(a2 + 184);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( *(_WORD *)(v2 + 16) < 0x80u || !*(_WORD *)(v2 + 18) )
    return (unsigned int)-1073741811;
  v5 = *(_QWORD *)(v2 + 24);
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x1000000000LL) != 0 && *(_DWORD *)(v5 + 32) == -1 )
  {
    v6 = AcpiPccLegacySubspace;
  }
  else
  {
    v9 = *(unsigned int *)(v5 + 32);
    if ( (unsigned int)v9 >= AcpiPccSubspaceCount )
      return (unsigned int)-1073741637;
    v6 = AcpiPccSubspaces + 528 * v9;
  }
  v7 = 0;
  if ( !v6 || *(_QWORD *)(v5 + 40) && (*(_DWORD *)v6 & 2) == 0 )
    return (unsigned int)-1073741637;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 520));
  v11 = *(_DWORD *)v6 & 0x3C;
  v12 = v10;
  if ( v11 == 8 )
  {
    *(_DWORD *)v6 = *(_DWORD *)v6 & 0xFFFFFFC3 | 0xC;
    v13 = *(_QWORD *)(v5 + 40);
    if ( v13 )
    {
      *(_QWORD *)(v6 + 144) = v13;
      *(_QWORD *)(v6 + 152) = *(_QWORD *)(v5 + 48);
      *(_QWORD *)(v6 + 160) = a1;
      _InterlockedAdd(&AcpiPccSciReferenceCount, 1u);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 520), v12);
    *(_DWORD *)v5 = 65664;
    *(_QWORD *)(v5 + 16) = PciConfigPinToLine;
    *(_QWORD *)(v5 + 24) = PciConfigPinToLine;
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_QWORD *)(v5 + 56) = v6;
    *(_DWORD *)(v5 + 64) = *(_DWORD *)(v6 + 4);
    *(_DWORD *)(v5 + 68) = *(_DWORD *)(v6 + 8);
    *(_QWORD *)(v5 + 72) = *(_QWORD *)(v6 + 16);
    *(_DWORD *)(v5 + 80) = *(_DWORD *)(v6 + 24);
    *(_DWORD *)(v5 + 84) ^= (*(_DWORD *)(v5 + 84) ^ (*(_DWORD *)v6 >> 1)) & 1;
    *(_QWORD *)(v5 + 88) = AcpiPccAcquireSubspace;
    *(_QWORD *)(v5 + 96) = AcpiPccAcquireSubspaceAsync;
    *(_QWORD *)(v5 + 104) = AcpiPccExecuteCommand;
    *(_QWORD *)(v5 + 112) = AcpiPccExecuteCommandAsync;
    *(_QWORD *)(v5 + 120) = AcpiPccReleaseSubspace;
    PciConfigPinToLine();
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 520), v10);
    return v11 < 8 ? -1073741823 : -1073740024;
  }
  return v7;
}
