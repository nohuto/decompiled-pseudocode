/*
 * XREFs of sub_1409ECFD0 @ 0x1409ECFD0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     PsQueryThreadStartAddress @ 0x14011CB30 (PsQueryThreadStartAddress.c)
 */

__int64 __fastcall sub_1409ECFD0(__int64 a1, void *a2, __int64 a3)
{
  if ( !*(_QWORD *)(a3 + 2456)
    && (void (__noreturn *)())PsQueryThreadStartAddress((__int64)a2, 0) == PopIrpWorkerControl )
  {
    ObfReferenceObject(a2);
    *(_QWORD *)(a3 + 2456) = a2;
  }
  return 0LL;
}
