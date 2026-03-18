/*
 * XREFs of ExDereferenceHandleDebugInfo @ 0x14090AC64
 * Callers:
 *     ExDisableHandleTracing @ 0x1403383A0 (ExDisableHandleTracing.c)
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 *     ExpFreeHandleTable @ 0x14068622C (ExpFreeHandleTable.c)
 *     ExEnableHandleTracing @ 0x14090ACC4 (ExEnableHandleTracing.c)
 *     ExpUpdateDebugInfo @ 0x14090B40C (ExpUpdateDebugInfo.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x140059100 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall ExDereferenceHandleDebugInfo(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  struct _KPROCESS *v4; // rcx

  if ( _InterlockedExchangeAdd(a2, 0xFFFFFFFF) == 1 )
  {
    v3 = a2[1];
    ExFreePoolWithTag(a2, 0x6474624Fu);
    v4 = *(struct _KPROCESS **)(a1 + 16);
    if ( v4 )
      PsReturnProcessNonPagedPoolQuota(v4, (unsigned int)(160 * v3 + 80));
    _InterlockedExchangeAdd(&ExpTotalTraceBuffers, -v3);
  }
}
