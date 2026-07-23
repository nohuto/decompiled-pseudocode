/*
 * XREFs of PopFxUpdateAccountingActiveTime @ 0x1400FEF34
 * Callers:
 *     PopFxIdleWorkerTail @ 0x1400FEA88 (PopFxIdleWorkerTail.c)
 *     PopFxUpdateDeviceAccountingEnhanced @ 0x140158DE8 (PopFxUpdateDeviceAccountingEnhanced.c)
 *     PopFxUpdateComponentAccountingEnhanced @ 0x140172524 (PopFxUpdateComponentAccountingEnhanced.c)
 *     PopFxPauseDeviceAccounting @ 0x1402D8C0C (PopFxPauseDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x1402D9F4C (PopFxStopDeviceAccounting.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxUpdateAccountingActiveTime(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r10
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 *i; // r8

  v3 = 0LL;
  if ( *(_BYTE *)(a1 + 8) )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( a2 > v4 )
    {
      v5 = a2 - v4;
      *(_QWORD *)(a1 + 128) += v5;
      if ( v5 < a3 )
      {
        *(_QWORD *)(a1 + 136) += v5;
      }
      else
      {
        for ( i = PopFxAccountingBucketLimits; v5 < *i || v5 >= PopFxAccountingBucketLimits[(unsigned int)(v3 + 1)]; ++i )
        {
          v3 = (unsigned int)(v3 + 1);
          if ( (unsigned int)v3 >= 5 )
            return;
        }
        ++*(_QWORD *)(a1 + 8 * v3 + 144);
        *(_QWORD *)(a1 + 8 * v3 + 184) += v5;
      }
    }
  }
}
