/*
 * XREFs of EtwpCovSampCaptureFlushSampleBuffers @ 0x140316B40
 * Callers:
 *     EtwpCovSampCaptureContextStop @ 0x1403169A0 (EtwpCovSampCaptureContextStop.c)
 *     EtwpCovSampCaptureFlush @ 0x1408C54E0 (EtwpCovSampCaptureFlush.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1400A69C0 (KeQueryMaximumProcessorCountEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwpCovSampSampleBufferDecRef @ 0x14031771C (EtwpCovSampSampleBufferDecRef.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x140317A18 (EtwpCovSampTryAcquireBufferLock.c)
 */

ULONG __fastcall EtwpCovSampCaptureFlushSampleBuffers(__int64 a1)
{
  ULONG result; // eax
  __int64 v3; // rdi
  __int64 v4; // rbp
  KSPIN_LOCK v5; // rsi
  unsigned int v6; // r8d
  unsigned int v7; // ecx
  KSPIN_LOCK *v8; // rbx
  KSPIN_LOCK v9; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v11; // [rsp+40h] [rbp+8h]

  result = KeQueryMaximumProcessorCountEx(0xFFFFu);
  if ( result )
  {
    v3 = 0LL;
    v4 = result;
    do
    {
      v5 = 0LL;
      v6 = ((unsigned int)*(_QWORD *)(a1 + 8) >> 13) & 0x3FFFF;
      _BitScanReverse(&v7, v6);
      v8 = (KSPIN_LOCK *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + ExSaPageArrays) + 8LL * (v7 - 2))
                                    + 8LL * (v6 ^ (1 << v7))
                                    + 8)
                        + 8 * ((*(_QWORD *)(a1 + 8) >> 4) & 0x1FFLL));
      result = EtwpCovSampTryAcquireBufferLock(v8);
      if ( result )
      {
        v9 = v8[1];
        if ( v9 )
        {
          v8[1] = 0LL;
          v5 = v9;
        }
        KxReleaseSpinLock(v8);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        result = v11;
        __writecr8(v11);
        if ( v5 )
          result = EtwpCovSampSampleBufferDecRef(a1, v5);
      }
      v3 += 8LL;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
