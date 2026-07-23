/*
 * XREFs of sub_1409AB900 @ 0x1409AB900
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     PsQueryThreadStartAddress @ 0x1400A38B0 (PsQueryThreadStartAddress.c)
 */

__int64 __fastcall sub_1409AB900(__int64 a1, void *a2, __int64 a3)
{
  if ( !*(_QWORD *)(a3 + 2424)
    && (void (__noreturn *)())PsQueryThreadStartAddress((__int64)a2, 0) == PopIrpWorkerControl )
  {
    ObfReferenceObject(a2);
    *(_QWORD *)(a3 + 2424) = a2;
  }
  return 0LL;
}
