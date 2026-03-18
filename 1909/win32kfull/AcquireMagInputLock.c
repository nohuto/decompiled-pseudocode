/*
 * XREFs of AcquireMagInputLock @ 0x1C0203074
 * Callers:
 *     AddMagnificationOutputTransform @ 0x1C00F0D20 (AddMagnificationOutputTransform.c)
 *     _SetMagnificationInputTransform @ 0x1C015FE60 (_SetMagnificationInputTransform.c)
 *     ApplyMagInputTransform @ 0x1C01D27A0 (ApplyMagInputTransform.c)
 *     TransformForInputMagnification @ 0x1C01D2B50 (TransformForInputMagnification.c)
 *     EditionMagnificationMousePosition @ 0x1C02030B0 (EditionMagnificationMousePosition.c)
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
