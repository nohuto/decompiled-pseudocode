/*
 * XREFs of HvpGenerateLogEntryDirtyData @ 0x14008B74C
 * Callers:
 *     HvpGenerateLogEntry @ 0x1406410A4 (HvpGenerateLogEntry.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140083DF0 (RtlNumberOfSetBits.c)
 *     HvpCopyDataToOffsetArray @ 0x14008B83C (HvpCopyDataToOffsetArray.c)
 *     HvpCountSetRangesInVector @ 0x1406319E4 (HvpCountSetRangesInVector.c)
 *     HvpFindNextDirtyBlock @ 0x1406331C4 (HvpFindNextDirtyBlock.c)
 *     CmpLogDirtyVectorUse @ 0x1406413E4 (CmpLogDirtyVectorUse.c)
 */

__int64 __fastcall HvpGenerateLogEntryDirtyData(
        ULONG_PTR BugCheckParameter2,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  _RTL_BITMAP *v6; // rdi
  __int64 v10; // r9
  ULONG v11; // ebx
  unsigned int v12; // eax
  int v14; // [rsp+40h] [rbp-28h]
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 v16; // [rsp+80h] [rbp+18h] BYREF

  LODWORD(v16) = a3;
  a6 = 0;
  v6 = (_RTL_BITMAP *)(BugCheckParameter2 + 88);
  while ( (unsigned __int8)HvpFindNextDirtyBlock(BugCheckParameter2, (__int64)&v16, (__int64)&v15, 0) )
    HvpCopyDataToOffsetArray(v14, v16, a2, v10, a4);
  v11 = RtlNumberOfSetBits(v6);
  v12 = HvpCountSetRangesInVector(v6);
  return CmpLogDirtyVectorUse(BugCheckParameter2, 2LL, v12, v11);
}
