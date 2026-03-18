/*
 * XREFs of NVMeControllerCompleteAllIORequests @ 0x1C000D694
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0006160 (NVMeHwAdapterControl.c)
 *     NVMeControllerReset @ 0x1C000E108 (NVMeControllerReset.c)
 * Callees:
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000D150 (NVMeCompleteSubmissionQueueRequests.c)
 */

void __fastcall NVMeControllerCompleteAllIORequests(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned int i; // edi
  unsigned __int16 j; // di

  StorPortExtendedFunction(81LL, a1, 10000LL, a4);
  for ( i = 0;
        i < *(unsigned __int16 *)(a1 + 264);
        NVMeCompleteSubmissionQueueRequests(
          a1,
          *(_QWORD *)(a1 + 752) + 136LL * i++,
          *(unsigned __int16 *)(a1 + 262),
          0,
          1,
          0,
          a2) )
  {
    ;
  }
  for ( j = 0; *(_WORD *)(a1 + 792) && j < 0x1388u; ++j )
    StorPortStallExecution(10LL);
  NVMeCompleteSubmissionQueueRequests(a1, a1 + 272, *(unsigned __int16 *)(a1 + 260), 0, 1, 0, a2);
}
