/*
 * XREFs of WheapFreeErrorRecord @ 0x140320610
 * Callers:
 *     WheaReportHwError @ 0x14031FF10 (WheaReportHwError.c)
 *     WheapProcessWorkQueueItem @ 0x1403206C0 (WheapProcessWorkQueueItem.c)
 *     WheapEtwEnableCallback @ 0x140762670 (WheapEtwEnableCallback.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall WheapFreeErrorRecord(__int64 a1)
{
  int v1; // eax
  ULONG v2; // edx

  v1 = *(_DWORD *)(a1 + 24);
  if ( (v1 & 1) != 0 )
  {
    _InterlockedExchange((volatile __int32 *)(a1 + 28), 0);
  }
  else
  {
    if ( (v1 & 2) != 0 )
      v2 = 1634035799;
    else
      v2 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 36LL);
    ExFreePoolWithTag((PVOID)a1, v2);
  }
}
