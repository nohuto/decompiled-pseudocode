/*
 * XREFs of MiLockHotPatchUndoPages @ 0x14088F4D0
 * Callers:
 *     MiPrepareDriverForHotPatch @ 0x140890BF0 (MiPrepareDriverForHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x140891D78 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MiLockDriverPageRange @ 0x1402BD4B4 (MiLockDriverPageRange.c)
 *     RtlDetermineHotPatchUndoExtent @ 0x1408D8714 (RtlDetermineHotPatchUndoExtent.c)
 */

__int64 __fastcall MiLockHotPatchUndoPages(__int64 a1, int a2)
{
  char *AnyMultiplexedVm; // rsi
  int i; // ebx
  __int64 result; // rax
  char v7; // [rsp+20h] [rbp-28h]
  int v8; // [rsp+28h] [rbp-20h]
  unsigned int v9; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+20h] BYREF

  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  for ( i = 0; (unsigned __int8)RtlDetermineHotPatchUndoExtent(a2, 1, i, (unsigned int)&v10, (__int64)&v9); ++i )
  {
    result = MiLockDriverPageRange(a1, (__int64)AnyMultiplexedVm, v10, v9, v7, v8);
    if ( (int)result < 0 )
      return result;
  }
  return 0LL;
}
