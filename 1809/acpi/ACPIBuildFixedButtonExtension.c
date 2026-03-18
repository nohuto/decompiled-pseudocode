/*
 * XREFs of ACPIBuildFixedButtonExtension @ 0x1C003016C
 * Callers:
 *     ACPIFixedFeatureButtonInitialize @ 0x1C003010C (ACPIFixedFeatureButtonInitialize.c)
 * Callees:
 *     ACPIBuildDeviceExtension @ 0x1C001B100 (ACPIBuildDeviceExtension.c)
 */

__int64 __fastcall ACPIBuildFixedButtonExtension(__int64 a1, __int64 *a2)
{
  int v3; // esi
  __int64 result; // rax
  __int64 v5; // rbx
  char *PoolWithTag; // rax

  if ( AcpiBuildFixedButtonEnumerated )
    goto LABEL_13;
  AcpiBuildFixedButtonEnumerated = 1;
  v3 = HIBYTE(*((unsigned __int16 *)AcpiInformation + 56)) & 1 | 2;
  if ( (*((_WORD *)AcpiInformation + 56) & 0x200) == 0 )
    v3 = HIBYTE(*((unsigned __int16 *)AcpiInformation + 56)) & 1;
  if ( !v3 || (AcpiOverrideAttributes & 0x400000) != 0 )
  {
LABEL_13:
    *a2 = 0LL;
    return 0LL;
  }
  result = ACPIBuildDeviceExtension(0LL, RootDeviceExtension, a2);
  if ( (int)result >= 0 )
  {
    v5 = *a2;
    if ( *a2 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v5 + 8), 0x18000000360000uLL);
      KeInitializeSpinLock((PKSPIN_LOCK)(v5 + 184));
      *(_DWORD *)(v5 + 200) = v3 | 0x80000000;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x11uLL, 0x53706341u);
      *(_QWORD *)(v5 + 560) = PoolWithTag;
      if ( PoolWithTag )
      {
        strcpy(PoolWithTag, "ACPI\\FixedButton");
        _InterlockedOr64((volatile signed __int64 *)(v5 + 8), 0xA00000000000uLL);
        return 0LL;
      }
      _InterlockedOr64((volatile signed __int64 *)(v5 + 8), 0x2000000000000uLL);
      result = 3221225626LL;
    }
  }
  *a2 = 0LL;
  return result;
}
