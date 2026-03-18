/*
 * XREFs of ObpIncrPointerCountEx @ 0x14007ED14
 * Callers:
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObWaitForMultipleObjects @ 0x14060AF40 (ObWaitForMultipleObjects.c)
 *     ObReferenceFileObjectForWrite @ 0x1406299E0 (ObReferenceFileObjectForWrite.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall ObpIncrPointerCountEx(volatile signed __int64 *a1, int a2)
{
  __int64 v2; // rax

  v2 = _InterlockedExchangeAdd64(a1, a2);
  if ( v2 <= 0 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, a2 + v2);
  return a2 + v2;
}
