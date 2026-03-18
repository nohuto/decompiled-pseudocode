/*
 * XREFs of ObpIncrPointerCountEx @ 0x14007F114
 * Callers:
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObWaitForMultipleObjects @ 0x14060CA50 (ObWaitForMultipleObjects.c)
 *     ObReferenceFileObjectForWrite @ 0x14062D830 (ObReferenceFileObjectForWrite.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall ObpIncrPointerCountEx(volatile signed __int64 *a1, int a2)
{
  __int64 v2; // rax

  v2 = _InterlockedExchangeAdd64(a1, a2);
  if ( v2 <= 0 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, a2 + v2);
  return a2 + v2;
}
