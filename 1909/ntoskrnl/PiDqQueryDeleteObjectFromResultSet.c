/*
 * XREFs of PiDqQueryDeleteObjectFromResultSet @ 0x1405B5CA4
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x1405B63E8 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryApplyObjectEvent @ 0x1407157F4 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140001CA0 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmObjectRelease @ 0x1405BF214 (PiDmObjectRelease.c)
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
