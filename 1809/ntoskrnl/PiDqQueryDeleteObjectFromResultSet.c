/*
 * XREFs of PiDqQueryDeleteObjectFromResultSet @ 0x1406CC0D0
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x140590124 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryApplyObjectEvent @ 0x1406F7898 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140006CA0 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmObjectRelease @ 0x140598D30 (PiDmObjectRelease.c)
 */

void __fastcall PiDqQueryDeleteObjectFromResultSet(__int64 a1, unsigned int *a2)
{
  unsigned int *Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = a2;
  if ( RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer) )
    PiDmObjectRelease(Buffer);
}
