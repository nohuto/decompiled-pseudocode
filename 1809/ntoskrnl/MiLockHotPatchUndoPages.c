/*
 * XREFs of MiLockHotPatchUndoPages @ 0x14085718C
 * Callers:
 *     MiPrepareDriverForHotPatch @ 0x1408584BC (MiPrepareDriverForHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x140859374 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiLockHotPatchPageRange @ 0x1402B98A4 (MiLockHotPatchPageRange.c)
 *     RtlDetermineHotPatchUndoExtent @ 0x14089AE24 (RtlDetermineHotPatchUndoExtent.c)
 */

__int64 __fastcall MiLockHotPatchUndoPages(__int64 a1, int a2)
{
  char *AnyMultiplexedVm; // rsi
  int i; // ebx
  __int64 result; // rax
  unsigned int v7; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+20h] BYREF

  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  for ( i = 0; (unsigned __int8)RtlDetermineHotPatchUndoExtent(a2, 1, i, (unsigned int)&v8, (__int64)&v7); ++i )
  {
    result = MiLockHotPatchPageRange(a1, (__int64)AnyMultiplexedVm, v8, v7);
    if ( (int)result < 0 )
      return result;
  }
  return 0LL;
}
