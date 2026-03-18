/*
 * XREFs of AcpiArblibInitializeArbiter @ 0x1C00ACCA4
 * Callers:
 *     ACPIBuildPdo @ 0x1C000B7D4 (ACPIBuildPdo.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C002B6B0 (ACPIDispatchIrpDepPdoQueryID.c)
 * Callees:
 *     AcpiArblibAllocateArbiterInstance @ 0x1C00AC704 (AcpiArblibAllocateArbiterInstance.c)
 *     AcpiArblibFreeArbiterInstance @ 0x1C00ACC34 (AcpiArblibFreeArbiterInstance.c)
 *     AcpiInitializeBusNumberArbiter @ 0x1C00ADC14 (AcpiInitializeBusNumberArbiter.c)
 *     AcpiInitializeMemoryArbiter @ 0x1C00AFB30 (AcpiInitializeMemoryArbiter.c)
 *     AcpiInitializePortArbiter @ 0x1C00B1764 (AcpiInitializePortArbiter.c)
 */

__int64 __fastcall AcpiArblibInitializeArbiter(__int64 a1, unsigned int a2, wchar_t **a3)
{
  int v6; // eax
  wchar_t *ArbiterInstance; // rax
  wchar_t *v8; // rbx
  __int64 result; // rax
  int v10; // eax
  unsigned int v11; // edi

  if ( a2 > 6 )
    return 3221225485LL;
  v6 = 74;
  if ( !_bittest(&v6, a2) )
    return 3221225485LL;
  ArbiterInstance = AcpiArblibAllocateArbiterInstance(a1, a2);
  v8 = ArbiterInstance;
  if ( !ArbiterInstance )
    return 3221225626LL;
  if ( a2 == 1 )
  {
    v10 = AcpiInitializePortArbiter(ArbiterInstance, a1);
  }
  else if ( a2 == 3 )
  {
    v10 = AcpiInitializeMemoryArbiter(ArbiterInstance, a1);
  }
  else
  {
    v10 = AcpiInitializeBusNumberArbiter(ArbiterInstance, a1);
  }
  v11 = v10;
  if ( v10 >= 0 )
  {
    *((_BYTE *)v8 + 128) = 1;
    result = 0LL;
    *a3 = v8;
  }
  else
  {
    AcpiArblibFreeArbiterInstance(v8);
    return v11;
  }
  return result;
}
