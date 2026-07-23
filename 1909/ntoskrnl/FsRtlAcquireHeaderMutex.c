/*
 * XREFs of FsRtlAcquireHeaderMutex @ 0x14003F260
 * Callers:
 *     FsRtlpWaitForIoAtEof @ 0x1400EE6D4 (FsRtlpWaitForIoAtEof.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x1400EF620 (ExpAcquireFastMutexContended.c)
 */

volatile signed __int32 *__fastcall FsRtlAcquireHeaderMutex(__int64 a1, volatile signed __int32 *a2)
{
  ULONG_PTR v2; // rdi
  PRTL_BALANCED_NODE v3; // rbx
  unsigned __int8 CurrentIrql; // si
  volatile signed __int32 *result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v3 = KeAbPreAcquire(v2, 0LL, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v2, 0) )
    ExpAcquireFastMutexContended(v2, v3);
  if ( v3 )
    BYTE2(v3[1].Left) |= 1u;
  *(_QWORD *)(v2 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v2 + 48) = CurrentIrql;
  result = a2;
  if ( a2 )
  {
    result = a2;
    _InterlockedIncrement(a2);
  }
  return result;
}
