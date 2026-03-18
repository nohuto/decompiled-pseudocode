/*
 * XREFs of GreLockPointer @ 0x1C00A5530
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0078C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 __fastcall GreLockPointer(__int64 a1)
{
  EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 64));
  return EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"pdo.hsemPointer()", *(_QWORD *)(a1 + 64), 4);
}
