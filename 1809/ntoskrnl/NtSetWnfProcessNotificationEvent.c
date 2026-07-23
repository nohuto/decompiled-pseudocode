/*
 * XREFs of NtSetWnfProcessNotificationEvent @ 0x1406B42C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ExpWnfCreateProcessContext @ 0x1406B4388 (ExpWnfCreateProcessContext.c)
 */

NTSTATUS __cdecl NtSetWnfProcessNotificationEvent(HANDLE NotificationEvent)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rcx
  struct _SINGLE_LIST_ENTRY *v4; // rdi
  int v5; // ebx
  struct _SINGLE_LIST_ENTRY *Next; // [rsp+48h] [rbp+10h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Process = KeGetCurrentThread()->ApcState.Process;
  Next = Process[2].SwapListEntry.Next;
  v4 = Next;
  if ( !Next )
  {
    v5 = ExpWnfCreateProcessContext(Process, &Next);
    if ( v5 < 0 )
      goto LABEL_5;
    v4 = Next;
  }
  v5 = ObReferenceObjectByHandle(NotificationEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  if ( v5 >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v4[16], (signed __int64)Object, 0LL) )
    {
      ObfDereferenceObject(Object);
      v5 = -1073740008;
    }
    else
    {
      v5 = 0;
    }
  }
LABEL_5:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v5;
}
