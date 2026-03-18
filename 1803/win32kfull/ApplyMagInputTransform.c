/*
 * XREFs of ApplyMagInputTransform @ 0x1C019D9F0
 * Callers:
 *     <none>
 * Callees:
 *     AcquireMagInputLock @ 0x1C01C8728 (AcquireMagInputLock.c)
 *     MagInputTransform @ 0x1C01C87B4 (MagInputTransform.c)
 *     MagnificationTransformPoint @ 0x1C01C886C (MagnificationTransformPoint.c)
 */

__int64 __fastcall ApplyMagInputTransform(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdi

  AcquireMagInputLock();
  result = MagInputTransform();
  v5 = result;
  if ( result )
  {
    MagnificationTransformPoint(result, a1);
    result = MagnificationTransformPoint(v5, a2);
  }
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return result;
}
