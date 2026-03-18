/*
 * XREFs of PdcAcquireRwLockExclusive @ 0x14089AEEC
 * Callers:
 *     PdcTaskClientRequest @ 0x14089A708 (PdcTaskClientRequest.c)
 *     PdcNotificationClientAcknowledge @ 0x14089A81C (PdcNotificationClientAcknowledge.c)
 *     PdcNotificationClientRegister @ 0x14089A964 (PdcNotificationClientRegister.c)
 *     PdcNotificationClientUnregister @ 0x14089AB08 (PdcNotificationClientUnregister.c)
 *     PdcpNotificationClientCallback @ 0x14089AC70 (PdcpNotificationClientCallback.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 */

struct _KTHREAD *__fastcall PdcAcquireRwLockExclusive(unsigned __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1, v3, (ULONG_PTR)a1);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  result = KeGetCurrentThread();
  a1[1] = (unsigned __int64)result;
  return result;
}
