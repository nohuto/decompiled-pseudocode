/*
 * XREFs of PdcAcquireRwLockExclusive @ 0x1408D995C
 * Callers:
 *     PdcTaskClientRequest @ 0x1408D9274 (PdcTaskClientRequest.c)
 *     PdcNotificationClientAcknowledge @ 0x1408D9398 (PdcNotificationClientAcknowledge.c)
 *     PdcNotificationClientRegister @ 0x1408D94E0 (PdcNotificationClientRegister.c)
 *     PdcNotificationClientUnregister @ 0x1408D9608 (PdcNotificationClientUnregister.c)
 *     PdcpNotificationClientCallback @ 0x1408D96E0 (PdcpNotificationClientCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *__fastcall PdcAcquireRwLockExclusive(unsigned __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _RTL_BALANCED_NODE *v3; // rax
  _RTL_BALANCED_NODE *v4; // rbx
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1, v3, (ULONG_PTR)a1);
  if ( v4 )
    BYTE2(v4[1].Left) |= 1u;
  result = KeGetCurrentThread();
  a1[1] = (unsigned __int64)result;
  return result;
}
