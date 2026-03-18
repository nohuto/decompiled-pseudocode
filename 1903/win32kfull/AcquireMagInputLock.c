/*
 * XREFs of AcquireMagInputLock @ 0x1C0203324
 * Callers:
 *     AddMagnificationOutputTransform @ 0x1C0115B00 (AddMagnificationOutputTransform.c)
 *     _SetMagnificationInputTransform @ 0x1C015ED40 (_SetMagnificationInputTransform.c)
 *     ApplyMagInputTransform @ 0x1C01D2930 (ApplyMagInputTransform.c)
 *     TransformForInputMagnification @ 0x1C01D2CE0 (TransformForInputMagnification.c)
 *     EditionMagnificationMousePosition @ 0x1C0203360 (EditionMagnificationMousePosition.c)
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
