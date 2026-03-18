/*
 * XREFs of AcquireMagInputLock @ 0x1C01C8728
 * Callers:
 *     _SetMagnificationInputTransform @ 0x1C0009E1C (_SetMagnificationInputTransform.c)
 *     AddMagnificationOutputTransform @ 0x1C00F4230 (AddMagnificationOutputTransform.c)
 *     ApplyMagInputTransform @ 0x1C019D9F0 (ApplyMagInputTransform.c)
 *     TransformForInputMagnification @ 0x1C019DD70 (TransformForInputMagnification.c)
 *     EditionMagnificationMousePosition @ 0x1C01C8760 (EditionMagnificationMousePosition.c)
 * Callees:
 *     <none>
 */

signed __int64 AcquireMagInputLock()
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  while ( 1 )
  {
    result = _InterlockedCompareExchange64(&gpMagInputLock, (signed __int64)CurrentThread, 0LL);
    if ( !result )
      break;
    UserSleep(1LL);
  }
  return result;
}
