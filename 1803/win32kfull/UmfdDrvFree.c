/*
 * XREFs of UmfdDrvFree @ 0x1C00CAAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C00CAB6C (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     UmfdDrvFreeInternal @ 0x1C02AEEF8 (UmfdDrvFreeInternal.c)
 */

void __fastcall UmfdDrvFree(char *a1, __int64 a2)
{
  __int64 v3; // rcx

  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 - 12);
    if ( v3 )
    {
      UmfdDrvFreeInternal(v3, a2, *((unsigned int *)a1 - 6));
      UmfdAllocation::ReleaseKernelmodeAllocation(a1);
    }
  }
}
