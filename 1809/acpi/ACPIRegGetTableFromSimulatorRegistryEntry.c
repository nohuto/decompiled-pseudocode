/*
 * XREFs of ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00AE314
 * Callers:
 *     ACPIMapNamedTable @ 0x1C0002480 (ACPIMapNamedTable.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C00025B8 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002680 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_s @ 0x1C0002740 (WPP_RECORDER_SF_s.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     OSOpenHandle @ 0x1C008D2B4 (OSOpenHandle.c)
 *     ACPIRegLocalCopyString @ 0x1C008D584 (ACPIRegLocalCopyString.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C00AE790 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenLargestSubkey @ 0x1C00AEAF0 (OSOpenLargestSubkey.c)
 */

bool __fastcall ACPIRegGetTableFromSimulatorRegistryEntry(__int64 *a1)
{
  __int64 v1; // rbp
  bool v2; // di
  char *PoolWithTag; // rax
  char *v5; // rsi
  char *v6; // rax
  char *v7; // rax
  int v8; // eax
  int v9; // eax
  __int64 v11; // [rsp+28h] [rbp-30h]
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v1 = *a1;
  Handle = 0LL;
  v2 = 0;
  if ( (AcpiOverrideAttributes & 0x10000) == 0 )
    return 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x6AuLL, 0x42706341u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memset(PoolWithTag, 0, 0x6AuLL);
  qmemcpy(v5, "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters\\Simulator\\Tables\\", 85);
  v6 = ACPIRegLocalCopyString(v5 + 85, v1, 4u);
  *v6 = 92;
  v7 = ACPIRegLocalCopyString(v6 + 1, v1 + 10, 6u);
  *v7 = 92;
  *ACPIRegLocalCopyString(v7 + 1, v1 + 16, 8u) = 0;
  WPP_RECORDER_SF_s(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xBu,
    0x25u,
    (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
    v5);
  v8 = OSOpenHandle(v5, 0LL, (__int64)&Handle);
  if ( v8 >= 0 )
  {
    v9 = OSOpenLargestSubkey(Handle);
    if ( v9 >= 0 )
    {
      v2 = (int)ACPIRegReadEntireSimulatorAcpiTable(0LL, a1) >= 0;
    }
    else
    {
      LODWORD(v11) = v9;
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xBu,
        0x27u,
        (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
        v11);
    }
  }
  else
  {
    LODWORD(v11) = v8;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xBu,
      0x26u,
      (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
      v11);
  }
  ExFreePoolWithTag(v5, 0);
  if ( Handle )
    ZwClose(Handle);
  return v2;
}
