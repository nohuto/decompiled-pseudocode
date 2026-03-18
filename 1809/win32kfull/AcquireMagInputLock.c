/*
 * XREFs of AcquireMagInputLock @ 0x1C01ECA68
 * Callers:
 *     _SetMagnificationInputTransform @ 0x1C00C981C (_SetMagnificationInputTransform.c)
 *     AddMagnificationOutputTransform @ 0x1C010CFA0 (AddMagnificationOutputTransform.c)
 *     ApplyMagInputTransform @ 0x1C01BEC60 (ApplyMagInputTransform.c)
 *     TransformForInputMagnification @ 0x1C01BEFF0 (TransformForInputMagnification.c)
 *     EditionMagnificationMousePosition @ 0x1C01ECAB0 (EditionMagnificationMousePosition.c)
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
