/*
 * XREFs of EditionMagnificationMousePosition @ 0x1C0203360
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     AcquireMagInputLock @ 0x1C0203324 (AcquireMagInputLock.c)
 *     MagInputTransform @ 0x1C02033B4 (MagInputTransform.c)
 *     MagnificationTransformPoint @ 0x1C020346C (MagnificationTransformPoint.c)
 */

__int64 __fastcall EditionMagnificationMousePosition(unsigned __int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // r8

  AcquireMagInputLock();
  result = MagInputTransform();
  if ( result )
  {
    result = PtInRect((_DWORD *)(result + 16), *a1);
    if ( (_DWORD)result )
      result = MagnificationTransformPoint(v3, a1);
  }
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return result;
}
