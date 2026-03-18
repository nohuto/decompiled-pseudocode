/*
 * XREFs of NVMeLunCompleteAllIORequests @ 0x1C000CA90
 * Callers:
 *     NVMeHwUnitControl @ 0x1C0008630 (NVMeHwUnitControl.c)
 * Callees:
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000A580 (NVMeCompleteSubmissionQueueRequests.c)
 */

void __fastcall NVMeLunCompleteAllIORequests(__int64 a1, int a2)
{
  unsigned int i; // edi

  for ( i = 0;
        i < *(unsigned __int16 *)(a1 + 272);
        NVMeCompleteSubmissionQueueRequests(
          a1,
          *(_QWORD *)(a1 + 760) + 136LL * i++,
          *(unsigned __int16 *)(a1 + 270),
          a2,
          0,
          0,
          8) )
  {
    ;
  }
  NVMeCompleteSubmissionQueueRequests(a1, a1 + 280, *(unsigned __int16 *)(a1 + 268), a2, 0, 1, 8);
}
