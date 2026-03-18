/*
 * XREFs of ?Create@CPlatformSignal@NSInstrumentation@@SAPEAV12@XZ @ 0x1C010921C
 * Callers:
 *     ?BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C0109478 (-BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

struct _KEVENT *NSInstrumentation::CPlatformSignal::Create(void)
{
  struct _KEVENT *PoolWithTag; // rax
  struct _KEVENT *v1; // rbx

  PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag((POOL_TYPE)544, 0x18uLL, 0x35497355u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
    KeInitializeEvent(PoolWithTag, SynchronizationEvent, 0);
  return v1;
}
