/*
 * XREFs of EtwpPrepareDirtyBuffer @ 0x140003ADC
 * Callers:
 *     EtwpSwitchBuffer @ 0x140003560 (EtwpSwitchBuffer.c)
 *     EtwpFlushActiveBuffers @ 0x1405C5018 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x1408FAC14 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x140003928 (EtwpEnqueueAvailableBuffer.c)
 *     KeInsertQueueDpc @ 0x1400BCAD0 (KeInsertQueueDpc.c)
 *     KeGetEffectiveIrql @ 0x1400C1830 (KeGetEffectiveIrql.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     EtwpCompressionDpc @ 0x1403335F0 (EtwpCompressionDpc.c)
 *     EtwpReenableCompression @ 0x140333F60 (EtwpReenableCompression.c)
 */

char __fastcall EtwpPrepareDirtyBuffer(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v5; // rax

  v2 = *(_DWORD *)(a1 + 12);
  if ( (v2 & 0x400) != 0 )
  {
    if ( (v2 & 0x4000000) != 0 )
    {
      EtwpEnqueueAvailableBuffer(a1, (unsigned int *)a2, 4u);
      if ( !*(_DWORD *)(a1 + 1184) && *(_QWORD *)(a1 + 1280) >= 2LL * *(_QWORD *)(a1 + 1288) )
        EtwpReenableCompression(a1);
      LODWORD(v5) = *(_DWORD *)(a1 + 1184);
      if ( (_DWORD)v5 )
      {
        LODWORD(v5) = _InterlockedExchange((volatile __int32 *)(a1 + 1152), 2);
        if ( !(_DWORD)v5 )
        {
          if ( (unsigned __int8)KeGetEffectiveIrql() > 2u )
            LOBYTE(v5) = KeInsertQueueDpc((PRKDPC)(a1 + 1208), 0LL, 0LL);
          else
            LOBYTE(v5) = EtwpCompressionDpc(0LL, a1, 0LL, 0LL);
        }
      }
    }
    else
    {
      LOBYTE(v5) = EtwpEnqueueAvailableBuffer(a1, (unsigned int *)a2, 0);
    }
  }
  else
  {
    *(_DWORD *)(a2 + 44) = 3;
    v5 = (*(__int64 (**)(void))(a1 + 40))();
    *(_QWORD *)(a2 + 16) = v5;
  }
  return v5;
}
