/*
 * XREFs of NVMeLunCompleteAllIORequests @ 0x1C000E954
 * Callers:
 *     NVMeHwUnitControl @ 0x1C000B3A0 (NVMeHwUnitControl.c)
 * Callees:
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000D150 (NVMeCompleteSubmissionQueueRequests.c)
 */

void __fastcall NVMeLunCompleteAllIORequests(__int64 a1, int a2)
{
  unsigned int i; // edi

  for ( i = 0;
        i < *(unsigned __int16 *)(a1 + 264);
        NVMeCompleteSubmissionQueueRequests(
          a1,
          *(_QWORD *)(a1 + 752) + 136LL * i++,
          *(unsigned __int16 *)(a1 + 262),
          a2,
          0,
          0,
          8) )
  {
    ;
  }
  NVMeCompleteSubmissionQueueRequests(a1, a1 + 272, *(unsigned __int16 *)(a1 + 260), a2, 0, 1, 8);
}
