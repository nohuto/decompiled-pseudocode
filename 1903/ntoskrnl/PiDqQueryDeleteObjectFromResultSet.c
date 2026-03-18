/*
 * XREFs of PiDqQueryDeleteObjectFromResultSet @ 0x1405B58C4
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x1405B6008 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryApplyObjectEvent @ 0x140713A14 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140001CA0 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmObjectRelease @ 0x1405BED44 (PiDmObjectRelease.c)
 */

BOOLEAN __fastcall PiDqQueryDeleteObjectFromResultSet(__int64 a1, void *a2)
{
  BOOLEAN result; // al
  PVOID Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = a2;
  result = RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer);
  if ( result )
    return PiDmObjectRelease(Buffer);
  return result;
}
