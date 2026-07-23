/*
 * XREFs of PopEtGetNextEnergyTracker @ 0x140607AD4
 * Callers:
 *     PopEtEnumEnergyTrackers @ 0x140607A78 (PopEtEnumEnergyTrackers.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400514C0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 */

_QWORD *__fastcall PopEtGetNextEnergyTracker(_QWORD **Object)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rsi
  ULONG_PTR v4; // rcx
  _QWORD **v5; // rax
  _QWORD *i; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = PopEtGlobals + 16;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(v4, 0LL);
  v5 = (_QWORD **)PopEtGlobals;
  if ( Object )
    v5 = Object;
  for ( i = *v5; i != (_QWORD *)PopEtGlobals; i = (_QWORD *)*i )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)i) )
    {
      v3 = i;
      break;
    }
  }
  PopReleaseRwLock(PopEtGlobals + 16);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x74456F50u);
  return v3;
}
