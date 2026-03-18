/*
 * XREFs of ACPIIsPhase3ListEmptyOfUnblockedItems @ 0x1C002982C
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C001FAE0 (ACPIDevicePowerDpc.c)
 * Callees:
 *     ACPIDevicePowerEnumerateAssociatedPowerNodes @ 0x1C001BC14 (ACPIDevicePowerEnumerateAssociatedPowerNodes.c)
 *     WPP_RECORDER_SF_sqL @ 0x1C0029970 (WPP_RECORDER_SF_sqL.c)
 */

bool ACPIIsPhase3ListEmptyOfUnblockedItems()
{
  char v0; // si
  char v1; // bp
  __int64 *v2; // rbx
  __int64 *v3; // rcx
  __int64 *v4; // rdi
  int v5; // eax
  __int64 v7; // rax
  const char *v8; // rdx
  const char *v9; // rax
  __int64 *v10; // rbx
  __int64 v11; // rcx
  __int64 *v12; // rbx
  __int64 v13; // rcx
  int v14; // [rsp+38h] [rbp-20h]

  v0 = 0;
  v1 = 0;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  if ( AcpiPowerCurrentPagingPathTransitions > 0 )
  {
    v10 = (__int64 *)AcpiPowerPhase3List;
    while ( v10 != &AcpiPowerPhase3List )
    {
      v11 = (__int64)v10;
      v10 = (__int64 *)*v10;
      if ( !*(_DWORD *)(v11 + 48) && (*(_DWORD *)(v11 + 56) & 0x2000000) != 0 )
        ACPIDevicePowerEnumerateAssociatedPowerNodes(
          v11,
          (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ACPIMarkPagingPathPowerNodeEnum,
          v11);
    }
  }
  v2 = (__int64 *)AcpiPowerNodeList;
  if ( (__int64 *)AcpiPowerNodeList != &AcpiPowerNodeList )
  {
    do
    {
      v3 = v2;
      v4 = v2;
      v2 = (__int64 *)*v2;
      v5 = *((_DWORD *)v3 + 16);
      if ( v5 == 1 )
      {
        v7 = v4[2];
        if ( (v7 & 0x1000) == 0
          || (AcpiPowerCurrentPagingPathTransitions <= 0 || (v7 & 0x40000) != 0) && (__int64 *)v4[13] == v4 + 13 )
        {
          _InterlockedAnd64(v3 + 2, 0xFFFFFFFFFFFFFFF7uLL);
          v1 = 1;
        }
        else
        {
          _InterlockedOr64(v3 + 2, 8uLL);
          v0 = 1;
        }
        v8 = "NOT";
        v14 = v4[2];
        v9 = "IS";
        if ( (v14 & 8) == 0 )
          v9 = "NOT";
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_sqL(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v8,
          10,
          47,
          (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
          (__int64)v9,
          (char)v4,
          v14);
      }
      else if ( (unsigned int)(v5 - 3) <= 1 )
      {
        v0 = 1;
      }
      _InterlockedAnd64(v4 + 2, 0xFFFFFFFFFFFBFFFFuLL);
    }
    while ( v2 != &AcpiPowerNodeList );
    if ( !v1 && v0 )
    {
      v12 = (__int64 *)AcpiPowerPhase3List;
      while ( v12 != &AcpiPowerPhase3List )
      {
        v13 = (__int64)v12;
        v12 = (__int64 *)*v12;
        if ( !*(_DWORD *)(v13 + 48) )
          ACPIDevicePowerEnumerateAssociatedPowerNodes(
            v13,
            (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ACPIIsPhase3ListEmptyOfUnblockedItemsPowerNodeEnum,
            v13);
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  return v1 == 0;
}
