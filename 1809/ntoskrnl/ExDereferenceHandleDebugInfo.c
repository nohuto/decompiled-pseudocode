/*
 * XREFs of ExDereferenceHandleDebugInfo @ 0x1408CEED4
 * Callers:
 *     ExDisableHandleTracing @ 0x140319DA8 (ExDisableHandleTracing.c)
 *     ExpFreeHandleTable @ 0x1406077F8 (ExpFreeHandleTable.c)
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 *     ExEnableHandleTracing @ 0x1408CEF34 (ExEnableHandleTracing.c)
 *     ExpUpdateDebugInfo @ 0x1408CF6A8 (ExpUpdateDebugInfo.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x140068560 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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
