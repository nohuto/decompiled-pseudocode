/*
 * XREFs of NVMeControllerCompleteAllIORequests @ 0x1C000AAA4
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0004C30 (NVMeHwAdapterControl.c)
 *     NVMeControllerReset @ 0x1C000B6BC (NVMeControllerReset.c)
 * Callees:
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000A580 (NVMeCompleteSubmissionQueueRequests.c)
 */

void __fastcall NVMeControllerCompleteAllIORequests(__int64 a1, char a2)
{
  unsigned int i; // edi
  unsigned __int16 j; // di

  StorPortExtendedFunction(81LL, a1, 10000LL);
  for ( i = 0;
        i < *(unsigned __int16 *)(a1 + 272);
        NVMeCompleteSubmissionQueueRequests(
          a1,
          *(_QWORD *)(a1 + 760) + 136LL * i++,
          *(unsigned __int16 *)(a1 + 270),
          0,
          1,
          0,
          a2) )
  {
    ;
  }
  for ( j = 0; *(_WORD *)(a1 + 800) && j < 0x1388u; ++j )
    StorPortStallExecution(10LL);
  NVMeCompleteSubmissionQueueRequests(a1, a1 + 280, *(unsigned __int16 *)(a1 + 268), 0, 1, 0, a2);
}
